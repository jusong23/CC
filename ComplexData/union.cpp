#include <iostream>

using namespace std;

int main()
{

    union MyUnion // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음
    {
        int intVal;
        long longVal;
        float floatVal;
    };

    MyUnion test;
    test.intVal = 3;
    cout << test.intVal << endl;
    test.longVal = 33;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    test.floatVal = 3.3;
    cout << test.intVal << endl;
    cout << test.longVal << endl;
    cout << test.floatVal << endl;
    // 한번에 한 가지만 보관할 수 있음
    // 이전에 보관한 값이 소실 된다. !!!
    return 0;
}