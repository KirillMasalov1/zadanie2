﻿#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> vector1(n);
	int max = 0;
	cin.ignore();
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		vector1[i] = x;
		if (vector1[i] > max) {
			max = vector1[i];
		}
	}
	cout << max << endl;
	return 0;
}