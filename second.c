// ************************C Practice Programs*************************** 

// 1))

#include<stdio.h>

int main()
{
    printf("Welcome to C language");
}

// 2))

#include<stdio.h> 
#include<conio.h>

int main()  
{     
    int l =5, b=10, area, perimeter;  
    printf("Length & Breadth of the rectangle is: %d & %d",l, b);

    area = l * b; // calculate area of rectangle.

    perimeter = 2 * (l + b); // calculate perimeter of rectangle.

    printf("\n Area of Rectangle is: %d", area);

    printf("\n Perimeter of Rectangle is: %d", perimeter);    
}   


// 3))

#include<stdio.h> 

int main()  
{     
    int l, b, area, perimeter;

    printf("Enter the length of the rectangle");  
    scanf("%d", l);        // take input from the user  

    printf("Enter the breadth of the rectangle");  
    scanf("%d", b);   

    area = l * b;                     // calculate the area of rectangle.
      
    perimeter = 2 * (l + b);         // calculate the perimeter of rectangle.

    printf("\n Area of Rectangle is: %d", area);

    printf("\n Perimeter of Rectangle is: %d", perimeter);    
}  


// 4))

#include<stdio.h>

int main(){
    printf("Hello World\n");
    printf("I am Chiti");
    return 0;
}


// 5))

#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter first Number: ");
    scanf("%d",&a);

    printf("Enter Second Number: ");
    scanf("%d",&b);

    int result = a + b;

    printf("The result is: %d",result);

}


// 6))

#include<stdio.h>

int main()
{
    int name[20],age,salary,height;

    printf("Enter your name: ");
    scanf("%s",&name);

    printf("Enter your age: ");
    scanf("%d",&age);

    printf("Enter your Height: ");
    scanf("%.2f",&height);

    printf("Enter your Salary: ");
    scanf("%d",&salary);
    
    printf("your Name: %s \n",name);
    printf("your age: %d \n",age);
    printf("your height: %.2f \n",height);
    printf("your salary: %d \n",salary);

}



// 7))

#include<stdio.h>
#include<conio.h>

int main()
{
    int physics,computer,maths;

    printf("Enter Physics marks: ");
    scanf("%d",&physics);

    printf("Enter Computer marks: ");
    scanf("%d",&computer);

    printf("Enter Maths marks: ");
    scanf("%d",&maths);

    int Obtained = physics + maths + computer;

    int percentage = Obtained / 300.00 * 100;

    printf("Your Total Marks Obtained: %d \n",Obtained);

    printf("Your Percentage is: %d \n",percentage);


}


// 8))


#include <stdio.h>
int main ()
{
    int salary[5]={200,300,100,50,500};
    //index         0   1   2   3  4
    printf("Salary of 0 index is %d \n",salary[0]);
    printf("Salary of 1 index is %d \n",salary[1]);
    printf("Salary of 4 index is %d \n",salary[4]);

    //Garbage

    printf("Salary of 15 index is %d \n",salary[15]);
}


// ****************C Program to Find Size of Data Types******************

// 9))

#include <stdio.h>
int main ()
{
    printf("Size of short is %ld bytes\n",sizeof(short));
    printf("Size of int is %ld bytes\n",sizeof(int));
    printf("Size of long is %ld bytes\n",sizeof(long));

    printf("Size of float is %ld bytes\n",sizeof(float));
    printf("Size of double is %ld bytes\n",sizeof(double));
    printf("Size of long double is %ld bytes\n",sizeof(long double));

    printf("Size of char is %ld bytes\n",sizeof(char));
    printf("Size of void is %ld bytes\n",sizeof(void));
    return 0;
}


// ***********C Program to Compute Addition Subtraction and Multiplication*************

// // 10))

#include <stdio.h>
#include<conio.h>
int main ()
{
    int num1,num2,sum,sub,multi;

    printf("Enter Two integers: ");
    scanf("%d %d",&num1,&num2);

    sum = num1 + num2;

    sub = num1 - num2;

    multi = num1 * num2;

    int div = num1 / num2;

    printf("The sum of two integers is: %d\n",sum);
    printf("The divide of two integers is: %d\n",div);
    printf("The subtract of two integers is: %d\n",sub);
    printf("The multiply of two integers is: %d\n",multi);

    return 0;
}



// // 11))

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
    float a,b;

    printf("ENTER TWO NUMBERS: ");
    scanf("%f %f",&a,&b);

    printf("Product = %.2f\n",a*b);
    printf("Remainder = %.2f\n",fmod(a,b));
    return 0;
}


// **********************Calculate Area of Circle using C*******************

// // 12))

#include<stdio.h>
#include<conio.h>

// #define PI 3.14

int main ()
{
    float radius,area;

    printf("ENTER RADIUS OF CIRCLE: ");
    scanf("%f",&radius);

    // area = PI * radius * radius;

    area = 3.14 * radius * radius;

    printf("THE AREA OF CIRCLE IS: %.2f cm\n ",area);
    return 0;

}


// ******************C program to find the area of a Rectangle****************
// // 13))

#include<stdio.h>
#include<conio.h>

int main ()
{
    float length,width,area;

    printf("ENTER THE LENGTH AND WIDTH OF RECTANGLE: ");
    scanf("%f %f",&length,&width);

    area = length * width;

    printf("AREA OF RECTANGLE IS: %.2f cm \n",area);
    return 0;
    
}


// ******************Area of a triangle having three sides****************

// // 14))

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
    int a,b,c,area;

    printf("ENTER VALUE OF THREE SIDES OF TRIANGLE: ");
    scanf("%d %d %d",&a,&b,&c);

    area = (a+b+c)/ 2;

    printf("Area of Triangle is: %d \n",area);
    return 0;
    
}



// 15))

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main ()
{
    int number;
    float result;

    printf("Enter an integer number: ");
    scanf("%d",&number);

    result = sqrt(number);

    printf("Square root is: %.2f \n",result);
    return 0;
    
}