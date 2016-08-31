#include <iostream>
#include <string>
 
// 1. Thêm thu vi?n fstream x? lý file vào
#include <fstream>
 
using namespace std;
 
int main()
{
	// 2. M? file
	fstream f;
	f.open("input.txt", ios::in);
 
	// 3. Ð?c d? li?u t? file vào string data
	string data;
	getline(f, data);
 
	// 4. Ðóng file
	f.close();
 
	// Th? hi?n data ra màn hình
	cout << data;
}
