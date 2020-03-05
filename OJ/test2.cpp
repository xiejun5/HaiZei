/*************************************************************************
	> File Name: test2.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 21时46分31秒
 ************************************************************************/
#include <stdio.h>
//#define DEBUG
#ifdef DEBUG

#define log(frm, arg...) {\
    printf("[%s : %s : %d] ", __FILE__, __func__, __LINE__);\
    printf(frm, ##arg);\
    printf("\n");\
}
#else
#define log(frm, arg...)
#endif
#define contact(a, b) a##b

int main() {
    int a = 123;
    //printf("%d %d", a++, a);
    int abcdef = 15;
    contact(abc, def) = 23;
    abcdef = 23;
    log("hello world");
    return 0;
}

