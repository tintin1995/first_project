#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n, i, dem=0;
	cout<<"nhap vao so n:"<<endl;
	cin>>n;
	if(n<2)
	{
		cout<<"khong la so nguyen to"<<endl;
		
	}
	else {
		for(i=2; i<=sqrt(n); i++){
		
		if(n%i==0)
		dem++;
		}
		if(dem==0)
		{
			cout<<"la so nguyen to"<<endl;
		}
		else{
			cout<<"khong la so nguyen to"<<endl;
		}
	}
	getchar();
	return 0;
}
