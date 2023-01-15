#include<iostream>
using namespace std;
int m, n, a[100], b[100], count = 0, k;

bool check()
{
	k = 0;
	for(int i = 1; i <= n; i++){
		k += a[i]*b[i];
	}
	if(k == m)
		return true;
	return false;
}

void gen(int r)
{
	if(r > n){
		if(check()){
			count++;
		}
		return;
	}
	b[r] = 0; gen(r+1);
	b[r] = 1; gen(r+1);
}

int main()
{
	a[0] = 0;
	b[0] = 0;
	cout<<"Nhap m = "; cin>>m;
	cout<<"Nhap n = "; cin>>n;
	for(int i = 1; i <= n; i++){
		cout<<"a["<<i-1<<"] = ";cin>>a[i];
	}
	gen(1);
	cout<<"Co tat ca "<<count<<" cach phan tich.";
	return 0;
}

