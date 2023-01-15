#include<iostream>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;

vector<int> a, common_vector;
array<int,100> temp;
int m, n, max_sum = 0;

void sinh(int k){
	if(k>=common_vector.size()){
		int sum = 0, dem = 1;
		vector<int>::iterator index;
		for(int i=0; i<temp.size(); i++){
			if(temp[i]==1) {
			 	if(dem ==1) {
			 		index = find(a.begin(), a.end(), common_vector[i]);
			 		dem++;
			 		sum += common_vector[i];
				}
			 	else if(find(index+1, a.end(), common_vector[i]) != a.end()){
			 		index = find(index+1, a.end(), common_vector[i]);
					sum += common_vector[i];	
				}	
			}
		}
		max_sum = max(sum, max_sum);
		return;
	}
	temp[k] = 0; sinh(k+1);
	temp[k] = 1; sinh(k+1);
}

int main(){
	int x1;
	cout<<"Nhap m = "; cin>>m;
	for(int i=1; i<=m; i++) {
		cout<<"a["<<i<<"] = ";
		cin>>x1;
		a.push_back(x1);
	}
	cout<<"Nhap n = "; cin>>n;
	for(int i=1; i<=n; i++) {
		cout<<"b["<<i<<"] = ";
		cin>>x1;
		if(find(a.begin(),a.end(),x1) != a.end()){
			common_vector.push_back(x1);
		}
	}
	sinh(0);
	cout<<"Day con co tong lon nhat = "<<max_sum;
}
