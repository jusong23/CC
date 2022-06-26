#include <iostream>

using namespace std;

int main()
{
    // 구조체: 다른 데이터형이 허용되는 데이터의 집합
    // 배열 : 같은 데이터형의 집합
    struct Person
    {
        string name;
        string dept_name;
        int age;
        int code;
    } B;

    Person A[2] = {
        {"jusong",
         "Pshy",
         120,
         122232},
        {"jusoasasng",
         "Pssashy",
         12220,
         12212232}};

    cout << A[1].age << endl;
}
