/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>

using namespace std;

int Lv1C2Q1() {
    // 比较大小
    // 三目运算符 A?B:C
    int a;
    cin >> a;
//	a % 2 == 0 ? cout << "Even" : cout << "Odd";
    if (a % 2 == 0) {
        cout << "Even";
    } else {
        cout << "Odd";
    }
    return 0;
}

int Lv1C2Q2() {
    // 比较大小，输出三个整数中最大的一个序号和值
    int a, b, c;
    cin >> a >> b >> c;
    if (a > b) {
        if (a > c) {
            cout << "1 " << a;
        } else {
            cout << "3 " << c;
        }
    } else {
        if (b > c) {
            cout << "2 " << b;
        } else {
            cout << "3 " << c;
        }
    }
    return 0;
}

int Lv1C2Q3() {
    // 判断闰年
    // 优先级: ! > && > ||
    int a;
    cin >> a;
    if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}

int Lv1C2Q4() {
    // 四则运算器
    double a, c;
    char b;
    cin >> a >> b >> c;
    switch (b) {
        case '+':
            cout << fixed << setprecision(6) << a + c << endl;
            break;
        case '-':
            cout << fixed << setprecision(6) << a - c << endl;
            break;
        case '*':
            cout << fixed << setprecision(6) << a * c << endl;
            break;
        case '/':
            cout << fixed << setprecision(6) << a / c << endl;
            break;
    }
    return 0;
}

int Lv1C2Q5() {
    // 判断2017年某月天数
    int m, d;
    cin >> m;
    switch (m) {
        case 2:
            d = 28;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            d = 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            d = 31;
            break;
    }
    cout << d;
    return 0;
}
