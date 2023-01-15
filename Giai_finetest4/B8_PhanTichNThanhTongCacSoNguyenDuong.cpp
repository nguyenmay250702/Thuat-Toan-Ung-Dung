#include<iostream>
#include<algorithm>
#include<array>
#include<set>
using namespace std;

int n;
array<int,100> a;
array<int,100> b;

set<array<int,100>> set1;

void saochep(int m){
	for(int i=1; i<=m; i++) b[i] = a[i];
}

void sinh(int k, int p, int m){

	if(k==m) {
		a[k] = n-p;

		saochep(m);
		sort(b.begin()+1, b.begin()+m+1, greater<int>());	
		set1.insert(b);
	}
	else{
		for(int i= 1; i<=n-p-m+k; i++){
			a[k] = i; sinh(k+1, p+i, m);
		}
	}
}

int main(){
	set1.insert({0});
	cout<<"Nhap n = "; cin>>n;

	for(int m=1; m<=n; m++) {
		sinh(1, 0, m);	
	}
	
	for(auto a = set1.end(); a != set1.begin()++; a--){
		if(a!=set1.end()){
			int dem = 1;
			cout<<n<<" = ";
			for(auto value:*a){ 
				if(dem == 1 && value != 0) {
					cout<<value;
					dem++;
				}
				else if(value != 0){
					cout<<"+"<<value;
				}
			}
			cout<<endl;	
		}	
	}

}
