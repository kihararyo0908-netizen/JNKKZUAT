#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void PlayJanken() {
	const char* hand[3] = {
		"グー", "チョキ", "パー"
	};

	int player;
	int cpu;

	cout << "じゃんけんゲーム" << endl;
	cout << "0:グー 1:チョキ 2:パー" << endl;
	cin >> player;
	cpu = rand() % 3;

	cout << "あなた : " << hand[player] << endl;
	cout << "CPU : " << hand[cpu] << endl;

	if (player == cpu) {
		cout << "あいこ" << endl;
	}
	else if ((player == 0 && cpu == 1) || (player == 1 && cpu == 2) || (player == 2 && cpu == 0)) {
		cout << "あなたの勝ち" << endl;
	}
	else {
		cout << "あなたの負け" << endl;
	}
}