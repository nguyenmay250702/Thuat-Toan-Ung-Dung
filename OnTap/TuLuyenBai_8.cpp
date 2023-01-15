#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;
int n,k,dem = 0,a[100];
set <vector<int>> SET;
vector<int> b;

void saoChepMang(int m){
	for(int i=1; i<=m; i++) b.push_back(a[i]);
}

void sinh(int k1, int p, int m){
	if(k1==m) {
		a[k1] = n-p;
		saoChepMang(m);
		sort(b.begin(),b.end());
		if(SET.find(b)==SET.end()){
			SET.insert(b);
			int tich = 1;
			for(int i=1; i<=m; i++) tich = tich*a[i];
			if(tich >= k) dem++;	
		}
		b.clear();
	}
	else{
		for(int i=1; i<= n-p-m+k1; i++){
			a[k1] = i;
			sinh(k1+1,p+i, m);
		}
	}
}

int main(){
	cout<<"Nhap n = ";cin>>n;
	cout<<"Nhap k = ";cin>>k;
	for(int m=1; m<=n; m++) sinh(1,0,m);
	cout<<"So cach phan tich cap k = "<<dem<<endl;
	
	//in ra tat ca TH co tong = n
	for(auto a = SET.begin(); a != SET.end(); a++){
		cout<<endl;	
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
	}	
}
