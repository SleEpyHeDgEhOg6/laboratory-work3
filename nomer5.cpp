#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    std::string City;
    std::cout << "Введите название города - ";
    std::cin >> City;
    if ((City.length()) % 2 == 0) {
        std::cout << "Количество символов в названии города - четно " << std::endl;
    }
    else {
        std::cout << "Количество символов в названии города - нечетно " << std::endl;
    }
    return 0;
}
