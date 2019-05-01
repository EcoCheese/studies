
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int i = 0, j = 0, n, N;
    
    printf("введите кол-во элементов строки массива: ");
    scanf("%d", &n);

    N = n * n;
    int arr[N], a[i][j];

    for (int i = 0; i < N; i++){
        arr [i] = rand()%10;
        printf("%d ", arr[i]);
    }
    printf("\n\n");
    
    N = 0;
    
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++, N++){
            a[i][j] = arr[N];
            if(i <= j) {printf("%d\t", a[i][j]);
            } else { printf("\t");}
        } printf("\n");
    }
    
    return 0;
}
