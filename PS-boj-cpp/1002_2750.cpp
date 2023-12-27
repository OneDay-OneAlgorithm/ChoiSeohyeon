#include <iostream>
using namespace std;

int main(void) {

	int n;
	int arr[1001] = {0};

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	int index = 0;
	int temp = 0;

	for (int i = 0; i < n; i++) {
		int min = 1001;
		for (int j = i; j <n ; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
			
		}

		temp = arr[i];
		arr[i] = arr[index];
		arr[index] = temp;

	}

	for (int i = 0; i < n; i++) {
		cout << arr[i]<<endl;
	}

	return 0;
}