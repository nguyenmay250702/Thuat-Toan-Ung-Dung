#include<iostream>
#include<math.h>
#include<map>
#include<vector>
using namespace std;
int A,B, M;
map<vector<int>,long long> MAP;

long long tinh2(int a,int b){
	if(a == 0) return 0;
	else if(a==1 || b==0) return 1;
	else if(b==1) return a;
	else if(MAP.find({a,b}) == MAP.end()){
		if(b%2==0) MAP[{a,b}] = tinh2(a,b/2)*tinh2(a,b/2)%M;
		else MAP[{a,b}] = tinh2(a,b-1)*tinh2(a,1)%M;
	}
	return MAP[{a,b}];
}

int main(){
	cout<<"Nhap A = "; cin>>A;
	cout<<"Nhap B = "; cin>>B;
	cout<<"Nhap M = "; cin>>M;
	cout<<"G = "<<tinh2(A,B);
}
