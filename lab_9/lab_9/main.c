//
//  main.c
//  lab_9
//
//  Created by Ilya Kangin on 11/23/18.
//  Copyright © 2018 Ilya Kangin. All rights reserved.
//

#include <stdio.h>
#include <string.h>

struct stud_mark{
    int id;
    char name[30];
    int mark;
} ;

int main() {
    
    int i, N, m = 0;

    printf("введите количество студентов: ");
    scanf("%d", &N);
    
    struct stud_mark stud[N];
    
    
    for(i = 0; i < N; i++){
        stud[i].id = i;
        printf("\nвведите имя студента: ");
        scanf("%s", stud[i].name);
        
        for(int a = 0; a < 100; a++){
            printf("введите оценку за экзамен: ");
            scanf("%d", &stud[i].mark);
            if (stud[i].mark < 0 || stud[i].mark > 5){
                printf("\tERROR: оценка вне диапазона\n");
                stud[i].mark = 0;
            } else {
                break;
            }
        }
    }
    
    printf("\nВведите оценку для поиска студентов:");
    scanf("%d", &m);
    
    printf("\nСтуденты с оценкой %d:", m);
    for(i = 0; i < N; i++){
        if(stud[i].mark == m)
            printf("\n%s", stud[i].name);
    }
    return 0;
}
