//
//  main.c
//  lab_7
//
//  Created by Ilya Kangin on 10/30/18.
//  Copyright © 2018 Ilya Kangin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i, f, n;
    double sum = 0;
    
    printf("количество елементов = ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("массив рандомных елементов(от 1 до 20):\n");
    for (int i = 0; i < n; i++){
        arr [i] = rand()%19+1;
        printf("%d\t", arr[i]); }
    printf("\nсоответственные значения функции:\n");
    
    for (i = 0; i < n; i++){
        if(arr[i] % 3 == 0) {
            f = arr[i] * arr[i];
            printf("%d\t", f);
        } else if (arr[i] % 3 == 1) {
            f = arr[i];
            printf("%d\t", f);
        } else { f = arr[i] / 3;
            printf("%d\t", f);  }
        sum = sum + f;
    }
    printf("\n\nсумма значений функции = %2.f", sum);
    
    return 0;
}
