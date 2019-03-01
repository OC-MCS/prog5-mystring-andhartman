//=====================================================
// Andrew Hartman
// March 1, 2019
// Programming Assignment #5
// Description: MyString
//=====================================================
#include <iostream>
using namespace std;
#include "MyString.h"

void display(MyString other)
{
	cout << other;
}

MyString test(MyString other)
{
	return other;
}

int main()
{
	//test all ways to initiate a MyString
	MyString s1;
	MyString s2("a");
	MyString s3(s2);
	MyString s4("b");

	//cout << s1 << endl;
	//cout << s2 << endl;
	//cout << s3 << endl;

	//test = operator
	//s1 = s2;
	//s1 = s1;
	//cout << s1 << endl;
	//s1 = s3 = s4;
	//cout << s1 << s3 << s4;

	//test + operator
	//s1 = "hello";
	//s2 = " world";
	//s3 = s1 + s2;
	//cout << s3 << endl;
	   
	//test putting in and returning from function
	//display(s4);
	//cout << s2;
	//s2 = test(s4);
	//cout << s2;

	//test == operator
	//if (s2 == s3)
	//	cout << "yay";

	//everything tested (above) works exactly as expected!!!

	return 0;
}