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
            cout << i + 1 << ' ' << a[i] << endl;
        }
    }
    return 0;
}

int Lv1C4Q2() {
    /*
     * 有n盏灯，编号为1到n。第1个人把所有灯打开，第二个人按下所有编号为2的倍数的开关（这些灯将被关掉）
     * 第3个人按下所有编号为3的倍数的开关（其中关掉的灯将被打开，开着的灯将被关闭），依此类推。
     * 一共有k个人，问最后有哪些灯开着？
     * 对于所有数据，满足1<=k<=n<=1000
     */
    int n, k;
    int a[1005] = {0};
    cin >> n >> k;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= k; j++) {
            if (i % j == 0) {
                a[i] = !a[i];
            }
        }
    }
    // 更好的方案
//    for (int i = 1; i <= k; i++) {
//        for (int j = i; j <= n; j += i) {
//            a[j] = !a[j];
//        }
//    }

    for (int i = 1; i <= n; i++) {
        if (a[i]) {
            cout << i << " ";
        }
    }
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


