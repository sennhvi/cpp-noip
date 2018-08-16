/*
    Implement functions in this file
*/
#include <iostream>
#include <iomanip>
#include <cstring>

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
    char a[105], b[105];
    scanf("%s %s", a, b);

    int len_a = strlen(a), len_b = strlen(b);
    if (len_a != len_b) puts("No");
    else {
        bool is_same = true;
        for (int i = 0; i < len_a; i++) {
            if (a[i] != b[i] && a[i] - b[i] != 32 && b[i] - a[i] != 32) {
                is_same = false;
                break;
            }
        }
        puts(is_same ? "Yes" : "No");
    }
    return 0;
}

int Lv1C4Q4() {
    /*
     * 给定一个4*4的矩阵（数学上，一个r×c的矩阵是一个由r行c列元素排列成的矩形阵列），将第n行和第m行交换，输出交
     * 换后的结果。1<=m,n<5
     */
    int a[4][4];
    int m, n;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }
    cin >> m >> n;
    n--;
    m--;
    cout << m << n;
    cout << '\n';
    for (int i = 0; i < 4; i++) {
        int temp = a[m][i];
        a[m][i] = a[n][i];
        a[n][i] = temp;
    }
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j];
            cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}

int Lv1C4Q5() {
    /*
     * 大部分元素是0的矩阵称为稀疏矩阵
     * 假设有k个非0元素，则可以把矩阵用k * 3的矩阵简记之，其中第一列是行号，第二列是列号，第三列是该元素的值。
     * 如：
        0 0 0 5 简记成：1 4 5
        0 2 0 0	        2 2 2
        0 1 0 0	        3 2 1
     *  试编程读入一个3行5列的稀疏矩阵，转换成简记形式。
     */
    int a[3][5];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if (a[i][j] != 0) {
                cout << i + 1 << ' ' << j + 1 << ' ' << a[i][j] << endl;
            }
        }
    }
    return 0;
}


