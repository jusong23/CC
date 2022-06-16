#include <iostream>

using namespace std;
int main()
{
    //데이터형 변환
    int a = 3.141592; // 실수가 정수로 데이터 형변환

    char ch = 'M';
    cout << (int)ch << endl;
    cout << static_cast<int>(ch) << endl; // 같은 용도로 쓰이는 강제 데이터 형변환

    return 0;
}