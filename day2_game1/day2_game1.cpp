#include <iostream>
#include <random>
#include <limits>

using namespace std;

int main() {
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dist(1, 100);
	int secret = dist(gen);

	int tries = 0;
	while (true) {
		cout << "숫자를 입력하세요 : ";
		int guess;

		if (!(cin >> guess)) {
			cout << "숫자만 입력해주세요(1~100)\n";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			continue;
		}

		tries++;


		if (guess > secret) {
			cout << "DOWN !!\n";

		}
		else if (guess < secret) {
			cout << "UP !! \n";
		}
		else {
			cout << "정답 !!\n시도 횟수 : " << tries << "\n";
			break;
		}
	}
	cout << "게임 종료";
	return 0;
}