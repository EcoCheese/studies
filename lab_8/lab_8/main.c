//
//  main.c
//  lab_8
//
//  Created by Ilya Kangin on 10/30/18.
//  Copyright © 2018 Ilya Kangin. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i = 0, j = 0, n, min;
    
    printf("введите ранг матрицы: ");
    scanf("%d", &n);
    
    int arr[n][n];
    
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
        arr[i][j] = rand()%10;
        printf("%d ", arr[i][j]);
        } printf("\n");
    }
    printf("\n\n");
    
    printf("min el matr:");
    
    for (i = 0; i < n; i++){
        min = arr[i][0];
        for (j = 0; j <= i; j++){
            if (arr[i][j] < min){
                min = arr[i][j];
            }
        } printf("%d\t", min);
    }
    return 0;
}
