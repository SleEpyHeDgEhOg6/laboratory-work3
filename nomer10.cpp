#include <iostream>
#include <string>
using namespace std;


int main() {
    setlocale(LC_ALL, "RU");
    std::string word;
    std::cout << "Введите слово: ";
    getline(cin, word);
    double couta = 0;
    double cout = 0;
    for (char ch:word) { //(char ch:word)-означает, что каждый элемент, который мы будем перебирать, будет символом,чтобы исключить подсчет пробелов (символ -> берем из введеного предложения
        if (isalpha(ch)) { //isalpha-проверяет это буква из алфавита или нет
            ++cout;
            if (ch == 'a' || ch == 'A') {
                ++couta;
            }
        }
    }
    double kolpr = (couta / cout)*100 ;
    std::cout <<"Доля букв 'a' в предложении = "<<kolpr<<" %" << std::endl;
    return 0;
}
