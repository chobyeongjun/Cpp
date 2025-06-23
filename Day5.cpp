#include <iostream>
#include <string>
using namespace std;

int main() {
    string password = "";
    int loop_count = 0;
    bool is_door_opened = false; // 문이 열렸는지 상태를 저장할 변수 (초기값: false)

    while (password != "1234") {
        cout << "비밀번호를 입력하세요: ";
        cin >> password;

        // 먼저 정답인지 체크합니다.
        if (password == "1234") {
            is_door_opened = true; // 문이 열렸다고 상태를 변경
            break; // 정답이므로 루프 탈출
        }

        // 정답이 아닐 경우, 시도 횟수를 1 증가시킵니다.
        loop_count++;
        
        // 시도 횟수가 5번 이상인지 체크합니다.
        if (loop_count >= 5) {
            cout << "시도 횟수 초과!" << endl;
            break; // 시도 횟수 초과로 루프 탈출
        }
    }

    // 이제 루프가 끝난 후, 문이 열렸는지 상태를 확인하고 그에 맞는 메시지를 출력합니다.
    if (is_door_opened) {
        cout << "문이 열렸습니다." << endl;
    } else {
        cout << "문이 잠겼습니다. 프로그램을 종료합니다." << endl;
    }

    return 0;
}