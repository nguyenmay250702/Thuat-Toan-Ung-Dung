#include<iostream>
#include<algorithm>
#include<vector>
#include<set>
using namespace std;

void DemDayConLaCSC(vector<int> a, int n){
	set<vector<int>> setCSC;
	int sum = 0;
	
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			int di = a[j]-a[i];
			
			vector<int> v;	
			v.push_back(a[i]);
			v.push_back(a[j]);
			for(int k=j; k<n; k++){
				int temp = v.back()+di;		//temp = Un+1
				if(binary_search(a.begin()+k, a.begin()+n, temp)){
					v.push_back(a[lower_bound(a.begin()+k, a.begin()+n, temp)-a.begin()]);
				}
			}
			
			if(v.size()==5) {
				/*
				vector <int> b;
				b.push_back(v.front());
				b.push_back(v.back());
				setCSC.insert(b);
				*/
				
				setCSC.insert(v);
			}
			else if(v.size()>5){
				
				for(int i=0; i<v.size()-4; i++){
					vector <int> c;
					c.push_back(v.at(i));
					c.push_back(v.at(i+1));
					c.push_back(v.at(i+2));
					c.push_back(v.at(i+3));
					c.push_back(v.at(i+4));
					
					setCSC.insert(c);	
				}
				
			}
		}
	}
	
	/*
	for(auto v:setCSC){
		//cout<<endl;
		if(binary_search(v.begin(),v.end(),0))	sum++;
		//for(auto x:v) cout<<x<<" ";
	} 
	cout<<"\nday co pt 0 = "<<sum<<endl;
	*/
	cout<<setCSC.size();
}


int main(){
	
	int n, x;
	vector<int> v;
	//cout<<"- Nhap n = "; 
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	
	//cout<<endl;
	//for(int i=0; i<n; i++) cout<<v.at(i)<<" ";
	
	DemDayConLaCSC(v, n);
	
	return 0;
}
