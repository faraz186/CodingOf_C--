#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    switch (age)
    {
    case 50:
    printf("your age is %d",age);
    break;

    case 40:
    printf("your age is %d",age);
    break;

    case 26:
    printf("your age is %d",age);
    break;
    
    default:
    printf("out of range");
        break;
    }
}