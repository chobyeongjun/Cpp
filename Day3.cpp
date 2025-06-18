#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int b = 20;

    // 1. 산술 연산
    cout << "--- 산술 연산 ---" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << " (몫!)" << endl;
    cout << "a % b = " << (a % b) << endl;

    // 2. 비교 연산
    cout << "--- 비교 연산 ---" << endl;
    cout << "a > b 결과 : " << (a > b) << endl; // true는 1로 나옴
    cout << "b == 20 결과: " << (b == 20) << endl;             // true는 1로 출력

    // 3. 논리 연산
    cout << "--- 논리 연산 ---" << endl;
    
    return 0;
}