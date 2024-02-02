#include <iostream>
using namespace std;

int main() {
	int K;				
	long long A[45];	
	long long B[45];	

	A[0] = 0;
	B[0] = 1;
	A[1] = 1;
	B[1] = 1;

	cin >> K;
	for (int i = 2; i < K; i++) {
		A[i] = A[i - 1] + A[i - 2];
		B[i] = B[i - 1] + B[i - 2];
	}

	cout << A[K - 1] << " " << B[K - 1];

	return 0;
}