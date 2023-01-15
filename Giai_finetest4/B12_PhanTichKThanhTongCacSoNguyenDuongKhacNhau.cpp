#include<iostream>
#include<algorithm>
#include<array>
using namespace std;

int k, so_cach_phan_tich = 0;
array<int, 100> temp;
array<int, 100> a;

void sinh(int i){
	if(i>k){
		int sum = 0;
		if(count(temp.begin(),temp.end(),1) > 1){
			for(int j = 1; j<=k; j++){
				if(temp[j] == 1) {
					sum += j; 
				}
			}
			if(sum == k) so_cach_phan_tich++;	
		}
		return;
	}
	temp[i] = 0; sinh(i+1);
	temp[i] = 1; sinh(i+1);
}

int main(){
	cout<<"Nhap k = "; cin>>k;
	sinh(1);
	cout<<"Co tat ca "<<so_cach_phan_tich<<" cach phan tich.";
}
