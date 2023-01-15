#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int A[] = {1,5,3,4,3,3,2}, sum = 0, k;
	
	cout<<"- Nhap k= "; cin>>k;
	
	sort(begin(A), end(A));
	
	cout<<"- Day sau khi sap xep:";
	for(int x:A)cout<<" "<<x;
	
	for(int x:A) {
		sum += (upper_bound(begin(A), end(A), x+k) - A) - (lower_bound(begin(A), end(A), x+k) - A);
	}	
	cout<<"\n- So cap so trong A chenh lech dung "<<k<<" dv: "<<sum;
	return 0;
}

