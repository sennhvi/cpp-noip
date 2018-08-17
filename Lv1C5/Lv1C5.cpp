/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>

using namespace std;


int size(int length, int width);

bool check(int a, int b);

long long factorial(long long n);

int sum(int n, int a[100]);

int Lv1C5Q1() {
    // 输入两个正整数分别代表矩形的两条边长，两个数字用一个空格隔开，要求输出一个正整数表明矩形的面积。
    int a, b;
    cin >> a >> b;
    cout << size(a, b);
    return 0;
}

int Lv1C5Q2() {
    // 有两个整数a，b，其中0，0<=b<10，当整数a中包括数字b时，输出结果为true，否则输出结果为false。
    int a, b;
    cin >> a >> b;
    if (check(a, b)) cout << "true";
    else cout << "false";

    return 0;
}

int Lv1C5Q3() {
    // 求正整数n 的阶乘并输出。满足0<=n<=20。
    int n;
    cin >> n;
    cout << factorial(n);

    return 0;
}

int Lv1C5Q4() {
    //
    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << sum(n, a);
    return 0;
}


int size(int length, int width) {
    return length * width;
}

bool check(int a, int b) {
    while (a) {
        if (a % 10 == b) return true;
        else a /= 10;
    }
    return false;
}

long long factorial(long long n) {
    if (n == 1) return 1;
    else return n * factorial(n - 1);
}

int sum(int n, int a[100]) {
    int s = a[0];
    // 由于第一个a[0]已经统计，因此从i=1开始更新
    for (int i = 1; i < n; i++) {
        a[i] += a[i - 1];
        s += a[i];
    }
    return s;
}