#include<iostream>
#include<cmath>

using namespace std;

int main(){
	long long a,b;
	long long c;
	
	cout<<"Nhap a = "; cin>>a;
	cout<<"Nhap b = "; cin>>b;
	c = (pow(a,b)>999999999||pow(a,b)<999999999)? abs((long long)pow(a,b)%1000000000):pow(a,b);
	cout<<"\na^b = "<<a<<"^"<<b<<" = "<<c;

	return 0;
}





