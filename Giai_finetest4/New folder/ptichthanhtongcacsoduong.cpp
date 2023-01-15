#include<iostream>
using namespace std;

int *a;
int N, temp = 0;
bool check(int i,int n)
{
	if (n==0)
		return true;
	else
	{
		if (i<=a[n-1])
			return true;
		else
			return false;
	}
}

void print(int n)
{
	cout<<N<<" = "<<a[0];
	for(int i=1;i<=n;i++)
		cout<<"+"<<a[i];
	cout<<endl;
}

void select(int n=0)
{
	for (int i=N;i>=1;i--)
	{
		if(check(i,n))
		{
			a[n]=i;
			temp+=i;
			if(temp==N)
				print(n);
			else if (temp<N)
				select(n+1);
			temp-=i;
		}
	}
}
int main(){
	cout<<"Nhap n = "; cin>>N;
	a=new int[N];
	select();
	return 0;
}
