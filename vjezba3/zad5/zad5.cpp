// zad5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int count_substr(string& str, string& substr)
{
	int cnt = 0;
	size_t found = str.find(substr);
	while (found != string::npos)
	{
		cnt++;
		found = str.find(substr, found + 1);
	}
	return cnt;
}

int main()
{
	string str{ "xzzxzzxxxzzxzzzxzxx" };
	string substr{ "xz" };
	int n = count_substr(str, substr);
	cout << "Broj ponavljanja substringa u stringu je:" << n << endl;
}