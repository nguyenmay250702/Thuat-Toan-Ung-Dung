#include <iostream>
#include<algorithm>
using namespace std;
int maxHight(int n){
	int a[n], maxHight = 0;
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a,a+n);

	for(int i=0; i<n; i++){
		if(a[i]>=maxHight) maxHight++;
	}
	return maxHight;
}

int main(){
	int n;
	cin>>n;
	cout<<maxHight(n);
	return 0;
}


