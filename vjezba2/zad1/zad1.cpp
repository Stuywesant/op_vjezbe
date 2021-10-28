// zad1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void FindMinMax(int arr[], int n, int& min, int& max) {
	min = arr[0];
	max = arr[0];
	for (int i = 0; i < n; i++) {

		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
}


int main() {

	int max, min;
	int n;
	cout << " Enter the size of the array: ";
	cin >> n;
	int i;
	int* arr = new int[n];
	cout << "Enter the elements of the array: ";
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	FindMinMax(arr, n, min, max);
	cout << "Maximum value is: " << max << endl;
	cout << "Minimum value is: " << min << endl;

}
