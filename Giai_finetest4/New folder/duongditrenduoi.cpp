
#include<iostream>

using namespace std;

long long ckn[100][100];
long long C(int k, int n)
{
	if(k==0 || k == n) return 1;
	if(ckn[k][n] == -1)
		ckn[k][n] = C(k-1,n-1) + C(k,n-1);
	return ckn[k][n];
}

int main()
{
	int m,n;
	cout<<"Nhap M = "; cin>>m;
	cout<<"Nhap N = "; cin>>n;
	for(int i=0; i<100;i++)
		for(int j=0; j<100;j++)
			ckn[i][j] = -1;
	cout<<"So cach = "<<C(m,m+n);
	return 0;
}


/*
#include <iostream>

using namespace std;

long long C(int k, int n){
	long long result = 1;
	for(int i=1; i<=k; i++, n--){
		result = result * n/i;
	}
	return result;
}

int main(){
	int m,n;
	cout<<"Nhap M = ";cin>>m;
	cout<<"Nhap N = ";cin>>n;
	cout<<"So cach = "<<C(m, m+n);
}*/
