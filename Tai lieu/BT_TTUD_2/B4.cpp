#include<iostream>
using namespace std;

int main(){
	int a[] = {1,2,3,4,10,20,30,40,100,200}, m = 99999999, k;
	cout<<"Nhap k: "; cin>>k;
	for(int i=0; i<10-k-1; i++){
		m = min(m, a[i+k-1]-a[i]);
	}
	cout<<m;
	return 0;
}
