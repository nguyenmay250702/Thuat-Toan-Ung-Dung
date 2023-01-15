#include<iostream>
#include<vector>
#include<map>
using namespace std;

//de quy
/*
long long C(int k, int n){
	if(k==0||k==n) return 1;
	if(k>n) return 0;
	return C(k,n-1) + C(k-1, n-1);
}
*/

//de quy co nho
//sd map
map<vector<int>, long long> A;
long long C(int k, int n){	
	if(k==0||k==n) return 1;
	if(k>n) return 0;
	if(A[{k,n}] == 0) A[{k,n}] = C(k,n-1) + C(k-1,n-1);
	return A[{k,n}];
}


//sd mang 2 chieu
/*
long long A[100][100];
long long C(int k, int n){	
	if(k==0||k==n) return 1;
	if(k>n) return 0;
	if(A[k][n]==0) A[k][n] = C(k,n-1) + C(k-1,n-1);
	return A[k][n];
}*/

int main(){
	int k, n;
	cout<<"nhap n: "; cin>>n;
	cout<<"nhap k: "; cin>>k;
	
	cout<<C(k,n);
	return 0;
}
