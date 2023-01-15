#include<iostream>
#include<vector>
#include<map>

using namespace std;
map<vector<int>, vector<int>> D;
int m,n,dem=0;

/*
void print(){
	for(auto x:D){
		for(auto key:x.first){
			cout<<"("<<key<<") ";
		}
		for(auto value:x.second){
			cout<<"("<<value<<") ";	
		}
	}
}
*/

//quay lui + de quy: 60.4%
/*
int DemDuongDi(int x, int y){
	if(x==n && y==m) dem++;
	else{
		if(x==n){
			D[{x,y}] = {x,y+1}; DemDuongDi(x,y+1);
		}
		else if(y==m){
			D[{x,y}] = {x+1,y}; DemDuongDi(x+1,y);	
		} 
		else{
			D[{x,y}] = {x+1,y}; DemDuongDi(x+1,y);
			D[{x,y}] = {x,y+1}; DemDuongDi(x,y+1);	
		}
	}
	return dem;
}*/

//quay lui + de quy toi dan ve code: 60.4%
int DemDuongDi(int x, int y){
	if(x==n || y==m) dem++;
	else{
		D[{x,y}] = {x+1,y}; DemDuongDi(x+1,y);
		D[{x,y}] = {x,y+1}; DemDuongDi(x,y+1);		
	}
	return dem;
}


int main(){
	cout<<"Nhap M = "; cin>>m;
	cout<<"Nhap N = "; cin>>n;
	cout<<"So cach = "<<DemDuongDi(0,0);
}
