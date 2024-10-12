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

    int sumas=0;//сумму всех элементов массива
    for(int i=0;i<mas;++i){
        sumas+=l[i];
    }
    std::cout<<"Сумма всех элементов массива - "<<sumas<<std::endl;
    

    int sumas2=0;//сумма квадратов всех элементов массива
    for (int t=0;t<mas;++t){
        sumas2+=l[t]*l[t];
    }
    std::cout<<"Сумма квадратов всех элементов массива - "<<sumas2<<std::endl;


    int su=0; //сумма шести первых элементов массива
    for (int p=0;p<6;++p){
        su+=l[p];
    }
    std::cout<<"Сумма шести первых элементов массива - "<<su<<std::endl;

    
    int k1,k2;
    std::cout<<"Введите к1 и к2,так что к2>k1.K1=";
    std::cin>>k1;
    std::cout<<"Введите к1 и к2,так что к2>k1.K2=";
    std::cin>>k2;
    int sum1=0;
    for(int r=k1;r<=k2 && r<mas;++r){
        sum1+=l[r];
    }
    std::cout<<"Сумма элементов массива с к1 по к2 = "<<sum1<<std::endl;
    
    
    int cp=0;
    int sbm=0;
    for (int e=0;e<mas;++e){
        sbm+=l[e];
        cp=sbm/mas;
    }
    std::cout<<"Среднее арифметическое всех элементов массива "<<cp<<std::endl;
    
    
    int cp2=0;
    int count=0;
    int s1,s2;
    std::cout<<"Введите s1 и s2,так что s2>s1.s1=";
    std::cin>>s1;
    std::cout<<"Введите s1 и s2,так что s2>s1.s2=";
    std::cin>>s2;
    for (int w=s1;w<=s2 && w<mas;++w){
        cp+=l[w];
        ++count;
    }
    if (count>0){
        cp/=count;
        std::cout<<"Среднее арифметическое элементов массива с s1 по s2= "<<cp<<std::endl;
    }
    return 0;
}
