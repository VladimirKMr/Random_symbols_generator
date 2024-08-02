#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

const int SYMBOL_COUNT = 94;      // Printable ASCII
const int START_SYMBOL_NUM = 32;  // Printable ASCII

int main() {

	srand(time(NULL)); // ������� ������� �������. �.�. ��� ������ ������� ���������  - ������ �����, � ������ � ������� ����� ��� ������� rand, � ������ � ������ ��� ������ ��������� ��������. 
	// srand ���������� ������� ���� ��� � ��������� � ������ (��������, ��� setlocale).

	cout << "The characters end before |___END___|" << '\n';

	int SIZE;
	cout << "Enter symbols count: " << '\n';
	cin >> SIZE;

	vector<char> symbols;
	symbols.reserve(SIZE);

	for (size_t i = 0; i < SIZE; ++i) {
		int rand_symbol = rand() % SYMBOL_COUNT + START_SYMBOL_NUM;
		symbols.emplace_back(static_cast<char>(rand_symbol));
	}

	cout << "Symbols: " << '\n';

	for (char c : symbols) {
		cout << c;
	}
	cout << "|___END___|" << '\n';

	system("pause");
	return 0;
}