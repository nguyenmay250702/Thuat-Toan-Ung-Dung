#include<iostream>
#include<array>
#include<numeric>
#include<vector>
using namespace std;

int m, n, so_day_con_tong_bang_m = 0;
array<int,100> a;
array<int, 100> binary_array;

void sinh(int k){
	if(k>n) {
		vector<int> temp;
		for(int i=1; i<=n; i++){
			if(binary_array[i]==1) {
				temp.push_back(a[i]);
			}
		}
		if(accumulate(temp.begin(), temp.end(), 0) == m) so_day_con_tong_bang_m++;
		return;	
	}
	binary_array[k] = 0; sinh(k+1);
	binary_array[k] = 1; sinh(k+1);
}

int main(){
	cout<<"Nhap m = "; cin>>m;
	cout<<"Nhap n = "; cin>>n;
	for(int i=1; i<=n; i++){
		cout<<"a["<<i-1<<"] = "; cin>>a[i];
	}
	sinh(1);
	cout<<"Co tat ca "<<so_day_con_tong_bang_m<<" cach phan tich.";
}
