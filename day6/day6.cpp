#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    cout << "1부터 10까지의 합: " << sum << endl;

    for (int i = 2; i <= 9; i++) {        // 단 (2단~9단)
        for (int j = 1; j <= 9; j++) {    // 곱하는 수 (1~9)
            cout << i << " * " << j << " = " << i * j << "\n";
        }
        cout << endl; // 단마다 줄바꿈
    }

    return 0;
}
