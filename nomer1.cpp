#include <iostream>
#include <vector>
#include <random>  
using namespace std;

int main() {
    int mas;
    std::cout << "Pазмер массива: ";
    std::cin >> mas;

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
    
    for (int i = 0; i < mas; ++i) {
        l[i] *= 2;
        std::cout << l[i] << " ";
    }
    std::cout << "- Массив, умноженный на 2" << std::endl;


    int a;
    cout<<"Введите число а -";
    cin>>a;
    for (int p=0;p<mas;++p){
        l[p]-=a;
        std::cout<<l[p]<<" ";
    }
    std::cout<<"-Массив,уменьшенный на число а"<<std::endl;


    double per=l[0];
    if (per!=0){
        for (int t=0;t<mas;++t){
            l[t]/=per;
            std::cout<<l[t]<<" ";
        }
    }
    else{
        std::cout<<"Первый эдемент массива равен 0"<<std::endl;
    }
    std::cout<<"-Массив,поделенный на первый элемент массива"<<std::endl;
    return 0;
}
