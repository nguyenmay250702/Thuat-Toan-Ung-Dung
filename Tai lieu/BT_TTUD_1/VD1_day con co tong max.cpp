
//tim ra doan con co tong lon nhat

#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

const int n=1000000; int a[n];

//duyet toan bo cac cap(i,j)
int find_max1(){
	int max = a[0];
	for(int i=0; i<n; i++){
		for(int j=i; j<n; j++){
			int t=0;
			for(int k=i;k<=j; k++) t+=a[k];
			if(t>max) max=t;			
		}
	}
	return max;
}

//duyet toan bo toi uu
int find_max2(){
	int max = a[0];
	for(int i = 0; i<n; i++){
		int t = 0;
		for(int j = i; j<n; j++){
			t += a[j];
			if(t>max) max=t;
		}
	}
	return max;
}

//chia de tri

//quy hoach dong
int find_max4(){
	int w = a[0], m = a[0];
	for(int i=1; i<n; i++){
		w = (w>0)? (w+a[i]):a[i];
		m = max(m,w);
	}
	return m;
}


int main(){
	for (int i = 0; i < n; i++) a[i] = rand() % 100 - 50 ;
	clock_t begin = clock();
	//cout<<"Tong lon nhat theo find_max1: "<<find_max1();
	clock_t end = clock();
	cout << "\n- Thoi gian thuc hien thuat toan: " << double(end - begin) / CLOCKS_PER_SEC <<" giay"<< endl;
	
	begin = clock();
	//cout<<"\nTong lon nhat theo find_max2: "<<find_max2();
	end = clock();
	cout << "\n- Thoi gian thuc hien thuat toan: " << double(end - begin) / CLOCKS_PER_SEC <<" giay"<< endl;
	
	begin = clock();
	cout<<"\nTong lon nhat theo find_max4: "<<find_max4();
	end = clock();
	cout << "\n- Thoi gian thuc hien thuat toan: " << double(end - begin) / CLOCKS_PER_SEC <<" giay"<< endl;
	return 0;
}






