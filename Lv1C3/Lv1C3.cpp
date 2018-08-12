/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;

int Lv1C3Q1() {
    // 输入指定个数字并求和
    int a, b, sum = 0;  // assignment in declaration
    cin >> a;
    // cin >> b >> c >> d;
    for (int i = 0; i < a; i++) {
        cin >> b;
        sum += b;
    }
    cout << sum;
    return 0;
}

int Lv1C3Q2() {
    // 求n个正整数的平均值，结果保留2位小数
    // Win: Enter, Ctrl+Z, Enter
    // Linux: Ctrl+D
    int a, count = 0;
    double sum = 0;
    while (scanf("%d", &a) == 1) {
        sum += a;
        count++;
    }
    printf("%0.2f", sum / count);
    return 0;
}

int Lv1C3Q3() {
//
    return 0;
}

int Lv1C3Q4() {
//
    return 0;
}

int Lv1C3Q5() {
//
    return 0;
}


