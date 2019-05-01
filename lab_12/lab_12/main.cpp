//
//  main.cpp
//  lab_12
//
//  Created by Ilya Kangin on 3/1/19.
//  Copyright © 2019 Ilya Kangin. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int i = 0, a = 0;
    string st1;// = "SHiFROVkaOtSHPionA";
    
    cout << "Введите строку:" << endl;
    
    getline(cin, st1);
    
    int n = st1.length();
    char ch[n], ch1[n];
    st1.copy(ch, n);

    cout << "\nВывожу фразу заглавными буквами:" << endl;
    
    for(i = 0; i < n; i++){
        if(islower(ch[i]))
            ch[i] = toupper(ch[i]);
        cout << ch[i];
    }
    
    cout << endl << "\nВыполняю поиск всех букв от Q до Z:" << endl;
    
    //на данном этапе мы вибираем подходящие значения букв и заносим их в дополнительный массив с размерностью а
    for(i = 0; i < n; i++){
        if(ch[i] > 'Q' && ch[i] < 'Z'){
            cout << ch[i];
            ch1[a] = ch[i];
            a++;
        }
    }
    
    string st2(ch1, a);
//    cout << endl << st2 << endl;
    
    cout << endl << "\nСортирую выражение по алфавиту:" << endl;
    
    sort(st2.begin(), st2.end());
    
    cout << st2;

    return 0;
}

//SHiFROVkaOtSHPionA
