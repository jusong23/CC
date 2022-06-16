#include <iostream>
// #define PIE 3.1415926534 C에서의

using namespace std;
int main()
{

    const float PIE = 3.1415926535;
    int r1 = 3;
    float s1 = r1 * r1 * PIE;

    int r2 = 4;
    float s2 = r2 * r2 * PIE;

    //1. 바뀔 필요가 없는 수
    //2. 바뀌어서는 안되는 수 ---> 상수 (3.14같은거)

    cout << s2 << endl;
    return 0;
}