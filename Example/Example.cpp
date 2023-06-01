#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int *a = new int[num];

	for (int i = 0; i < sizeof(a) / sizeof(int); i++)
		cout << " " << a[i] << endl;

	cout<< "Hellow Kim";
}