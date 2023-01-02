// #include <stdio.h>

// int main()
// {
//     int unit;
//     float amt, total_amt, sur_charge;

//     printf("Enter total units consumed: ");

//     scanf("%d", &unit);

//     if(unit <= 50)
//     {
//         amt = unit * 0.50;
//     }
//     else if(unit <= 150)
//     {
//         amt = 25 + ((unit-50) * 0.75);
//     }
//     else if(unit <= 250)
//     {
//         amt = 100 + ((unit-150) * 1.20);
//     }
//     else
//     {
//         amt = 220 + ((unit-250) * 1.50);
//     }

//     sur_charge = amt * 0.20;
//     total_amt  = amt + sur_charge;

//     printf("Electricity Bill = Rs. %.2f", total_amt);

//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int unit;
//     float amt, total_amt, sur_charge;

//     printf("Enter total units consumed: ");

//     scanf("%d", &unit);

//     if(unit <= 50)
//     {
//         amt = unit * 0.50;
//     }
//     else if(unit <= 150)
//     {
//         amt = 25 + ((unit-50) * 0.75);
//     }
//     else if(unit <= 250)
//     {
//         amt = 100 + ((unit-150) * 1.20);
//     }
//     else
//     {
//         amt = 220 + ((unit-250) * 1.50);
//     }

//     sur_charge = amt * 0.20;
//     total_amt  = amt + sur_charge;

//     printf("Electricity Bill = Rs. %.2f", total_amt);

//     return 0;
// }


// ************************Functions*************************

// #include<stdio.h>
// #include<conio.h>

// int add(int,int);

// int main()
// {
//     int result;

//     result = add(10,20);

//     printf("The result is %d",result);

//     return 0;
// }

// int add(int a,int b)
// {
//     int sum = a + b;

//     return sum;

// }


// *********************Program Simple Calculator Using Switch Case************************


// #include <stdio.h>
// #include<conio.h>

// int main()
// {
//     char ch;
//     int a, b, result;

//     printf("\t\t********** Welcome User What you want!!! *********\n\n");

//     printf("Enter an Operator (+, -, *, /): ");
//     scanf("%c", &ch);

//     printf("\n");

//     printf("Enter First Number: ");
//     scanf("%d", &a);

//     printf("\n");
    
//     printf("Enter Second Number: ");
//     scanf("%d", &b);
    
//     switch(ch)
//     {
//         case '+':
//             result = a + b;
//             break;

//         case '-':
//             result = a - b;
//             break;

//         case '*':
//             result = a * b;
//             break;

//         case '/':
//             result = a / b;
//             break;
//     }

//     printf("\n");
//     printf("\t\t\tResult = %d", result);

//     return 0;
// }


// *********************SIMPLE CALCULATOR USING FUNCTION******************

#include <stdio.h>
#include<conio.h>

int add()
{
    int a,b,result;

    printf("********Sum of Two Numbers******** \n");

    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);
    
    result = a + b;

    return result;
    
}

int sub()
{
    int a,b,result;

    printf("********Subtract of Two Numbers******** \n");

    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);

    result = a - b;

    return result;

}

int multi()
{
    int a,b,result;

    printf("********Multiplication of Two Numbers******** \n");

    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);
    
    result = a * b;

    return result;
    
}
int div()
{
    int a,b,result;

    printf("********Division of Two Numbers******** \n");

    printf("ENTER FIRST NUMBER: ");
    scanf("%d",&a);

    printf("ENTER SECOND NUMBER: ");
    scanf("%d",&b);
    
    result = a / b;

    return result;
    
}

int main()
{
    int result1 = add();
    int result2 = sub();
    int result3 = multi();
    int result4 = div();

    printf("\t\t **************RESULTS*************** \n");

    printf("Addition of two number is: %d",result1);
    printf("\n");

    printf("Subtract of two number is: %d",result2);
    printf("\n");

    printf("Multiplication of two number is: %d",result3);
    printf("\n");

    printf("Division of two number is: %d",result4);

    return 0;
}