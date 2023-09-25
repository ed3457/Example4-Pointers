// Example4-Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

int main()
{
   	int x = 5; 

	int* p; // pointer p of type int

	p = &x;// store the address of x inside the pointer p

	//cout << x << endl;

	//cout << p << endl; // pointer address value 

	//cout << *p << endl; // the value that the pointer is pointing to

	x = 12; 

	*p = 15;

	cout << x << endl;
	cout << &x << endl; 

	int ar[10];

	int size;

	//int ar2[size];

	cout << "Enter the size of the array:" << endl;
	cin >> size; 
	int* pAr = new int[size];

	for (int i = 0;i < size;i++)
	{
		cout << "Enter element " ;
		cout << i+1 << endl;
		cin >> pAr[i]; 
	}

	int* p2 = pAr;

	for (int i = 0;i <= size;i++)
	{
		cout << *p2 << endl;
		p2++;

	}


	delete[] pAr; // releases the memory back 




}

