#include <iostream>
#include <string>
using namespace std;


int main() {
    setlocale(LC_ALL, "RU");
    std::string word;
    std::cout << "Введите слово: ";
    std::cin >> word;
    int coutzve = word.length();
    std::string otvet = std::string(coutzve, '*') + word + std::string(coutzve, '*'); //std::string(coutzve, '*')-создание строки,но с указанной длиной и из каких символов она должна состоять
    std::cout << "Результат: " << otvet << std::endl;
    return 0;
}
