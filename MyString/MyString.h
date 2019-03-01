#pragma once

class MyString
{
private:
	char *str;
public:
	MyString();                                 //Default Constructor
	MyString(const char*);                      //Constructor
	MyString(const MyString&);                  //Copy Constructor
	~MyString();                                //Destructor

	MyString operator=(const MyString&);        //Assignment Operator
	MyString operator+(const MyString&);        //Addition Operator
	bool operator==(const MyString&);           //'==' Operator
	char* c_str()const;                         //Getter Function
};

	//Output Operator
	ostream &operator << (ostream &str, const MyString &other);