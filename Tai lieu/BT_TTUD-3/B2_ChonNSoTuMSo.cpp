#include<iostream>
using namespace std;

int a[100], m, n;

void print(){
	for(int i=1; i<=n; i++) cout<<" "<<a[i];
	cout<<endl;
}

void sinh(int k){
	if(k>n) {
		print();
		return;
	}
	for(int i = a[k-1]+1; i<=m; i++) {
		cout<<i<<endl;
		a[k] = i; sinh(k+1);
	}
}

int main(){
	cout<<"Nhap m = "; cin>>m;
	cout<<"Nhap n = "; cin>>n;
	a[0] = 0;
	sinh(1);
}
