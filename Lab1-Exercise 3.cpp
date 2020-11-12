#include <iostream>
using namespace std;

	double getAverage(int *array, int SIZE){
		int i, sum =0;
		double average;
		for (int i=0; i<SIZE; i++) {
			sum = sum + *(array+i);
		}
		average = double(sum)/SIZE;
		return average;
	}
	
	void swap(int *n, int *m) {
		int temp;
		temp = *n;
		*n = *m;
		*m = temp;
	}

	void ChangeIt_1(int n) {
		n = 5;
	}
	
	void ChangeIt_2(int *n) {
		*n = 6;
	} 
	
	void ChangeIt_3(int &n) {
		n = 7;
	}
	
	int ChangeIt_4(int n) {
		n = 8;
	 
	return n;
	}
		
int main(){
	
	cout<<"Muhammad Zahin Bin Zambri\nBI19110256"<<endl;
	cout<<"Lab Assignment 1 - Exercise 3\n"<<endl;	
	
	int *p;   
	int x=10, y=7, SIZE=5, data[SIZE]={1,3,2,5,4};
	p=&x;     	
	
	ChangeIt_1(x);   
	cout<<"ChangeIt_1 : "<< *p <<endl;

	ChangeIt_2(&x);   
	cout<< "ChangeIt_2 : "<< *p <<endl;

	ChangeIt_3(x);   
	cout<<"ChangeIt_3 : "<< *p <<endl;	

	x = ChangeIt_4(x);  
	cout<<"ChangeIt_4 : "<< *p <<endl;
	
	cout<<"\nValue of x and y Before Swap "<<endl;
	cout<<"x is "<<x<<"   y is "<<y<<endl;
	
	cout<<"\nValue of x and y After Swap "<<endl;
	swap(&x,&y);
	cout<<"x is "<<x<<"  y is "<<y<<endl;

	double average;
	average = getAverage(data,5);
	
	cout<<"\nAverage value is "<<average<<endl;

}



