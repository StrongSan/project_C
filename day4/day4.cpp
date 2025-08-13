#include <iostream>

using namespace std;

int main() {
	int age;

	cout << "나이를 입력하세요 : ";
	cin >> age;

	if (age >= 20) {
		cout << "성인입니다.\n";
	}
	else if (age < 20) {
		cout << "미성년자 입니다.\n";
	}
	else {
		cout << "숫자만 입력해주세요 : \n";
	}

	int a, b;
	cout << "숫자1 : ";
	cin >> a;
	cout << "숫자2 : ";
	cin >> b;

	if (a > b) {
		cout << "더 큰 숫자는 : " << a;
	}
	else if (b > a) {
		cout << "더 큰 숫자는 : " << b;
	}
	else if (a == b) {
		cout << "같습니다.";
	}
	else {
		cout << "숫자만 입력해주세요.";
	}

return 0;
}