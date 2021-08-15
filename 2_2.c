#include<stdio.h>
#include<math.h>
int main(){
    float x[2];
    for (int i = 0; i <= 1; i++)
    {
        //ตัวเเรกคือ ส่วนสูง(เมตร) ตัว2คือ น้ำหนัก(กิโลกรัม)
        scanf("%f", &x[i]);
    }
    float BMI = x[1]/pow( x[0], 2);
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