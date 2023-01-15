#include <iostream>
#include <vector>

using namespace std;
//~~~~~~~~~~~~~~~~~~~~~~~de quy
//60.2%

long long F(long long n){
	if(n==0 || n==1 || n==2) return n;
	if(n%3==0) return F(2*(n/3));
	if(n%3==1) return F(2*(n/3)) + F(2*(n/3) + 1);
	if(n%3==2) return F(2*(n/3)) + F(2*(n/3) + 1) + F(2*(n/3) + 2);
}


//60.2%
/*
long long F(long long n){
	long long Fn = 0;
	
	if(n==0 || n==1 || n==2) return n;
	else{
		for(long long i=0; i<=n%3; i++)	Fn += F(2*(n/3) + i);
		return Fn;
	}
}
*/




//~~~~~~~~~~~~~~~~~~~~~~~quy hoach dong

//sd vector 80.2%
/*
long long F(long long n){
	vector<long long> v;
	v.push_back(0);
	v.push_back(1);
	v.push_back(2);

	for(long long i=3; i<=n; i++){
		if(i%3==0) v.push_back(v[2*(i/3)]);
		else if(i%3==1) v.push_back(v[2*(i/3)] + v[2*(i/3)+1]);
		else if(i%3==2) v.push_back(v[2*(i/3)] + v[2*(i/3)+1] + v[2*(i/3)+2]);
	}
	return v[n];	
}
*/

//sd con tro 80%
/*
long long F(long long n){
	long long *array = new long long[n+1];
	array[0]=0, array[1]=1, array[2]=2;
	for(long long i=3; i<=n; i++){
		if(i%3==0) 
			array[i] = array[2*(i/3)];
		else if(i%3==1) 
			array[i] = array[2*(i/3)] + array[2*(i/3)+1];
		else if(i%3==2) 
			array[i] = array[2*(i/3)] + array[2*(i/3)+1] + array[2*(i/3)+2];
	}
	return array[n];
}
*/


int main(){
	long long n;
	cout<<"Nhap n = "; cin>>n;
	cout<<"f("<<n<<") = "<<F(n);
	//for(int i=0; i<=n; i++) cout<<"\ni = "<<i<<"\t"<<F(i);
	return 0;
}
