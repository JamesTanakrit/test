#include<stdio.h>
int main(){
    float h, w;
    scanf("%f %f", &h, &w);
    float BMI = w/(h*h);
    if(BMI < 18.5)
    {
        printf("%.2f\nUnderweight", BMI);
    }
    else if(BMI >= 18.5 && BMI < 25)
    {
        printf("%.2f\nNormal", BMI);
    }
    else if (BMI >= 25 && BMI < 30)
    {
        printf("%.2f\nOverweight", BMI);
    }
    else
    {
        printf("%.2f\nObese", BMI);
    }  
    return 0;
}