#include <iostream>
#include <climits> // 각 자료형 별 최대 값 알
using namespace std;

int main()
{
    int n_int = INT_MAX;
    cout << "int는 " << sizeof n_int << "바이트이다." << endl;
    cout << "이 바이트의 최대값은" << n_int << "이다." << endl;

    // unsigned int b = -1; 음수부분이 안나오게 된다. 음수부분만큼이 양수에 더해져서 최대값이 재 생성되고
    // 음수인 -1을 넣게 된다면 최대값에서 한바퀴를 돌아 -1만큼 차감된 값이 출력될 것이다.

    float a = 3.14;
    int b = 3.14;

    cout << a << endl;
    cout << b << endl; // b를 출력하면 정수형 이므로 3만 띡 출력됨.

    return 0;
}