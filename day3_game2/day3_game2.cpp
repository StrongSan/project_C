#include <iostream>
#include <string>
#include <random>
#include <limits>
using namespace std;

// 난수 유틸
int randInt(int lo, int hi) {
    static random_device rd;
    static mt19937 gen(rd());
    uniform_int_distribution<int> dist(lo, hi);
    return dist(gen);
}

struct Unit {
    string name;
    int hp;
    int atk;
};

void printStatus(const Unit& u) {
    cout << u.name << " [HP: " << u.hp << ", ATK: " << u.atk << "]\n";
}

bool battle(Unit& player, Unit monster) {
    cout << "\n--- 전투 시작 ---\n";
    printStatus(player);
    printStatus(monster);

    while (player.hp > 0 && monster.hp > 0) {
        // 플레이어 공격 (가변 데미지)
        int dmgP = player.atk + randInt(-2, 2);
        if (dmgP < 0) dmgP = 0;
        monster.hp -= dmgP;
        cout << player.name << "의 공격! " << dmgP << " 데미지\n";
        if (monster.hp <= 0) {
            cout << monster.name << " 처치!\n";
            return true; // 승리
        }

        // 몬스터 반격
        int dmgM = monster.atk + randInt(-1, 1);
        if (dmgM < 0) dmgM = 0;
        player.hp -= dmgM;
        cout << monster.name << "의 반격! " << dmgM << " 데미지\n";
        if (player.hp <= 0) {
            cout << player.name << " 쓰러졌다...\n";
            return false; // 패배
        }
    }
    return false;
}

int readInt() {
    int x;
    while (!(cin >> x)) {
        cout << "숫자를 입력하세요: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return x;
}

int main() {
    cout << "=== 텍스트 RPG ===\n이름을 입력하세요: ";
    string pname;
    cin >> pname;

    Unit player{ pname, 30, 7 };

    while (true) {
        cout << "\n--- 메뉴 ---\n"
            << "1) 모험(전투)\n"
            << "2) 휴식(HP 5 회복)\n"
            << "0) 종료\n"
            << "선택: ";

        int menu = readInt();

        if (menu == 0) {
            cout << "게임 종료.\n";
            break;
        }
        else if (menu == 2) {
            player.hp += 5;
            cout << "휴식 완료. ";
            printStatus(player);
        }
        else if (menu == 1) {
            // 몬스터 생성(난수 기반)
            Unit slime{ "슬라임", randInt(12, 18), randInt(4, 6) };
            bool win = battle(player, slime);
            if (win) {
                cout << "전투 승리! HP 3 회복\n";
                player.hp += 3;
            }
            else {
                cout << "패배... HP를 10으로 회복하고 재도전!\n";
                player.hp = 10;
            }
            printStatus(player);
        }
        else {
            cout << "올바른 메뉴를 선택하세요.\n";
        }
    }

    return 0;
}
