#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    std::string Surname1;
    std::string Surname2;
    std::cout << "Введите 1-ую фамилию - ";
    std::cin >> Surname1;
    std::cout << "ВВедите 2-ую фамилию - ";
    std::cin >> Surname2;
    int le1 = Surname1.length();
    int le2 = Surname2.length();
    if (le2 > le1) {
        std::cout << Surname2 << " больше чем " << Surname1 << std::endl;
    }
    else {
        std::cout << Surname1 << "больше чем " << Surname2 << std::endl;
    }
    return 0;
}
