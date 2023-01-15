#include<iostream>
using namespace std;

int main(){
	int A,B,N, dem = 0;
	cin>>A; cin>>B; cin>>N;
	//for(int i=1; i<N; i++) if(i%A==0 && (N-i)%B==0) dem++;
	for(int i=A; i<N; i+=A) if((N-i)%B==0) dem++;
	cout<<dem;
}
