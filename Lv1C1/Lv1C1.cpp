/*
    Implement functions in this file
*/
#include <iostream> 
#include <iomanip>
using namespace std;

int Lv1C1Q1() {
//	一个数的诞生 
	int a, b, c;
	cin >> a >> b;
	c = a + b;
	cout << c << endl;	
}

int Lv1C1Q2() {
//	三个数的平均数，iomanip
	double a, b, c, d;
	cin >> a >> b >> c;
	d = (a + b + c) / 3;
	cout << fixed << setprecision(3) << d << endl;
}

int Lv1C1Q3() {
//	成绩等级转换
	char grade;
	double score;
	cin >> grade >> score;
	grade -= 32;
	cout << grade << ' ' << fixed << setprecision(2) << score << endl;
}

int Lv1C1Q4() {
//	分糖果，每个人糖果分3份，多余吃掉，俩份分别给邻近 
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    a = a / 3; b = b + a; e = e + a;
    b = b / 3; c = c + b; a = a + b;
    c = c / 3; b = b + c; d = d + c;
    d = d / 3; e = e + d; c = c + d;
    e = e / 3; d = d + e; a = a + e;
    cout << a <<" " << b << " " << c << " " << d << " " << e;
    return 0;	
}
