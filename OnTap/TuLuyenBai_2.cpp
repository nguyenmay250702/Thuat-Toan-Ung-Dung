#include<iostream>
#include<map>
#include<vector>
using namespace std;

int n, dem = 0, a[100];

/*
bool checkNumberEdges(){
	int check = 0;
	for(int i=1; i<=n; i++) if(a[i] == 1) check++;
	return (check==3)? true:false;
}*/

bool isRightTriangle(int a, int b, int c){
	return ((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))? true:false;
}

bool checkCircumference(int a, int b, int c){
	return ((a+b+c)<=n)? true:false;
}


void Sinh(int k){
	if(k>=n-1){
		vector<int> V;
		for(int i=1; i<n-1; i++) if(a[i]==1) V.push_back(i); 
		if((V.size()==3) && isRightTriangle(V[0],V[1],V[2]) && checkCircumference(V[0],V[1],V[2])) dem++;
	}
	else{
		a[k] = 0;Sinh(k+1);
		a[k] = 1;Sinh(k+1);		
	}
}

/*
int cv = 0;
vector<int> V;
void Sinh(int k){
		if((k>=n-1) || (V.size()==3)){
			cout<<"\n\n";
			for(int i=0; i<V.size(); i++) cout<<V[i]<<" ";
		//	if(isRightTriangle(V[0],V[1],V[2]) && checkCircumference(V[0],V[1],V[2])) dem++;
			V.clear();
			
		}
		else{
			a[k] = 0;Sinh(k+1);
			a[k] = 1;V.push_back(k);Sinh(k+1);		
		}		
}
*/
int main(){
	cin>>n;
	Sinh(1);
	cout<<dem;	
}
