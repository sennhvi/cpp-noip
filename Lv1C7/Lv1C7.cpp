/*
    Implement functions in this file
*/
//#include <iostream>
//#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int Lv1C7Q1() {
    // 输入一个N位正整数S，其中0。判断该正整数能否被3整除，如果能，输出：Yes，如果不能，输出：No。
    /**
     * 1. 采用字符串的方式读入数字
     * 2. 通过字符串长度得到数字的位数
     * 3. 将字符串中的每一位数字字符转化为数字
     * 4. 将每位数字保存到整数数组中
     */
    char s[100];
    int a[100];
    int len, sum = 0;
    scanf("%s", &s);
    len = strlen(s);
    for (int i = 0; i < len; i++) {
        a[i] = s[i] - '0';
        sum += a[i];
    }
    if (sum % 3 == 0) printf("Yes");
    else printf("No");
    return 0;
}

int Lv1C7Q2() {
    //
    return 0;
}

int Lv1C7Q3() {
    //
    return 0;
}


