#include <stdio.h>

float power(float base, float exp);
float derivative(float num, float expo);

int main(void)
{
    float base_1;
    float exp_1;
   
    printf("What's the base?\n");
    scanf("%f", &base_1);

    
    printf("What's the exponent?\n");
    scanf("%f", &exp_1);

    float dxdy = derivative(base_1, exp_1);

    printf("%.0f", dxdy);
    
    return 0;
}

float power(float base, float exp)
{
    float result = 1.0;
    while (0 < exp)
    {
        result = result * base;
        exp--;
    }
    return result;
}

float derivative(float num, float expo)
{
    float h = 0.0001;

    float fx_h = power(num + h, expo);
    float fx = power(num, expo);

    return (fx_h - fx)/ h;
}
