// C++ program to demonstrate inverted half triangle using *
using namespace std;
#include <bits/stdc++.h>
#include <iostream>
int main()
{
	int n = 4;
	for (int i = n; i >= 1; --i) {
		for (int j = 1; j <= i; ++j) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}
