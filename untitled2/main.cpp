#include <iostream>

 using namespace std;

int uczniowie, cukierki, x, y;

int main()
{
    cout << "Ile uczniow liczy klasa:";
    cin >> uczniowie;

    cout << "Ile cukierkow kupila mama:";
    cin >> cukierki;

        x = cukierki/uczniowie;
    cout << "cukierkow dla kazdego ucznia:" << x;

    y = cukierki - x*uczniowie;
    cout << endl << "cukierki ktore zostana dla Jasia:" << y;

    return 0;
}