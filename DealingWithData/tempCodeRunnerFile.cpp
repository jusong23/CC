#include <iostream>

using namespace std;

int main()
{

    int as = 77;
    char bc = 'a'; // 작은 문자형 하나만 사용할 수 있음 , 그래서 ''이용하고 null값 따로 표현해야 함
    // null 문자
    char ff[] = {'a', 'b', '\0'};

    string df = "a"; // string은 문자열, 즉 여러문자 표현가능 하므로, 큰 따옴표안에 한개이상의 문자, a와 null 을 담을 수 있는 것

    bool a = 0;
    bool b = 2;
    bool c = 23;

    cout << a << " " << b << " " << c << endl;
}