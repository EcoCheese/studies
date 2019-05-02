//
//  main.cpp
//  lab_10
//
//  Created by Ilya Kangin on 3/1/19.
//  Copyright © 2019 Ilya Kangin. All rights reserved.
//

#include <iostream>

using namespace std;


void together(int s1, int s2, int X[s1], int Y[s2]); //function to push to arrays in one

void massive(int a, int M[]){ //function to fill the array
    for(int i = 0; i < a; i++){
        M[i] = rand()%50-25;
        cout << M[i] << "\t";
    }
}

int main(){
    int a, b;
    char name_1, name_2;
    
    
    cout << "Enter the name of the 1st array(one letter): "; //filling 1st array
    cin >> name_1;
    cout << "Enter the amount of elements: ";
    cin >> a;
    cout << name_1 << "(" << a << "):" << endl;
    int M1[a];
    massive(a, M1);


    cout << endl << "Enter the name of the 2nd array(one letter): "; //filling 2nd array
    cin >> name_2;
    cout << "Enter the amount of elements: ";
    cin >> b;
    cout << name_2 << "(" << b << "):" << endl;
    int M2[b];
    massive(b, M2);
    
    cout << "\n\nArray Z with elements of two arrays printed in row" << endl;
    together(a, b, M1, M2);
    
    return 0;
}

void together(int s1, int s2, int X[s1], int Y[s2]){
    int d = 0, a = s1 + s2, Z[a];
    
    for(int i = 0; i < s1; i++){
        if(X[i] > 0){
            Z[d] = X[i];
            d++;
        }
    }
    for(int i = 0; i < s2; i++){
        if(Y[i] > 0){
            Z[d] = Y[i];
            d++;
        }
    }
    for(int i = 0; i < d; i++){
        cout << Z[i] << "\t";
    }
}
