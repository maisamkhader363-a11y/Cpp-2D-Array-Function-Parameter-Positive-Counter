#include<iostream>
using namespace std;

int countpositive(int X[][4], int r, int c) {
	int count = 0;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (X[i][j] > 0) {
				count++;
			}
		}
	}
	return count;
}
int main() {
	int A[3][4];
	cout << "please enter 12 element" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> A[i][j];
		}
	}
	cout << "the count of positive numbers is:" << countpositive(A,3,4) << endl;
	return 0;
}
