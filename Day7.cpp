#include <iostream>
using namespace std;

// --- 함수 원형(Prototype) 선언 ---
void printAllMotorStatus(float motors[][3], int num_motors);
int findHottestMotor(float motors[][3], int num_motors);
void checkForErrors(float motors[][3], int num_motors);
void issueNewCommand(float motors[][3], int motor_index, float new_angle);


// --- 프로그램의 시작점, main 함수 ---
int main() {
    // 3x3 2D 배열을 선언하고 가상의 데이터로 초기화합니다.
    // {상태, 목표 각도, 현재 온도}
    float motor_data[3][3] = {
        {1, 90.5f, 45.8f},   // 0번 모터
        {0, 0.0f, 32.1f},    // 1번 모터
        {-1, -45.0f, 95.2f}  // 2번 모터
    };

    // 1. 모든 모터의 상태를 출력합니다.
    printAllMotorStatus(motor_data, 3);

    // 2. 가장 뜨거운 모터를 찾아 그 결과를 변수에 저장하고 출력합니다.
    cout << "\n가장 뜨거운 모터 찾기:" << endl;
    int hottest_idx = findHottestMotor(motor_data, 3);
    cout << "가장 온도가 높은 모터는 " << hottest_idx << "번 모터입니다." << endl;
    
    return 0;
}


// --- 함수 내용(정의) ---

/**
 * 1. 모든 모터의 상태를 표 형태로 출력하는 함수
 */
void printAllMotorStatus(float motors[][3], int num_motors) {
    cout << "--- Motor Status Monitor ---" << endl;

    for (int i = 0; i < num_motors; i++) {
        cout << "Motor " << i << " | ";

        if (motors[i][0] == 1) {
            cout << "Status: Running "; 
        } else if (motors[i][0] == 0) {
            cout << "Status: Idle    ";
        } else if (motors[i][0] == -1) {
            cout << "Status: Error   ";
        } else {
            cout << "Status: Unknown ";
        }

        cout << "| Target Angle: " << motors[i][1];
        cout << " | Temperature: " << motors[i][2] << " C" << endl;
    }
    cout << "--------------------------" << endl;
}

/**
 * 2. 가장 온도가 높은 모터의 인덱스를 찾아 리턴하는 함수
 */
int findHottestMotor(float motors[][3], int num_motors) {
    float max_temp = motors[0][2];
    int hottest_motor_index = 0;

    for (int i = 1; i < num_motors; i++) {
        if (motors[i][2] > max_temp) {
            max_temp = motors[i][2];
            hottest_motor_index = i;
        }
    }
    return hottest_motor_index;
}

/**
 * 3. 에러 확인하기 (아직 내용 없음)
 */
void checkForErrors(float motors[][3], int num_motors) {
    // 나중에 채울 예정
}

/**
 * 4. 새로운 명령 내리기 (아직 내용 없음)
 */
void issueNewCommand(float motors[][3], int motor_index, float new_angle) {
    // 나중에 채울 예정
}