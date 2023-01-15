#include<iostream>
#include<map>
using namespace std;
map<int, long long> MAP;
/*
long long F(int n){
	if(n<=3) return MAP[n];
	if(MAP.find(n)==MAP.end()) MAP[n] = F(n-2) + F(n-3);
	return MAP[n];	
}*/

long long F(int n){
	long long f[4], fn;
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	f[3] = 2;
	for(int i=5; i<=n; i++){
		fn = f[0] + f[1];
		f[0] = f[1];
		f[1] = f[2];
		f[2] = f[3];
		f[2] = fn;
	}
	return f[3];
}

int main(){
	int n;
	MAP[1] = 0; MAP[2] = 1; MAP[3] = 1;
	cin>>n;
	cout<<F(n);
}


