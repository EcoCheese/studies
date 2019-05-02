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
    cout << "Enter the sentence:" << endl;
    gets(z);
    
    
    for (i = 0; i < strlen(z); i++){//getting the size of array
        if (z[i] == '?' && k == 1)//leaving the cycle
            break;
        else if (z[i] == '?')//counting '?'
            k++;
        else if (z[i] == ' ')//counting ' '
            a++;
    }
    
    cout << "\nAmount of spaces before 2nd '?' = " << a;
    
    return 0;
}

//example of the sentence
//Спрашивают, что с ней? «Ничего». Что она делает ножом? «Ничего». Откуда кровь на ее юбках? «Рыбная». Она встает, отбрасывает нож и уходит, чтобы вымыться.
