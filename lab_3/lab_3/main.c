
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){
    
    float sum = 1, x, eps, z = 1, s;
    int i, n = 1;
    
    printf("введите х: ");
    scanf("%f", &x);
    s = 1 / (1 - x);
    if(fabsf(x) < 1){
        printf("введите точность: ");
        scanf("%f", &eps);

        for (i = 1; fabsf(z) > eps; i++){
            z = z * x;
            sum = sum + z;
            n++;
        } printf("n = %d ", n);
        printf("\nсумма степеней x =\t%.11f", sum);
    }
    
    printf("\nсумма по формуле:\t%.11f", s);
    
    return 0;
}
