#include <iostream>
using namespace std;

const int MAX=1000;

int n,a[MAX];

int main() 
{
	cout<<"N = ";cin>>n;
	a[0] = 1, a[1]=1;
	for(int i=2;i<=n;i++) a[i]=a[i-1]+2*a[i-2];
	cout<<"So phuong an = "<<a[n];
} 
