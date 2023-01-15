#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main(){
	int A[] = {-20, 737481, -73301, 30, -61594, 26854, -520, -470};
	int m = 999999999;
	sort(begin(A), end(A));
	for(int x:A) cout<<x<<" ";
	for(int i=0; i<8; i++){
		m = min(m, abs(A[i+1] - A[i]));               
	}
	cout<<"\n- Do chenh lech: "<<m<<endl;
	cout<<"- Cap so co do chenh lech nho nhat: ";
	for(int i=0; i<8; i++){
		if(A[i]+m == A[i+1]) cout<<"("<<A[i]<<", "<<A[i+1]<<") ";
	}
	return 0;
}
