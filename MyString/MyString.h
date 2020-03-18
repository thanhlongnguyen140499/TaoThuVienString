#pragma once
#include<iostream>
using namespace std;

class MyString
{
private:
	int length;
	char *kyTu;
	friend int GetChieuDai(const char*);
public:
	MyString();
	~MyString();
	MyString(char *);
	MyString(const MyString &);
	int len();
	//friend MyString operator+(MyString, MyString);
	MyString& operator+(const MyString&);
	friend istream& operator>>(istream &, MyString &);
	friend ostream& operator<<(ostream &,const MyString &);
	bool operator==(const MyString&);
	bool operator!=(const MyString&);
	bool operator>=(const MyString&);
	bool operator<=(const MyString&);
	bool operator>(const MyString&);
	bool operator<(const MyString&);
	char GetKytu(int);
	void SetKytu();
};

