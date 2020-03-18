#include "MyString.h"
#include<iostream>
using namespace std;

MyString::MyString()
{
	this->length = 0;
	this->kyTu = new char[length+1];
	kyTu[length] = NULL;
}
MyString::~MyString()
{
	//delete kyTu;
}

MyString::MyString(const MyString &p)
{
	this->length = p.length;
	kyTu = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		kyTu[i] = p.kyTu[i];
	}
	kyTu[length] = NULL;
}

int GetChieuDai(const char*arr)
{
	int i=0;
	while (arr[i]!='\0')
	{
		i++;
	}
	return i;
}
MyString::MyString(char *p)
{
	//this->lenght = 10;
	this->length= GetChieuDai(kyTu);
	kyTu = new char[length + 1];
	for (int i = 0; i < length; i++)
	{
		kyTu[i] = *(p + i);
	}
	kyTu[length] = NULL;
}
int MyString::len()
{
	return length;
}
/*MyString operator+(MyString s1,MyString s2)
{

	MyString temp(s1.lenght + s2.lenght);
	for (int i = 0; i < s1.lenght; i++)
		temp.s[i] = s1.s[i];
	for (int i = 0; i < s2.lenght; i++)
		temp.s[s1.lenght+ i] = s2.s[i];
	return temp;
}*/
/*MyString& MyString::operator+(const MyString &p1)
{
	char* temp = kyTu;
	lenght += p1.lenght;
	kyTu = new char[lenght + 1];
	strcpy(kyTu, temp);
	strcat(kyTu, p1.kyTu);
	return *this;
}*/
bool MyString::operator==(const MyString &p)
{
	for (int i = 0; i < p.length; i++)
		if (this->kyTu[i] != p.kyTu[i])
		{
			return false;
		}
	return true;
}
bool MyString::operator!=(const MyString &p)
{
	if (operator==(p) == true)
	{
		return false;
	}
	else return true;
}
bool MyString::operator>=(const MyString& p)
{
	for (int i = 0; i < p.length; i++)
		if (this->kyTu[i] < p.kyTu[i])
			return false;
	return true;
}

bool MyString::operator<(const MyString& p)
{
	return !operator>=(p);
}

bool MyString::operator<=(const MyString &p)
{
	for (int i = 0; i < p.length; i++)
		if (this->kyTu[i] > p.kyTu[i])
			return false;
	return true;
}

bool MyString::operator>(const MyString &p)
{
	return !operator<=(p);
}

char MyString::GetKytu(int a)
{
	return this->kyTu[a];
}
void MyString::SetKytu()
{
	int k;
	this->length = GetChieuDai(kyTu);
	do
	{
		cout << "Nhap chi so :";
		cin >> k;
	} while (k<0 || k>=this->length);
	cout<<GetKytu(k)<<endl;
}
istream& operator>>(istream &i, MyString &p)
{
	cout << "Nhap xau :";
	i >> p.kyTu;
	return i;
}
ostream& operator<<(ostream &o, const MyString &p)
{
	o << "Xuat xau :";
	o << p.kyTu << endl;
	return o;
}