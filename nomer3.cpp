#include <iostream>
#include <vector>
#include <random>  
using namespace std;

int main() {
    int mas=20;

    std::vector<double> l(mas);
    std::random_device rd;  // позволяет получить случайное целое число, которое мы использовали для выбора последовательности основного генератора mt19937
    std::mt19937 gen(rd());  
    std::uniform_int_distribution<> dist(1, 100);  // диапазон случайных чисел от 1 до 100,uniform_int_distribution-озволяет генерировать равномерное целочисленное распределение

    // заполняем массив случайными числами
    for (int i = 0; i < mas; ++i) {
        l[i] = dist(gen);  
        std::cout << l[i] << " ";
    }
    std::cout << "- Изначальный массив" << std::endl;

    int per3[3];
    for (int i=0;i<3;++i){
        per3[i]=l[i];
    }
    for (int t=0;t<3;++t){
        l[t]=l[mas-3+t];
    }
    for (int y=0;y<3;++y){
        l[mas-3+y]=per3[y];
    }
    std::cout<<"Измененный массив:";
    for (int u=0;u<mas;++u){
        std::cout<<l[u]<<" ";
    }
    return 0;
    
}
