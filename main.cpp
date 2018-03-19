#include <iostream>
#include <vector>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

int calc(vector <int>arr, int start, int(*f)(int, int)) {
	for(int i = 0; i < arr.size(); i++) {
		start = f(start, arr[i]);
	}

	return start;
}

int main(int argc, char *argv[]) {
	int total = 0;
	int el;
	vector <int>array;

	cout << "Enter array length: ";
	cin >> total;
	cout << endl;

	cout << "Enter array elements: " << endl;

	for(int i = 0; i < total; i++) {
		cin >> el;
		array.push_back(el);
	}

	cout << endl;

	cout << "Result: " << calc(array, 0, sum) << endl;

	return 0;
}