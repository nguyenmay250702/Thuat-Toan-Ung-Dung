#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;
const long long n=1000000; long long a[n];

void min_k(long long k){
	for(long long i=0; i<k; i++){
		for(long long j=i+1; j<n; j++){
			if(a[i]>a[j]){
				int temp = a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	//for(int i=0;i<n;i++) cout<<a[i]<<" ";
	cout<<"\nGia tri nho nhat thu "<<k<<" la: "<<a[k-1];
}


int main(){
	for (long long i = 0; i < n; i++) a[i] = rand() % 100 - 50 ;
	long long k;
	cout<<"Nhap k = "; cin>>k;
	
	clock_t begin = clock();
	min_k(k);
	clock_t end = clock();
	cout << "\n- Thoi gian thuc hien thuat toan: " << double(end - begin) / CLOCKS_PER_SEC <<" giay"<< endl;
	
	return 0;
}
