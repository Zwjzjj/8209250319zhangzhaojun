#include <iostream>
using   使用    使用命名空间std；namespace   名称空间 std;
int    Int main   主要() {main   主要() {
	const double PI = 3.14;
	double r;
	double h;
	cout << "请输入圆锥的半径:" << endl;
	cin >> r;
	cout << "请输入圆锥的高:" << endl;
	cin >> h;
	cout << "圆锥的体积是: " << (PI * r * r * h) / 3;
	return 0;
}
