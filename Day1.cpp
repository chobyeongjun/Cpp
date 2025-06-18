// 1. iostream 라이브러리를 포함시켜줘. (입력과 출력을 다루는 도구 모음)
#include <iostream>

// 2. std 라는 이름 공간(namespace)을 사용할 거야. (cout, endl 등이 여기 소속)
using namespace std;

// 3. 프로그램이 시작되는 곳! int main() 함수의 중괄호 {} 안에서 모든 것이 시작돼.
int main() {
    // 4. cout은 '콘솔에 출력(Console Out)'하라는 명령. << 뒤의 내용을 화면에 보여줘.
    //    endl은 줄바꿈(End Line)을 의미해.
    cout << "안녕하세요 조병준입니다." << endl;
    cout << "저의 목표는 IMU 센서로 모터 제어하기입니다." << endl;
    cout << "아자아자 화이팅" << endl;
    
    // 5. 프로그램을 문제 없이 정상적으로 마칠게. (운영체제에 0을 반환)
    return 0;
}
