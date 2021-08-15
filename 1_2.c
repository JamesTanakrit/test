#include<stdio.h>
int main(){
    float x, y;
    scanf("%f %f", &x ,&y);
    if(y != 0)
    {
        printf("%.2f %.2f %.2f %.2f", x+y , x-y, x*y, x/y);
    }
    else
    {
        printf("%.2f %.2f %.2f Error", x+y , x-y, x*y);
    }
    return 0;
}