#include<iostream>
using namespace std;

long long g(int n){
	if(n==1 || n==3) return n;
	else{
		if(n%4==0 || n%4==2) return g(n/2);
		else if(n%4==1) return 2*g(2*(n/4) + 1) - g(n/4);
		else if(n%4==3) return 3*g(2*(n/4) + 1) - 2*g(n/4);
	}
}

int main(){
	int n;
	cout<<"Nhap n = "; cin>>n;
	cout<<"g("<<n<<") = "<<g(n);
	return 0;
}
