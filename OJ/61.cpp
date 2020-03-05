/*************************************************************************
	> File Name: 61.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 13时51分23秒
 ************************************************************************/

#include <stdio.h>
#include <inttypes.h>

typedef struct TEST_INTO {
    int testNum;
    int YesNum;
    int NoNum;
} TEST_INFO;

#define TEST(a, b) 

#define EXPECT_EQ(a, b) {\
    (a) == (b) ? __ti->YesNum++ : __ti->NoNum++;\
    __ti->testNum++;\
}

int haizei_test_run(void (*func)(TEST_INFO *), const char *str1, const char *str2) {
    TEST_INFO ti = {0, 0, 0};
    printf("[RUN] %s.%s\n", str1, str2);
    func(&ti);
    if (ti.NoNum == 0) {
        printf("[ok] %s.%s %d pass %d failed\n", str1, str2, ti.YesNum, ti.NoNum);
    } else {
        printf("[FAILED] %s.%s %d pas %d failed\n", str1,str2, ti.YesNum, ti.NoNum);
    }
    return 0;
}

int isPrime(int x);

TEST(isprime, bound) {
    EXPECT_EQ(isprime(0), 0);
    EXPECT_EQ(isprime(1), 0);
    EXPECT_EQ(isprime(INT32_MIN), 0);
}

TEST(isprime, bound) {
    #ifndef MAX_N
    #define MAX_N 100
    #endif

    int prime[MAX_N + 5] = {1, 1};
    for (int i = 2; i * i <= MAX_N; i++) {
        if (!prime[i]) {
            for (int j = i * i; j <= MAX_N; j += i) {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= MAX_N; i++) {
        EXPECT_EQ(isPrime(i), prime[i] == 1);
    }
}


int main() {
    return 0;
}

int isPrime(int x) {
    if (x < 2) return 1;
    for (int i = 2; i <= x; i++) {
        if (!(x & i)) return 1;
    }
    return 0;
}
