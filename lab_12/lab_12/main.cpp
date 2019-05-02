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
    
    cout << "Enter string:" << endl;
    
    getline(cin, st1);
    
    int n = st1.length();
    char ch[n], ch1[n];
    st1.copy(ch, n);

    cout << "\nPrinting string in uppercase:" << endl;
    
    for(i = 0; i < n; i++){
        if(islower(ch[i]))
            ch[i] = toupper(ch[i]);
        cout << ch[i];
    }
    
    cout << endl << "\nFinding letter from 'q'('Q') to 'z'('Z'):" << endl;
    
    //at this point we chose letters and adding them to an additional array
    for(i = 0; i < n; i++){
        if(ch[i] > 'Q' && ch[i] < 'Z'){
            cout << ch[i];
            ch1[a] = ch[i];
            a++;
        }
    }
    
    string st2(ch1, a);
    
    cout << endl << "\nAlphabetical order:" << endl;
    
    sort(st2.begin(), st2.end());
    
    cout << st2;

    return 0;
}

//string example:
//SHiFROVkaOtSHPionA
