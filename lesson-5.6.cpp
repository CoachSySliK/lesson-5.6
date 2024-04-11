#include <iostream>

using namespace std;

int main()
{
    int number[3];

    cout << "Какие числа вы хотите сравнить?\n";
    cin >> number[0] >> number[1] >> number[2];

    if (number[0] == number[1] && number[0] == number[2]) {
        cout << "Число " << number[0] << " встречается 3 раза\n";
    }
    else if (number[0] == number[1] || number[0] == number[2]) {
        cout << "Число " << number[0] << " встречается 2 раза\n";
    }
    else if (number[1] == number[2]) {
        cout << "Число " << number[1] << " встречается 2 раза\n";
    }
    else {
        cout << "Совпадений нет!\n";
    }

    return 0;
}
