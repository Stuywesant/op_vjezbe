// zad3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int FindMin(int arr[], int n) /*Funkcija za minimum*/
{
	int i;
	int min = arr[0];
	for (i = 0; i < n; i++)
	{
		if (min > arr[i])
			min = arr[i];
	}
	return min;
}

int FindMax(int arr[], int n) /*Funkcija za maximum*/
{
	int i;
	int max = arr[0];
	for (i = 0; i < n; i++)
	{
		if (max < arr[i])
			max = arr[i];
	}
	return max;
}

int main()
{

	int n;
	cout << " Enter the size of the array: ";
	cin >> n;
	int i, arr[20];
	cout << "Enter the elements of the array: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	cout << "Smallest number in the array is: " << FindMin(arr, n) << endl;
	cout << "Largest number in the array is: " << FindMax(arr, n) << endl;

	return 0;

}
