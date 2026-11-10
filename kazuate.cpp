#include <iostream>
#include <cstdlib>
using namespace std;

void PlayKazuate() {
	int answer = rand() % 100 + 1;
	int input;

	cout << "数当てゲーム" << endl;
	cout << "1～100の数字を当ててください" << endl;

	do {
		cin >> input;

		if (input > answer) {
			cout << "もっと小さいです" << endl;
		}
		else if (input < answer) {
			cout << "もっと大きいです" << endl;
		}
	} while (input != answer);
	cout << "正解です" << endl;
}