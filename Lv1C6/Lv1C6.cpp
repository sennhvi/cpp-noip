/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

// Lv1Q1
struct student {
    char name[11];
    int grade;
};
struct student stu[101];
//struct student {
//    char name[11];
//    int grade;
//} stu[101];


// Lv1Q2
struct Point {
    double x, y;
};

double length(Point m, Point n) {
    double p = m.x - n.x;
    double q = m.y - n.y;
    return sqrt(p * p + q * q);
}

struct Triangle {
    Point a, b, c;

    // 结构体的成员函数，提供一些供结构体变量调用的功能
    double calc() {
        return length(a, b) + length(b, c) + length(a, c);
    }
};

// Lv1Q3
int p[8] = {2, 3, 5, 7, 11, 13, 17, 19};
struct Ans {
    int a, b;
};

Ans solve(int x) {
    Ans ans;
    for (int i = 0; i < 8; i++) {
        if (x % p[i] == 0) {
            ans.a = p[i];
            int y = 1;
            for (int j = 1; j <= 5; j++) {
                y *= p[i];
                if (x == y) {
                    ans.b = j;
                    break;
                }
            }
            break;
        }
    }
    return ans;
}


// Lv1C6Q4
void exchange(int &a, int &b) {
    int t = a;
    a = b;
    b = t;
}


int Lv1C6Q1() {
    /*
     * 找出第一名，数据满足0< n <=100，且学生成绩为0到100之间的整数，即0 <= ai <=100.
     * 数据保证成绩最好的学生只有1个，且每个学生名字长度不超过10个字母。
     */
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s%d", &stu[i].name, &stu[i].grade);
    }
    int m = 0;
    for (int i = 1; i < n; i++) {
        if (stu[m].grade < stu[i].grade) {
            m = i;
        }
    }
    printf("%s %d\n", stu[m].name, stu[m].grade);

    return 0;
}

int Lv1C6Q2() {
    /*
     * 给出三角形三个顶点的坐标（x,y），求该三角形的周长。
     * 对所有数据，满足-100<=x,y<=100。
     */
    Triangle t;
    cin >> t.a.x >> t.a.y >> t.b.x >> t.b.y >> t.c.x >> t.c.y;
    cout << fixed << setprecision(2) << t.calc();
    return 0;
}

int Lv1C6Q3() {
    /*
     * 输入a的b次幂的结果，求解a和b的值，其中a是20以内的质数，b是1到5之间的整数（包含1和5）。
     * 数据满足0<x<=10，000，000，且输入数据保证x可以表示成a的b次幂的形式
     */
    int x;
    cin >> x;
    Ans ans = solve(x);
    cout << ans.a << ' ' << ans.b << endl;
    return 0;
}

int Lv1C6Q4() {
    /*
     * void exchange(int &a, int &b) {int t = a; a = b; b = t;} // 使用引用来交换值
     * void exchange(int a[], int m, int n) {int t = a[m]; a[m] = a[n]; a[n] = t;} // 使用数组指针来交换值
     * 在C++中，当函数参数为数组时，对数组的操作，也可以作用于函数外部的数组的
     */
    /*
     * 5名身高不等的同学从左到右站成一排，要求把身高最高的同学和最左边的同学互换位置
     * 完成互换后，再把身高最矮的同学和最右边的同学互换位置。
     * 数据满足输入的所有整数均为不超过300的正整数。
     */
    int a[5];
    for (int i = 0; i< 5; i++) {
        cin >> a[i];
    }
    int max_num = 0;
    for (int i = 1; i < 5; ++i) {
        if (a[i] > a[max_num])
            max_num = i;
    }
    exchange(a[0], a[max_num]);
    int min_num = 1;
    for (int i = 2; i < 5; ++i) {
        if (a[i] < a[min_num])
            min_num = i;
    }
    exchange(a[4], a[min_num]);
    for (int i = 0; i < 5; ++i) {
        cout << a[i] << ' ';
    }
    return 0;
}
