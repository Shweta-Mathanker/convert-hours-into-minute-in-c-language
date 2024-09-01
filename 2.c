#include<stdio.h>
int main(){
    int hr,min;
    printf("enter hours and minutes:");
    scanf("%i %i",&hr,&min);
    printf("total number of minutes are:%i",(hr*60)+min);
    return 0;
}