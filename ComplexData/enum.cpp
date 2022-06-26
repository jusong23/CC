#include <iostream>

using namespace std;

int main()
{
    // 열거체(enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법

    enum color
    {
        red,
        blue,
        yellow
    }; // 사용된 열거자들을 기호상수로써 관리

    color a = yellow;
    cout << a << endl; // 2를 출력

    int b;
    b = blue;
    b = blue - 1;
    cout << b << endl; // 열거형들의 상수연산은 안되지만 int형으로 하는 건 됨
}