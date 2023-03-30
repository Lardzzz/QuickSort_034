#include <iostream>
using namespace std;

//membuat array
int arr[20];
int cmp_count = 0; //number of comparison
int mov_count = 0; //number of data movements
int n;


void input() {

	while (true)
	{
		cout << "Masukkan Panjang Element Array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum Panjang Array Adalah 20" << endl;
	}
}

int maain() {

}
