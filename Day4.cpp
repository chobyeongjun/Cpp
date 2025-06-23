#include <iostream>
using namespace std;

int main() {
    float imu_angle = 25.5f; // IMU 각도 값이라고 상상해봅시다.

    cout << "현재 각도: " << imu_angle << endl;

    if (imu_angle > 30.0f) {
        // 만약 각도가 30도보다 크면
        cout << "경고: 위험 각도! 모터를 반대 방향으로 구동합니다." << endl;
    } 
    
    else if (imu_angle < -30.0f) {
        // 그게 아니고, 만약 각도가 -30도보다 작으면
        cout << "경고: 위험 각도! 모터를 원래 방향으로 구동합니다." << endl;
    } 
    
    else {
        // 위의 모든 경우가 아니라면 (즉, -30 ~ 30도 사이라면)
        cout << "안전 범위입니다. 모터를 현재 상태로 유지합니다." << endl;
    }
    
    return 0;
}