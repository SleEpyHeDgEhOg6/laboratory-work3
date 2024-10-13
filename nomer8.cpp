#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    std::string word;
    std::cout << "Введите слово - ";
    std::cin >> word;
    int m, n;
    std::cout << "Ведите число m - ";
    std::cin >> m;
    std::cout << "Введите число n - ";
    std::cin >> n;
    std::string newword;
    for (int i = m; i <= n; ++i) {
        newword += word[i];
    }
    std::cout << "Полученное слово - " << newword << std::endl;
    return 0;
}
