#include<iostream>
using namespace std;

int k, n, a[100], binary_sequence[100], dem = 0;
void sinh(int j){
	if(j>=n){
		int sum = 0;
		for(int i=0; i<n; i++){
			if(binary_sequence[i]==1) sum += a[i];
		}
		if(sum > k) dem++;
	}
	else{
		binary_sequence[j] = 0; sinh(j+1);
		binary_sequence[j] = 1; sinh(j+1);
	}
}

int main(){
	cout<<"Nhap k = "; cin>>k;
	cout<<"Nhap n = "; cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"a["<<i<<"] = ";cin>>a[i];	
	}
	sinh(0);
	cout<<"\nSo day con tm ycbt = "<<dem;
}
