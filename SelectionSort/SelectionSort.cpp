#include <iostream>
#include <string>
using namespace std;

int arr[10];
int n;

void input() {
	while (true) {
		cout << "Masukkan berapa banyak elemen pada array = ";
		cin >> n;
		if (n <= 10) {
			break;
		}
		else {
			cout << "Jumlah maksimal elemen pada array adalah 10." << endl;
			cout << "Silahkan coba lagi." << endl;
			cout << "=======================================" << endl;
		}
	}

	for (int i = 0; i < n; i++) {
		cout << "Masukkan data ke - " << i + 1 << " = ";
		cin >> arr[i];
	}
}

void selectionSort() {
	for (int j = 0; j < n - 1; j++) {
		int min_index = j;
		for (int i = j + 1; i < n; i++) {
			if (arr[i] < arr[min_index]) {
				min_index = i;
			}
		}
		int temp = arr[j];
		arr[j] = arr[min_index];
		arr[min_index] = temp;

		cout << "\nPass " << j + 1 << " = ";
		for (int k = 0; k < n; k++) {
			cout << arr[k] << " ";
		}
		cout << endl;
	}
}

void display() {
	cout << "========================" << endl;
	cout << "Nilai yang sudah terurut" << endl;
	cout << "========================" << endl;
	for (int i = 0; i < n; i++) {
		cout << arr[i];
		if (i < n - 1) {
			cout << " --> ";
		}
	}
}


int main() {
	input();
	selectionSort();
	display();
	return 0;
}