/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>

using namespace std;


int size(int length, int width);

bool check(int a, int b);


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
    //
    return 0;
}

int Lv1C5Q4() {
    //
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
