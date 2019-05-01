//
//  main.c
//  lab_6
//
//  Created by Ilya Kangin on 10/30/18.
//  Copyright © 2018 Ilya Kangin. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main() {
    
    int s = 0, n, i;
    
    printf("введите число: ");
    scanf("%d", &n);
    
    for(i = 0; n != 0; i++){
        s = s + n % 10;
        n = n / 10;
    }
    printf("сумма цифр числа = %d", s);
    
    return 0;
}
