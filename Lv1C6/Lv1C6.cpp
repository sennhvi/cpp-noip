/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>
#include <cstdio>

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
    //
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


