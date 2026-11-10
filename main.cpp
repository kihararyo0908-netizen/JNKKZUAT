#include <iostream>
#include <ctime>
#include "janken.h"
#include "kazuate.h"
using namespace std;

int main() {
	srand((unsigned int)time(nullptr));

	int menu;

	while (true) {
		cout << endl;
		cout << "=============" << endl;
		cout << "1 : じゃんけん" << endl;
		cout << "2 : 数当て" << endl;
		cout << "3 : 終了" << endl;
		cout << "=============" << endl;

		cin >> menu;

		switch (menu) {
		case 1:
			PlayJanken();
			break;

		case 2:
			PlayKazuate();
			break;

		case 3:
			return 0;

		default:
			cout << "入力エラー" << endl;
			break;
		}
	}
}