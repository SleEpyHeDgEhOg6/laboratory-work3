#include <iostream>
#include <string>
using namespace std;


int main() {
    setlocale(LC_ALL, "RU");
    std::string newword;
    std::cout << "Введите слово: ";
    std::cin >> newword;
    std::string uchod = "Can you can a can as a canner can can a can?";
    std::string posle;
    std::string flag;
    for (char ch : uchod) {//проходимся по всем символам предложения
        if (ch == ' ' || ch == '?') {//чтобы учесть при сборке нового предложения пробелы и вопрос
            if (flag == "can" || flag == "Can") {
                posle += newword;
            }
            else {
                posle += flag;
            }
            posle += ch;
            flag.clear();//очищаем переменную,удаляем символ,который был до этого
        }
        else {
            flag += ch;
        }
    }
    std::cout <<"Получившиеся предложение после замены слова 'can' на новое слово = "<<posle << std::endl;
    return 0;
}
