#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	int intVar;
	double doubleVar;
	char charVar;
	bool boolVar;
	string strVar;

	intVar = 42;
	doubleVar = 3.14;
	charVar = 'A';
	boolVar = true;
	strVar = "hello";

	cout << "int : " << intVar << " (" << sizeof(intVar) << " bytes)" << "\n";
	cout << "double : " << doubleVar << " (" << sizeof(doubleVar) << " bytes)" << "\n";
	cout << "char : " << charVar << " (" << sizeof(charVar) << " bytes)" << "\n";
	cout << "int : " << boolVar << " (" << sizeof(boolVar) << " bytes)" << "\n";
	cout << "int : " << strVar << " (" << sizeof(strVar) << " bytes)" << "\n";
		
	int num1, num2;
	cout << "첫번째 수를 입력하세요 : ";
	cin >> num1;
	cout << "두번째 수를 입력하세요 : ";
	cin >> num2;

	cout << "합 : " << num1 + num2 << "\n";
	cout << "곱 : " << num1 * num2 << "\n";
	cout << "차 : " << num1 - num2 << "\n";
	if (num2 != 0) {
		cout << "몫(정수) : " << num1 / num2 << "\n";
		cout << "나머지 : " << num1 % num2 << "\n";
		
		cout << fixed << setprecision(2);
		cout << "나눗셈(실수) : " << static_cast<double>(num1) / num2 << "\n";
	}
	else {
		cout << "0으로 나눌 수 없습니다 !\n";
	}

	int age, n;

	cout << "나이 : ";
	cin >> age;
	cout << "정수 : ";
	cin >> n;

	bool isAdult = (age >= 20);
	bool isEven = (n % 2 == 0);

	cout << boolalpha;
	cout << "성인 여부 : " << isAdult << "\n";
	cout << "짝수 여부 : " << isEven << "\n";

	return 0;
}