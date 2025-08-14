#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "숫자를 입력하세요: ";
    cin >> num;

    if (num % 2 == 0) {
        cout << "짝수입니다.\n";
    }
    else {
        cout << "홀수입니다.\n";
    }


    int score;
    cout << "점수를 입력하세요: ";
    cin >> score;

    switch (score / 10) { // 90~100 → 9~10
    case 10:
    case 9:
        cout << "A학점\n";
        break;
    case 8:
        cout << "B학점\n";
        break;
    case 7:
        cout << "C학점\n";
        break;
    case 6:
        cout << "D학점\n";
        break;
    default:
        cout << "F학점\n";
    }

    return 0;
}
