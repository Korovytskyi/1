#include <iostream>
#include <iomanip>
using namespace std;


int main() {
	int rowCount, colCount;
	cout << "N "; cin >> rowCount;
	cout << "M "; cin >> colCount;

	int** a = new int* [rowCount];
	for (int i = 0; i < rowCount; i++)
		a[i] = new int[colCount];
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++) {
			cout << "a[" << i << "," << j << "] = "; cin >> a[i][j];
		}
	
	void Print(int** a, const int rowCount, const int colCount);
	
		cout << endl;
		for (int i = 0; i < rowCount; i++)
		{
			for (int j = 0; j < colCount; j++)
				cout << setw(4) << a[i][j];
			cout << endl;
		}
		cout << endl;

    

	for (int i = 0; i < rowCount; i++)
		delete[] a[i];
	delete[] a;
	return 0;
}
