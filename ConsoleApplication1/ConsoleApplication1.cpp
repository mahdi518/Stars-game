#include <iostream>
#include <conio.h>
#include <vector>
using namespace std;

int main() {
	const int row = 44;
	const int cul = 168;

	cout << "\x1B[H";
	cout << '*';

	char ch;
	while (ch = _getch()) {
		switch (ch) {
		case 'd':
			cout << '*';
			break;
		case 's':
			cout << "\x1B[B"; cout << "\x1B[D";
			cout << '*';
			break;
		case 'a':
			cout << "\b\b";
			cout << '*';
			break;
		case 'w':
			cout << "\x1B[A"; cout << "\x1B[D";
			cout << '*';
			break;
		case ' ':
			cout << ' ';
			break;
	}

		
		

	}

	_getch();
}


