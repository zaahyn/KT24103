#include <iostream>
using namespace std;

main(){
    cout <<"Muhammad Zahin Bin Zambri\nBI19110256"<<endl;
	cout <<"Lab Assignment 1 - Exercise 2\n"<<endl;
	
	int SIZE=5, data[SIZE]={1,3,2,5,4};
	int total = 0, *p;

	p = data;

	cout<< *p++ <<endl;
	cout<< *++p <<endl;
	cout<< *p-- <<endl;
	cout<< *--p <<endl;
	
	cout<<"\nDisplay an array element using while loop: ";
    int i=0;
	while(i<5){
		cout << " " << *(p + i)<< " ";
		++i;
	}
		
	cout<<"\n\nDisplay backward array element using while loop: ";
	int j=5-1;
	while(j>=0){
		cout << " " << *(p+j) << " ";
		j--;
	}
	
	for(i=0; i<5; i++){
		total = total + *(p+i);
	}
	cout<<"\n\nSum of elements of array using for loop: "<<total<<endl;
	return 0;
}
