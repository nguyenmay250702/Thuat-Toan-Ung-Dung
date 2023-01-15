#include<iostream>
#include<algorithm>

using namespace std;


int main(){
	int a[] = {1,2,3,4,5}, d=0, k;
	
	cout<<"Nhap k= "; cin>>k;
	for(int i=0; i<5; i++) {
		d += 5 - (upper_bound(a+i+1, end(a), k/a[i]) - a);
	}
	cout<<"- So cach chon 2 pt trong A co tich > "<<k<<" la: "<<d;
	return 0;
}


/*
int main(){
	int n, m, d=0;
	cout<<"Nhap n = "; cin>>n;
	int a[n];
	for(int i=0; i<n; i++) {
		cout<<"a["<<i<<"] = ";
		cin>>a[i];	
	}
	sort(a,a+n);
	cout<<"Nhap m = "; cin>>m;
	
	for(int i=0; i<n; i++){
		d+= n-(upper_bound(a+i+1, a+n, m/a[i])-a);
	}
	
	cout<<"- So cach chon 2 pt trong A co tich > "<<m<<" la: "<<d;
	return 0;
}

*/












