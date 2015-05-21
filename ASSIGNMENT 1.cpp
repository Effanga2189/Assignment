// NAME:EFFANGA,KINGSLEY OKON
// REG NO:45652928HF
// COURSE:CSC 181 ASSIGNMENT

// Write a program that reads an integer and determines and prints whether it's odd or even. 
// [Hint: Use the modulus operator. An even number is a multiple of two. 
// Any multiple of two leaves a remainder of zero when divided by 2.] 





#include<iostream>
using namespace std

;
int main ()
{
	int firstinteger;
	int secondinteger;
	
	cout << "enter integer: ";
	cin >> firstinteger;
	
	
	secondinteger = firstinteger/ 2;
	if (firstinteger % secondinteger ==0)
	
	cout << firstinteger << "is an even number\n" ;
	
	else
	cout << firstinteger << "is an odd number\n";
	return 0;
}
