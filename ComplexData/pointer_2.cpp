#include <iostream>

using namespace std;

int main()
{

    //new 연산자
    /* new 어떤 데이터형을 원하는 지 new연산자에게 알려주면,
    new 연산자는 그에 알맞은 크기의 메모리 블록을 
    찾아내고 그 블록의 주소를 리턴합니다.
    */
    int *pointrer = new int;
    // 4바이트의 크기를 할당하여 pointer 변수를 초기화

    //delete 연산자
    /* 
    사용한 메모리를 다시 메모리 폴로 환수
    환수된 메모리는 프로그램의 다른 부분이 다시 사용
    */
    delete pointrer; // pointrer를 사용하지 않을 때는 해제 시켜줘야 누수 X

    double *p3 = new double[3];
    p3[0] = 0.12;
    p3[1] = 0.34;
    p3[2] = 0.56;

    cout << "p3[0] is " << p3[1] << ".\n";

    p3 = p3 + 1;

    cout << "now p3[0] is " << p3[0] << ".\n";

    delete[] p3;
    return 0;
}
/*
1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다
2. 같은 메모리 블록을 연달아 두 번 delete로 해제할 수 없다.
3. new[] 메모리를 대입할 경우 delete[]로 해제한다.
4. new가 대괄호 아니라면 delete역시 delete X 
*/