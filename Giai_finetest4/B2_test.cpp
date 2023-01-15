#include <iostream>
#include <map>
using namespace std;

void Input(int array[], int numberElements){
	for(int i=0; i<numberElements; i++)
		cin>>array[i];
}

void SortArray(int array[], int numberElements){
	int temp;
	for(int i=0; i<numberElements; i++){
		for(int j=1; j<numberElements-i; j++){
			if(array[j]<array[j-1]){
				temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
			}
		}
	}
}

int Count(int A[], int numberElements, int arithmeticRatio){
	int numbersArithmeticProgression=0;
	int B[5];
	for(int i=0; i<=numberElements-5; i++){
		int countFiveNumbers = 0;
		B[0] = A[i];
		for(int k=i;k<numberElements;k++){
			if(A[k]==B[countFiveNumbers]+arithmeticRatio){
				countFiveNumbers++;
				B[countFiveNumbers%4] = A[k];
			}
		}
		if(countFiveNumbers==4)
			numbersArithmeticProgression++;
	}
	return numbersArithmeticProgression;
}

int CountNumbersArithmeticProgression(int numberElements){
	int arithmeticRatio, sum=0;
	int A[numberElements];
	Input(A,numberElements);
	SortArray(A,numberElements);
	map <int,int> d;
	for(int i=0; i<=numberElements-5; i++){
		for(int j=i+1; j<=numberElements-4; j++){
			arithmeticRatio = A[j] - A[i];
			if(d[arithmeticRatio]==0){
				d[arithmeticRatio] = arithmeticRatio;
				sum += Count(A, numberElements, d[arithmeticRatio]);
			}
		}
	}
	
	return sum;
}

int main(){
	int N;
	cin>>N;
	cout<<CountNumbersArithmeticProgression(N);
}
