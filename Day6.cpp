#include <iostream>
using namespace std;

// 함수 원형(Prototype) 선언
float celsiusToFahrenheit(float celsius);
void printTemperatureStatus(float celsius);

// main 함수: 프로그램의 시작점
int main() {
    cout << "--- 온도 변환 및 상태 체크 프로그램 ---" << endl;

    // 여러 다른 온도로 함수를 테스트해봅니다.
    printTemperatureStatus(30.0f);  // "Hot!" 이 나와야 함
    printTemperatureStatus(20.0f);  // "Warm" 이 나와야 함
    printTemperatureStatus(10.0f);  // "Cool" 이 나와야 함

    return 0;
}

/**
 * @brief 섭씨 온도를 화씨 온도로 변환하여 리턴하는 함수
 * @param celsius 섭씨 온도 값
 * @return float 화씨 온도 값
 */
float celsiusToFahrenheit(float celsius) {
    // 화씨 = 섭씨 * 1.8 + 32
    return celsius * 1.8f + 32.0f;
}

/**
 * @brief 섭씨 온도를 받아 상태를 출력하는 함수
 * @param celsius 섭씨 온도 값
 */
void printTemperatureStatus(float celsius) {
    // 1. celsiusToFahrenheit 함수를 호출하여 화씨 온도를 계산하고, 그 결과를 fahrenheit 변수에 저장합니다.
    float fahrenheit = celsiusToFahrenheit(celsius);

    cout << "\n섭씨 " << celsius << "도는 화씨 " << fahrenheit << "도 입니다." << endl;

    // 2. if-else 문으로 화씨 온도를 확인하고 상태를 출력합니다.
    if (fahrenheit > 85.0f) {
        cout << "상태: Hot!" << endl;
    } else if (fahrenheit > 60.0f) {
        cout << "상태: Warm" << endl;
    } else {
        cout << "상태: Cool" << endl;
    }
}