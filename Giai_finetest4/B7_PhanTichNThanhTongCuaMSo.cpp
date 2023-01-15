#include<iostream>
#include<vector>
using namespace std;
int n, m, a[100];

void print(){
	cout<<n<<" = ";
	for(int i=1; i<=m; i++) {
		if(i<m) cout<<a[i]<<"+";
		else cout<<a[i];	
	}
	cout<<endl;
}

void sinh(int k, int p){
	if(k==m) {
		a[k] = n-p;
		print();	
	}
	else{
		for(int i=1; i<=n-p-m+k; i++){
			a[k] = i; sinh(k+1, p+i);
		}
	}
}

int main(){
	cout<<"Nhap n = "; cin>>n;
	cout<<"Nhap m = "; cin>>m;
	sinh(1, 0);
}
