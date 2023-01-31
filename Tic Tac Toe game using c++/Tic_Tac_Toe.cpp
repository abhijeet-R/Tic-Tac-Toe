#include <bits/stdc++.h>
using namespace std;
char Matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char Player = 'X';
void Input(int &c) {
	cout << "Enter a value ";
	int a;
	cin >> a;
	cout << endl;
	if (a == 1 && Matrix[0][0] == '1')Matrix[0][0] = Player;
	else if (a == 2 && Matrix[0][1] == '2')Matrix[0][1] = Player;
	else if (a == 3 && Matrix[0][2] == '3')Matrix[0][2] = Player;
	else if (a == 4 && Matrix[1][0] == '4')Matrix[1][0] = Player;
	else if (a == 5 && Matrix[1][1] == '5')Matrix[1][1] = Player;
	else if (a == 6 && Matrix[1][2] == '6')Matrix[1][2] = Player;
	else if (a == 7 && Matrix[2][0] == '7')Matrix[2][0] = Player;
	else if (a == 8 && Matrix[2][1] == '8')Matrix[2][1] = Player;
	else if (a == 9 && Matrix[2][2] == '9')Matrix[2][2] = Player;
	else {
		c++;
		return;
	}
	Player = (Player == 'X') ? 'O' : 'X';

}
void Draw() {
	system("cls");
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)cout << Matrix[i][j] << " ";
		cout << endl;
	}
}
char Win() {
	if (Matrix[0][0] == 'X' && Matrix[0][1] == 'X' && Matrix[0][2] == 'X')return 'X';
	if (Matrix[1][0] == 'X' && Matrix[1][1] == 'X' && Matrix[1][2] == 'X')return 'X';
	if (Matrix[2][0] == 'X' && Matrix[2][1] == 'X' && Matrix[2][2] == 'X')return 'X';

	if (Matrix[0][0] == 'X' && Matrix[1][0] == 'X' && Matrix[2][0] == 'X')return 'X';
	if (Matrix[0][1] == 'X' && Matrix[1][1] == 'X' && Matrix[2][1] == 'X')return 'X';
	if (Matrix[0][2] == 'X' && Matrix[1][2] == 'X' && Matrix[2][2] == 'X')return 'X';

	if (Matrix[0][0] == 'X' && Matrix[1][1] == 'X' && Matrix[2][2] == 'X')return 'X';
	if (Matrix[2][0] == 'X' && Matrix[1][1] == 'X' && Matrix[0][2] == 'X')return 'X';


	if (Matrix[0][0] == 'O' && Matrix[0][1] == 'O' && Matrix[0][2] == 'O')return 'O';
	if (Matrix[1][0] == 'O' && Matrix[1][1] == 'O' && Matrix[1][2] == 'O')return 'O';
	if (Matrix[2][0] == 'O' && Matrix[2][1] == 'O' && Matrix[2][2] == 'O')return 'O';

	if (Matrix[0][0] == 'O' && Matrix[1][0] == 'O' && Matrix[2][0] == 'O')return 'O';
	if (Matrix[0][1] == 'O' && Matrix[1][1] == 'O' && Matrix[2][1] == 'O')return 'O';
	if (Matrix[0][2] == 'O' && Matrix[1][2] == 'O' && Matrix[2][2] == 'O')return 'O';

	if (Matrix[0][0] == 'O' && Matrix[1][1] == 'O' && Matrix[2][2] == 'O')return 'O';
	if (Matrix[2][0] == 'O' && Matrix[1][1] == 'O' && Matrix[0][2] == 'O')return 'O';
	return '/';
}
int main() {
	int c = 9;
	Draw();
	while (c--) {
		Input(c);
		Draw();
		if (Win() == 'X') {
			cout << "Player X Wins" << endl; break;
		}
		if (Win() == 'O') {
			cout << "Player O Wins" << endl; break;
		}
	}
	if (Win() == '/')cout << "It's a Draw" << endl;
	return 0;
}
