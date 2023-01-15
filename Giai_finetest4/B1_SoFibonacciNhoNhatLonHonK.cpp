#include<iostream>
using namespace std;

/*
//de quy 80.2%
long long F(long long n){
	if(n==0 || n==1) return n;
	else if(n>1) return F(n-1)+F(n-2);
}
*/

//quy hoach dong 100%
/*
long long F(long long k){
	if(k<0) return 0;	
	long long a[100], i = 2;
	a[0] = 0; a[1] = 1; a[2] = 1;
	while(a[i]<=k){
		i++;
		a[i] = a[i-1] + a[i-2];
	}
	return a[i];
}
*/

//100%
/*
long long F(long long k){
	long long F0=0, F1=1, Fn= 0;
	if(k<0) return 0;
	while(Fn <= k){
		Fn = F0+F1;
		F0= F1;
		F1 = Fn;
	}
	return Fn;
}*/

int main(){
	long long k;
	cin>>k;
	cout<<F(k);	
	return 0;
}

