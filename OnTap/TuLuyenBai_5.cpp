#include<iostream>
#include<map>
using namespace std;
map<int, long long> MAP;

long long F(int n){
	if(n>=1 && n<=4) return MAP[n];
	if(MAP.find(n) == MAP.end()){
		MAP[n] = (F(n-2) + F(n-3) + F(n-4))%1000000007;
	}
	return MAP[n];
}
int main(){
	int n;
	cin>>n;
	MAP[1] = 0; MAP[2] = 1; MAP[3] = 1; MAP[4] = 2;
	cout<<F(n);
}
