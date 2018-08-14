/*
    Implement functions in this file
*/
#include <iostream> 
#include <iomanip>

using namespace std;

int Lv1C4Q1() {
	// 某学校有n名学生，学号从1~n。现有所有学生的期中考试成绩。请帮老师找出全校平均分以下的学生的学号和成绩。
	//对于所有数据，n <= 1000。
    double a[1000];  // 不允许使用变量作为数组长度
    double n, c, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    c = sum / n;
    for (int i = 0; i < n; i++) {
        if (a[i] < c) {
            cout << i+1 << ' ' << a[i] << endl;
        }
    }
    return 0;
}

int Lv1C4Q2() {
	//
    return 0;
}

int Lv1C4Q3() {
	//
    return 0;
}

int Lv1C4Q4() {
	//
    return 0;
}

int Lv1C4Q5() {
	//
    return 0;
}


