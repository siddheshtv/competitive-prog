#include <bits/stdc++.h>
using namespace std;


void print1(int n) {
	for (int i=0; i<n; i++) {
		for (int j=0; j<5; j++) {
			cout << "* ";
		}

		cout << endl;
	}
}

int main () {
	int n;
	cout << "enter number: ";
	cin >> n;
	print1(n);
	return 0;
}
