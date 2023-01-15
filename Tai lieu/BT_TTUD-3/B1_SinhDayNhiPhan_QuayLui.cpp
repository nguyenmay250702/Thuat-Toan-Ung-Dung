//sinh day nhi phan co do dai la n bit

#include<iostream>
using namespace std;

const int MAX = 100;
int a[MAX], n;

void print(){
	for(int i=0; i<n; i++) cout<<" "<<a[i];
	cout<<endl;
}

void sinh(int k){
	if(k>=n) print();	//da sinh xong day
	else{		//neu day chua dc sinh xong
		a[k] = 0; sinh(k+1);	//gan a[k]=0; goi de quy sinh phan tu tiep theo(k+1)
		a[k] = 1; sinh(k+1);
	}	
}

int main(){
	cout<<"Nhap n = "; cin>>n;
	sinh(0);
}
