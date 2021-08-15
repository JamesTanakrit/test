#include<stdio.h>
int main(){
    float x[2];
    for (int i = 0; i <= 1; i++)
    {
        scanf("%f", &x[i]);
    }
    if(x[1] != 0)
    {
        printf("%.2f %.2f %.2f %.2f", x[0]+x[1] , x[0]-x[1], x[0]*x[1], x[0]/x[1]);
    }
    else
    {
        printf("%.2f %.2f %.2f Error", x[0]+x[1] , x[0]-x[1], x[0]*x[1]);
    }
    return 0;
}