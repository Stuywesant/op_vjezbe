// zad2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace  std;


int& FindIndex(int arr[], int index)
{
	return arr[index];
}

int main()
{
	int n, index;
	cout << "Enter the size of the array: ";
	cin >> n;
	int* arr = new  int[n];
	cout << "Enter index element: ";
	cin >> index;


	for (int i = 0; i < n; i++) {

		cout << "Enter elements of the array: ";
		cin >> arr[i];
	}

	FindIndex(arr, index) += 1;
	for (int i = 0; i < n; i++) {

		cout << "New array: " << arr[i] << endl;

	}
}