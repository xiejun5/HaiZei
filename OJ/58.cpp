/*************************************************************************
	> File Name: 58.cpp
	> Author: 
	> Mail: 
	> Created Time: 2020年01月21日 星期二 21时31分05秒
 ************************************************************************/
#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) {\
    typedef __a = (a);\
    typedef __b = (b);\
    __a > __b ? __a : __b;\
}
#define Plog(frm, arg...) {\
    printf("[ $funcname : %s $lineno : %d ]\n", __func__, __LINE__);\
    printf(frm, ##arg);\
}


void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}
