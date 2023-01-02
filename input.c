#include<stdio.h>

int main()  
{     
    int l, b, area, perimeter;

    printf("Enter the length of the rectangle");  
    scanf("%d", &l);                   // take input from the user  

    printf("Enter the breadth of the rectangle");  
    scanf("%d", &b);   

    area = l * b;                     // calculate the area of rectangle.
      
    perimeter = 2 * (l + b);         // calculate the perimeter of rectangle.

    printf("\n Area of Rectangle is: %d", area);

    printf("\n Perimeter of Rectangle is: %d", perimeter);    
} 