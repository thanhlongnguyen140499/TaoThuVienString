#include<iostream>
using namespace std;
#include"MyString.h"
int main()
{
	MyString a1,a2;
	cin >> a1;
	cout <<a1 <<endl;
	cin >> a2;
	cout <<a2 <<endl;

	MyString a3;
	a3 = a2;
	cout << "SD ham dung sao chep\n";
	cout << a3;

	cout << "So sanh == :" << (a3 == a2)<<endl;
	cout << "So sanh != :" << (a3 != a2)<<endl;
	cout << "So sanh >= :" << (a3 >= a2) << endl;
	cout << "So sanh <= :" << (a3 <= a2) << endl;
	cout << "So sanh > :" << (a3 > a2) << endl;
	cout << "So sanh < :" << (a3 < a2) << endl;

	cout << "----------LAY KY TU----------\n";
	a3.SetKytu();

	
	system("pause");
	return 0;
}