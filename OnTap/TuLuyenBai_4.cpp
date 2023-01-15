#include<iostream>
using namespace std;

int n, a[100], dem = 0;

void sinh(int k, int sum){
	if(sum == n) dem ++;
	else if(sum >n) return;
	else{
		a[k] = 2; sinh(k+1, sum + a[k]);
		a[k] = 3; sinh(k+1, sum + a[k]);
		a[k] = 4; sinh(k+1, sum + a[k]);
	}
}

int main(){
	cin>>n;
	sinh(1,0);
	cout<<dem;
}
