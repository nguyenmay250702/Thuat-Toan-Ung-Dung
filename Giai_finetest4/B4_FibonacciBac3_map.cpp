#include <bits/stdc++.h>
using namespace std;

map<int, long long> f;
/*
long long F(int n){
	if(n<=2) return f[n];
	if(f[n]==0){
		if(n%3==0) f[n] = F(2*(n/3));
		else if(n%3==1) f[n] = F(2*(n/3)) + F(2*(n/3)+1);
		else if(n%3==2) f[n] = F(2*(n/3)) + F(2*(n/3)+1) + F(2*(n/3)+2);
	}
	return f[n];
}
*/

long long F(long long n){
	if(n<=2)
		return f[n];
	if(f[n] == 0){
		int r = n % 3;
		int k = n / 3;
		for (int i = 0; i <= r; i++)
			f[n] += F(2*k + i);
	}
	return f[n];	
}


int main(){
	long long n;
	cout<<"Nhap n = "; cin>>n;
	f[0]=0; f[1]=1; f[2]=2;
	cout<<"f("<<n<<") = "<<F(n);
	return 0;
}






