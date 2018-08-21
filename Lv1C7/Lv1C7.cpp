/*
    Implement functions in this file
*/
//#include <iostream>
//#include <iomanip>
#include <cstdio>
#include <cstring>

using namespace std;

int transfer_plus(int a[], char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len; i++) {
        a[len - i - 1] = s[i] - '0';
    }
}

int transfer_minus(int a[], char s[]) {
    int i, len;
    len = strlen(s);
    for (i = 0; i < len; i++) {
        a[len - i - 1] = s[i] - '0';
    }
    return len;
}


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
    // 在两行中分别输入两个L1位和L2位正整数A1和A2，满足0，一个数字占一行，要求计算两个数的和S，并在一行中输出。
    char s1[100], s2[100];
    int a1[100], a2[100], ans[101];
    int len1, len2, s = 0, c = 0; // s: 计算位，c: 进位
    memset(ans, 0, sizeof(ans)); // memset 将数组中所有元素都重置为0
    memset(a1, 0, sizeof(a1));
    memset(a2, 0, sizeof(a2));
    scanf("%s\n%s", s1, s2);
    len1 = transfer_plus(a1, s1);
    len2 = transfer_plus(a2, s2);
    while (s <= len1 || s <= len2) {
        ans[s] = a1[s] + a2[s] + c;
        c = ans[s] / 10;
        ans[s] %= 10;
        s++;
    }
    if (ans[s - 1] == 0) s--;
    for (int i = s - 1; i >= 0; i--) printf("%d", ans[i]);

    return 0;
}

int Lv1C7Q3() {
    // 在两行中分别输入一个 L1 位和 L2 位正整数 A1 和 A2，保证 A1> A2 且满足0 < L1 , L2 <100
    // 一个数字占一行，要求计算A1-A2的差S，并在一行中输出，数字前部无多余的0。
    char s1[100], s2[100];
    int a1[100], a2[100], ans[100];
    int len1, len2, s = 0, c = 0, i;
    memset(ans, 0, sizeof(ans));
    memset(a1, 0, sizeof(a1));
    memset(a2, 0, sizeof(a2));

    scanf("%s\n%s", s1, s2);
    len1 = transfer_minus(a1, s1);
    len2 = transfer_minus(a2, s2);
    while (s <= len1) {
        a1[s] -= c;
        if (a1[s] < a2[s]) {
            c = 1;
            a1[s] += 10;
        } else c = 0;
        ans[s] = a1[s] - a2[s];
        s++;
    }
    while (ans[s - 1] == 0) s--;
    for (i = s - 1; i >= 0; i--) printf("%d", ans[i]);
    return 0;
}

