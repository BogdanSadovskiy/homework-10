using namespace std;
#include <Windows.h>
#include <iostream>

int main()
{
	/*
	// first exercise
	char sym;
	int l, s, q;
	cout << "Enter symbol\n"; cin >> sym;
	cout << "What line? (1 - horizontal; 2 - vertical)\n";
	cin >> l;
	cout << "what size the line is? \n"; cin >> q;
	cout << "Speed of line (1 - slow; 2 - middle; 3 - fast)";
	cin >> s;
	for (int i = 1; i <= q; i++) {
		cout << sym;
		if (s == 1) {
			Sleep(1200);
		}
		else if (s == 2) {
			Sleep(600);
		}
		else if (s == 3) {
			Sleep(300);
		}
		if (l == 2) {
			cout << endl;
		}
	}
	*/
	 // cubies
	srand(time(NULL));
	
	int sumc = 0, sump = 0;
	cout << "This is a game against computer.\n"; 
	cout << "You have to win int a rolling cube game\n ";
	cout << "Let us start" << endl << endl;
	int i = 1;
	int p = 1;
	char sym;
	while (p != 0) {
		do {
			
			cout << "Enter any symbol to start roll" << endl;
			cout << "(input 0 to finish the game)\n\n"; cin >> sym;
			if (sym == '0') {
				cout << "Game over. See you again.\n";
				break;
			}
			int rand1 = rand() % 6 + 1;
			int rand2 = rand() % 6 + 1;
			int randp1 = rand() % 6 + 1;
			int randp2 = rand() % 6 + 1;
			cout << "Computer rolled " << rand1 << " and " << rand2 << endl;
			Sleep(1000);
			cout << "You rolled "; Sleep(1000); 
			cout << randp1 << " and "; Sleep(1000);
			cout << randp2 << endl;
			sumc += rand1 + rand2;
			sump += randp1 + randp2;
			i++;
			
		} while (i <= 3);
		cout << " __________\n";
		cout << "|COMP| YOU |\n";
		
		cout << "| " << sumc << " |  " << sump << " |" << endl;
		cout << " ----------\n";
		if (sym == '0') {
			break;
		}
		if (sumc > sump) {
			cout << "You lose\n";
		}
		else if ((sumc == sump) && (sumc != 0)) {
			cout << "Draw\n";
		}
		else if (sumc < sump) {
			cout << "You won\n";
		}
		cout << "\nWant to play again? (1 - yes; 0 - no\n"; 
		cin >> p;
	}
}

