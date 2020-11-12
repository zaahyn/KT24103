#include <iostream>
using namespace std;

main(){
	
	cout<<"Muhammad Zahin Bin Zambri \nBI19110256" <<endl;
	cout<<"Lab Assignment 1- Exercise 1\n" <<endl;
    
	int SIZE=5, data[SIZE]={0,1,2,3,4};
	int *p = &data[0];
	int *a = &data[0];
 
	 cout<< "p[0] and *p have similar output" << endl;
	 cout<< "p[0] = " << p[0] << endl;
	 cout<< "*p = " << *p << endl << endl;
 
	 cout<<"Operation Of Pointer Arithmetic"<<endl;
	 cout<<"*(p+1) = " << *(p+1)<<endl;
	 cout<<"*(p+2) = " << *(p+2)<<endl << endl;
 
 
	 cout<<"*p++ = " << *p++<<endl;
	 cout<<"*p++ = " << *p++<<endl;
	 cout<<"*p++ = " << *p++<<endl << endl; 

	 cout<<"for loop (standard subscript)"<<endl;
	 
	 for(int i=0; i<5; i++){
	     cout << data[i] << " ";
	 }
	 
	 cout<<endl<<endl;
 	 
	 cout<<"for loop (pointer arithmetic)"<<endl;
	 for(int i=0; i<5; i++){
	     cout << *(a+i) << " ";
	 }
	 
	 cout<<endl<<endl;
	 
	 p=&data[0];
	 for(int i=0; i<5; i++){
	 	 cout << *p++ << " ";
	 }
	 return 0;
}

