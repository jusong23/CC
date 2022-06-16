#include <iostream> // 전 처리 지시자

using namespace std;

int main(void)
{ // c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야한다.
    /*
    1.변수의 자료형
    2.변수의 이름
    3.변수가 어디에 저장되는가?(메모리영역)
    */

    int a;  // 변수 선언
    a = 30; // 변수 대입

    int b = 9; // 변수 초기화
               /*
    1. 숫자로 시작할 수 없다. int 77aaa;
    2. C++에서 사용하고 있는 키워드는 사용할 수 없다. int return;
    3. white space를 사용할 수 없다. int a a a;
    */
    cout << "a의 주소값 : " << &a << endl;

    //변수는 사용되기 이전에 정의 되어야한다.
    return 0;
}