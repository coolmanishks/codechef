//============================================================================
// Name        : codechef.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, ANSI-style
//============================================================================

// KOL1506.cpp : Defines the entry point for the console application.
//
#include "iostream"
#include <stdlib.h>
using namespace std;

int main()
{
	long int t, k;
	int	n;
	cin >> t;
	for (int i = 0; i<t; i++)
	{
		cin >> n >> k;
		long int a[n];
		long long int sum = 0, sum1;
		for (int j = 0; j<n; j++)
		{
			cin >> a[j];
		}
		for (int j = 0; j<n; j++)
		{
			for (int b = 0; b<n; b++)
			{
				if (b != j)
				{
					sum = sum + pow(abs(a[j] - a[b]),k);
					sum1 = sum % 1000000007;
				}
			}
		}

		cout << sum1 << endl;
	}
}
