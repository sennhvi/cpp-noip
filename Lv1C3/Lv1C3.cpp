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
    // 求体操队人数，7的倍数，取模6-2都为1
    int x = 0;
    bool y;
    do {
        y = true;
        x += 7;
        for (int i = 2; i <= 6; i++) {
            if (x % i != 1) {
                y = false;
            }
        }
    } while (y == false);
    cout << x;
    return 0;
}

int Lv1C3Q4() {
    // 查找100以内的所有质数，并输出
    for (int i = 2; i < 100; i++) {
        bool is_prime = true;
        for (int j = 2; j < i && is_prime; j++) {
            if (i % j == 0) {
                is_prime = false;
            }
        }
        if (is_prime) cout << i << ' ';
    }
    return 0;
}

int Lv1C3Q5() {
    // aabb形式的完全平方数(可以由数的平方组成)
    int n = 0, x = 0, aa, bb;
    while (true) {
        x++;
        n = x * x;
        if (n < 1000) continue;
        if (n > 9999) break;
        aa = n / 100;
        bb = n % 100;
        if (aa / 10 == aa % 10 && bb % 10 == bb / 10) cout << n << endl;
    }
    return 0;
}
