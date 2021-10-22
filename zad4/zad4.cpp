// zad4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int FindMinRecursive(int arr[], int n)
{
	if (n == 0)
		return arr[0];
	else
	{
		if (arr[n - 1] < FindMinRecursive(arr, (n - 1)))
		{
			return arr[n - 1];
		}
		else
		{
			return FindMinRecursive(arr, (n - 1));
		}
	}
}

int FindMaxRecursive(int arr[], int n)
{
	if (n == 0)
		return arr[0];
	else
	{
		if (arr[n - 1] > FindMaxRecursive(arr, (n - 1)))
		{
			return arr[n - 1];
		}
		else
		{
			return FindMaxRecursive(arr, (n - 1));
		}
	}
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

	cout << "Smallest number in the array is: " << FindMinRecursive(arr, n) << endl;
	cout << "Largest number in the array is: " << FindMaxRecursive(arr, n) << endl;

	return 0;
}
