#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    std::string City1;
    std::string City2;
    std::string City3;
    std::cout << "Введите название 1-ого города - ";
    std::cin >> City1;
    std::cout << "Введите название 2-ого города - ";
    std::cin >> City2;
    std::cout << "Введите название 3-его города -  ";
    std::cin >> City3;
    int le1 = City1.length();
    int le2 = City2.length();
    int le3 = City3.length();
    if (le1 > le2 && le1 > le3) {
        std::cout << "Самое длинное название - " << le1 << std::endl;
    }
    if (le2 > le1 && le2 > le3) {
        std::cout << "Самое длинное назване - " << le2 << std::endl;
    }
    if (le3 > le1 && le3 > le2) {
        std::cout << "Самое длинное название - " << le3 << std::endl;
    }
    if (le1 < le2 && le1 < le3) {
        std::cout << "Самое короткое название - " << le1 << std::endl;
    }
    if (le2 < le1 && le2 < le3) {
        std::cout << "Самое короткое название - " << le2 << std::endl;
    }
    if (le3 < le2 && le3 < le1) {
        std::cout << "Самое короткое название - " << le3 << std::endl;
    }
    return 0;
}
