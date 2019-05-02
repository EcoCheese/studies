#include <stdio.h>
#include <math.h>

int main (){
    
    float a = 0.5 , b = 3.1 , c = 0.4 , x , y; // a, b and c are given in task
    
    x = sqrt(asin(2*c) + exp(-2*c)*(c+b));  //equasion for x
    y = pow(cos(pow(c, 3)), 2) - c / sqrt(pow(a,2)+pow(b, 2)); // equasion for y
    
    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}
