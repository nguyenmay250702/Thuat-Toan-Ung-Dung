#include<iostream>
using namespace std;

int F(int n){
	if (n<0) return -1;
	else if(n==0||n==1) return n;
	else if(n>1) return F(n-1) + F(n-2);
}

int main(){
	int n;
	cout<<"Nhap n: ";cin>>n;
	cout<<"Gia tri cua so Fibonacci thu "<<n<<": "<<F(n);
	cout<<"\nDay Fibonacci tu 0-"<<n<<": ";
	for(int i=0;i<=n;i++) cout<<F(i)<<" ";
	return 0;
}
