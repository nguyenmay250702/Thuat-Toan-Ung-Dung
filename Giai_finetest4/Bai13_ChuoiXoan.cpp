#include<iostream>
#include<string>
using namespace std;
const long long MAX=999999;

long long n,m,a[MAX];
string z,w;

int nhap(){
	getline(cin,z);
	w="";
	n=z.length();
	
	for(int i=n-1;i>=0;i--)
		w+=z[i];
	cin>>m;
	for(int i=1;i<=m;i++)
		cin>>a[i];
}

int sinh(int t,int k){
	for(int i=1;i<=m;i++)
	{
		t=a[i]%n;
		k=a[i]/n;
		if(k%2==1) cout<<w[t]<<'\n';
		else if(k%2 == 0) cout<<z[t]<<'\n';
	}
}

int main()
{
	nhap();
	sinh(0,0);
	return 0;
}
