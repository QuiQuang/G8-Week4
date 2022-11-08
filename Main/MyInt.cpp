#include "MyInt.h"

void MyInt::setData(int n, int* A) {
	size = n;
	Arr = new int[n];
	for (int i = 0; i < n; i++)
		Arr[i] = A[i];
}

istream& operator>>(istream& in, MyInt& Ans) {
	do {
		cout << "Nhap so luong phan tu : ";
		in >> Ans.size;
	} while (Ans.size < 0);
	Ans.Arr = new int[Ans.size];
	for (int i = 0; i < Ans.size; i++) {
		cout << "Nhap thang thu " << i + 1 << " : ";
		in >> Ans.Arr[i];
	}
	return in;
}

ostream& operator<<(ostream& out, const MyInt& Ans) {
	out << "Size : " << Ans.size << "\n" << "Cac phan tu : ";
	for (int i = 0; i < Ans.size; i++)
		out << Ans.Arr[i] << "   ";
	return out;
}

int* MyInt::getArray() {
	int* temp = new int[size];
	for (int i = 0; i < size; i++)
		temp[i] = Arr[i];
	return temp;
}

MyInt::MyInt() {
	size = 0;
	Arr = NULL;
}

MyInt::MyInt(const MyInt& A) {
	size = A.size;
	Arr = new int[size];
	for (int i = 0; i < size; i++)
		Arr[i] = A.Arr[i];
}

MyInt::MyInt(int size) {
	this->size = size;
	this->Arr = new int[size];
	for (int i = 0; i < size; i++)
		Arr[i] = 0;
}

MyInt::MyInt(int array[], int size) {
	this->setData(size, array);
}

MyInt MyInt::operator=(const MyInt& A) {
	if (this != &A) {
		delete[]this->Arr;
		this->setData(A.size, A.Arr);
	}
	return *this;
}

MyInt::~MyInt() {
	if (size > 0) {
		size = 0;
		delete[] Arr;
	}
}

int& MyInt::operator[](int index) {
	if (index > size) {
		cout << "Loi.\n";
		exit(0);
	}
	return Arr[index];
}

MyInt::operator int* () {
	return Arr;
}