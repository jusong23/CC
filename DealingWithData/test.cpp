#include <iostream> // 전 처리 지시자
/*
함수를 사용하고자 할때 함수의 원형을 미리 정의하여야 한다.
아래 cout과 같이 정의된 함수를 사용하기 위해 
*/
using namespace std;
// iostream에 기재된 함수를 사용하기 위해 사용
// 세미콜론(;)은 종결자로써 활용된다.

int main(void)
{ // c++ 코드에는 반드시 main의 이름을 가지고 있는 함수가 있어야한다.
    cout << "Hello!@@!!" << endl;
    // endl은 줄바꿈 역할
    // 꺽새 두개는 데이터의 흐름(방향)을 나타낸다. Hello 라는 문자를 cout 너가 실행시켜줘!
    return 0;
}