#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vector1 = { 1, 2, 3, 4, 5, 6, 35, 12, 10};
	int max = 0;
	for (int i = 0; i < vector1.size(); i++) {
		if (vector1[i] > max) {
			max = vector1[i];
		}
	}
	cout << max << endl;
	return 0;
}