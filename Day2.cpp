#include <iostream>
#include <string>

using namespace std;

int main() { 

    // 모터 이름 (문자열)
    string motor_name = "Elmo Motor" ;

    // 모터의 목표 RPM (정수)
    int target_rpm = 5000;

    // IMU 센서에서 읽어온 현재 Pitch 각도 (실수)
    float voltage = 4.5f;
    // 시스템 준비 상태 (참/거짓)
    bool is_system_ready = false;

    // ---- 변수에 저장된 값들을 출력해봅시다 ----

    cout << "===== Motor Information =====" << endl;
    cout << "Model : " << motor_name << endl;
    cout << "Max RPM : " << target_rpm << "rpm" << endl;
    cout << "Voltage : " << voltage << "V" << endl;
    cout << "Error Status: " << is_system_ready << endl; // true는 1로 출력됩니다.
    cout << "========================" << endl;

    if (voltage < 24) {
        cout << "Warning Low Voltage!!" << endl;
    }
    
    // 변수의 값은 언제든지 바꿀 수 있습니다.
    cout << "모터 상태 변경!" << endl;
    is_system_ready = true; // 시스템 상태를 false로 변경
    cout << "System Ready: " << is_system_ready << endl; // false는 0으로 출력됩니다.

    return 0;

}