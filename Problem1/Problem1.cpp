#include <iostream>
#include <string>

using namespace std;

void TableHeader() {
	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << endl << "----------------------------------------------------------------------------------" << endl;
}

void ColumnSeprator(int i) {
	if (i < 10)
		cout << i << "  | ";
	else
		cout << i << " | ";
	
}

void MultiplicationTable() {
	TableHeader();
	for (int i = 1; i <= 10; i++) {
		ColumnSeprator(i);
		for (int j = 1; j <= 10; j++) {
			cout << "\t" << i * j;

		}
		cout << "\n";

	}
}
int main() {

	
	MultiplicationTable();
}