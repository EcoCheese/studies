#include <stdio.h>
#include <math.h>

int main (){
    
    float a = 0.5 , b = 3.1 , c = 0.4 , x , y;
    
    x = sqrt(asin(2*c) + exp(-2*c)*(c+b));
    y = pow(cos(pow(c, 3)), 2) - c / sqrt(pow(a,2)+pow(b, 2));
    
    printf("x = %f\n", x);
    printf("y = %f\n", y);

    return 0;
}
