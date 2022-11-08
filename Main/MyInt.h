#pragma once

#include <iostream>
using namespace std;

class MyInt
{
	int size;
	int* Arr;

public:
	void setData(int n, int* A);
	friend istream& operator>>(istream&, MyInt&);
	friend ostream& operator<<(ostream&, const MyInt&);

	int getSize() { return size; }
	int* getArray();

	MyInt();
	MyInt(const MyInt&);
	MyInt(int size);
	MyInt(int[], int size);
	~MyInt();

	MyInt operator=(const MyInt&);
	int& operator[](int index);
	operator int* ();
};

