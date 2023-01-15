#include<iostream>
using namespace std;

int a[100], n=11, b[] = {0, 22, 15, 3, 2, 4, 5, 7, 7, 12, 1};
int min = 10000;

void print(){
	int p=0, q=0;
	for(int i=1; i<=n ;i++){
		if(a[i]==0) p += b[i];
		else q += b[i];
	}
		
	if(min <= abs(p-q)) return;	//do chenh lech qua lon thi loai luon
	
	min = abs(p-q);
	cout<<"Ghi nhan 1 phan hoach moi tot hon, chenh lech = "<<min<<endl;
	
	cout<<"p = ";
	for(int i=1; i<=n; i++) if(a[i]==0) cout<<" "<< a[i];
	cout<<"\nq = ";
	for(int i=1; i<=n; i++) if(a[i]==1) cout<<" "<< a[i];
}

void sinh(int k){
	if(k>n) print();
	else{
		a[k] = 0; sinh(k+1);
		a[k] = 1; sinh(k+1);
	}
}

int main(){
	sinh(1);
	return 0;
}
