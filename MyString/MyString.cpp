#include <iostream>
using namespace std;
#include "MyString.h"

MyString::MyString()
{
	str = new char(0);
}

MyString::MyString(const char* other)
{
	str = new char[strlen(other) + 1];
	for (int i = 0; i < (strlen(other) + 1); i++)
		str[i] = other[i];
}

MyString::MyString(const MyString& other)
{
	str = new char[strlen(other.str) + 1];
	strcpy_s(str, strlen(other.str) + 1, other.str);
}

MyString::~MyString()
{
	delete[] str;
}

MyString MyString::operator=(const MyString &other)
{
	if (this != &other)
	{
		delete[] str;
		str = new char[strlen(other.str) + 1];
		strcpy_s(str, (strlen(other.str) + 1), other.str);
	}
	return *this;
}

MyString MyString::operator+(const MyString &other)
{
	int size = ((strlen(other.str)) + (strlen(str)) + 1);
	MyString temp;
	temp.str = new char[size];

	strcpy_s(temp.str, size, str);
	strcat_s(temp.str, size, other.str);

	return temp;
}

bool MyString::operator==(const MyString &other)
{
	bool temp = true;
	
	if ((strlen(str)) == strlen(other.str))
	{
		for (int i = 0; i < (strlen(str)) && temp; i++)
		{
			if (str[i] != other.str[i])
				temp = false;
		}
	}
	else
		temp = false;

	return temp;
}

char* MyString::c_str()const
{
	return str;
}

ostream &operator << (ostream &str, const MyString &other)
{
	for (int i = 0; i < (strlen(other.c_str()) + 1); i++)
		str << other.c_str()[i];

	return str;
}