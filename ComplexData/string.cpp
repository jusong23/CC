#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "LeeJuSong";

    cout << "내 이름은" << name2;
    cout << "이다. 당신의 이름은?\n";
    cin.get(name1, Size);
    cout << "당신의 이름은" << name1 << "이군요" << endl;
}