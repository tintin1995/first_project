#include <iostream>
#include <string>
 
// 1. Th�m thu vi?n fstream x? l� file v�o
#include <fstream>
 
using namespace std;
 
int main()
{
	// 2. M? file
	fstream f;
	f.open("input.txt", ios::in);
 
	// 3. �?c d? li?u t? file v�o string data
	string data;
	getline(f, data);
 
	// 4. ��ng file
	f.close();
 
	// Th? hi?n data ra m�n h�nh
	cout << data;
}
