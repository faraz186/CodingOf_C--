#include<stdio.h>

int main(){
    printf("*********K-Electric Bill************");

    int unit,amount;

    printf("Enter total units consumed: ");
    scanf("%d", &unit);

    if(unit <= 50)
    {
        amount = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amount = 25 + ((unit-50) * 0.75);
    }
    else if(unit <= 250)
    {
        amount = 100 + ((unit-150) * 1.20);
    }
    else
    {
        amount = 220 + ((unit-250) * 1.50);
    }

   int difference = amount / 100;
    
}