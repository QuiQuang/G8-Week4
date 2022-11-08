#include "MyInt.h"

int main() {
	MyInt Ans;
	cin >> Ans;

	cout << "\nKet qua vua nhap : ";
	cout << Ans;

	cout << endl << "\nDefault : \n";
	MyInt Defa;
	cout << Defa;

	MyInt Copy(Ans);
	cout << endl << "\nCopy : \n";
	cout << Copy << endl;

	Defa = Copy;
	cout << "\nGan : \n";
	cout << Defa << endl;

	MyInt Set(5);
	cout << "\nSet size : \n";
	cout << Set << endl;

	int index, value;
	cout << "\nTruoc khi doi : \n" << Ans;
	cout << "\nNhap vi tri muon doi : "; cin >> index;
	cout << "Nhap gia tri muon doi : "; cin >> value;
	Ans[index] = value;
	cout << "Sau khi doi : \n" << Ans;

	cout << "\n\nMang sau khi chuyen doi : \n";
	int* Mang = new int[Ans.getSize()];
	Mang = Ans;
	for (int i = 0; i < Ans.getSize(); i++)
		cout << "Phan tu thu " << i + 1 << " : " << Mang[i] << endl;
	return 0;
}