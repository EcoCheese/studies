
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main() {
    
    int sum = 0;
    int arr [30];
    
    for (int i = 0; i < 30; i++){
        arr [i] = rand()% 50 + 30;
        sum = sum + arr[i];
        printf("%d ", arr[i]);
    }
    
    printf("\nсумма элементов массива: %d\n", sum);
    sum = sum / 30;
    printf("среднее значение елементов массива: %d\n", sum);
    
    printf("\n");
    
    printf("отличие каждого элемента массива от ср. знач.:\n");
    for (int i = 0; i < 30; i++){
        float ave = arr[i] - sum;
        printf("%.f\t", fabsf (ave));
    }printf("%d", arr);
    
    printf("\n");
    
    return 0;
}

//int main() {
//
//    int sum = 0;
//    int arr [] = {14, 25, 17, 42, 37, 21, 43, 38, 25, 31, 36, 19, 23, 26, 18, 25, 46, 20, 17, 32, 36, 21, 39, 16, 33, 22, 18, 20, 29, 36};
//
//    for (int i = 0; i < 30; i++){
//        sum = sum + arr[i];
//    }
//
//    printf("сумма элементов массива: %d\n", sum);
//    sum = sum / 30;
//    printf("среднее значение елементов массива: %d\n", sum);
//    printf("\n");
//
//    printf("отличие каждого элемента массива от ср. знач.:\n");
//    for (int i = 0; i < 30; i++){
//        float ave = arr[i] - sum;
//        printf("%.f ", fabsf (ave));
//    }
//    printf("\n");
//
//    return 0;
//}
