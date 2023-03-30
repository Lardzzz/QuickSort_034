#include <iostream>
using namespace std;

//membuat array
int arr[20];
int cmp_count = 0; //number of comparison
int mov_count = 0; //number of data movements
int n;

//prosedur input
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
	cout << "\n===================" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n===================" << endl;

	for (int i = 0; i < n; 1++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}

