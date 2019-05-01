#include <stdio.h>
#include <math.h>


int main() {
    
    float x, y, a = 4, i = 0.4;
    const double pi=3.1415926;
    
    for (x = -2; x <= 2; x += i){
        if (x < 1.2) {
            y = exp(pow(x,2)/2) + log(a);
        } else if (x == 1.2) {
            y = a * (pow(cos(pi * (x / 2.7)), 2));
        } else {
            y = pow(x, 2) + a * x + 5;
        }
        printf("y = %.2f\tx = %.1f\n", y, x);
    }
    return 0;
}
