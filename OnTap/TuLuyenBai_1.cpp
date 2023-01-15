#include<iostream>
#include<map>
using namespace std;

int n;
map <int, int> MAP;
int F(int n){
	if(n==1) return MAP[n];
	if(MAP.find(n)==MAP.end())
	{
		if(n%2==0 && n>1) MAP[n] = 1 + F(n/2);
		else if(n%2!=0 && n>1) MAP[n] = 1 + F(3*n + 1);		
	}
	return MAP[n];
}

int main(){
	MAP[1] = 0;
	cin>>n;
	cout<<F(n);
}
