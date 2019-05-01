//
//  main.cpp
//  lab_11
//
//  Created by Ilya Kangin on 3/1/19.
//  Copyright © 2019 Ilya Kangin. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int N = 255;
    char z[N];
    int k = 0, i, a = 0;
    cout << "Напишите предложение:\n";
    gets(z);
    
    
    for (i = 0; i < strlen(z); i++){//определяем размер массива z
        if (z[i] == '?' && k == 1)//условие выхода из массива
            break;
        else if (z[i] == '?')//подсчёт знаков вопроса
            k++;
        else if (z[i] == ' ')//подсчёт пробелов
            a++;
    }
    
    cout << "\nКоличество пробелов до второго '?' = " << a;
    
    return 0;
}


//Спрашивают, что с ней? «Ничего». Что она делает ножом? «Ничего». Откуда кровь на ее юбках? «Рыбная». Она встает, отбрасывает нож и уходит, чтобы вымыться.
