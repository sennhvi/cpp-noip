/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>

using namespace std;

struct student {
    char name[11];
    int grade;
};
struct student stu[101];
//struct student {
//    char name[11];
//    int grade;
//} stu[101];

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
    //
    return 0;
}

int Lv1C6Q4() {
    //
    return 0;
}


