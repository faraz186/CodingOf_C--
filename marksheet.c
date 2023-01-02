// 1))

#include<stdio.h>

int main()
{
    int physics,english;

    printf("******Marksheet Program******** \n");

    printf("Enter your English Marks: ");
    scanf("%d",&english);

    printf("Enter your physics Marks: ");
    scanf("%d",&physics);

    int Obtained = english + physics;

    printf("\n");

    float percentage = Obtained / 150.0 * 100;

    printf("Your Percentage is: %.2f \n",percentage);

    printf("Your Obtained marks is: %d",Obtained);

}


// 2))

#include<stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    int result = number * number;

    printf("Result of square is: %d",result);
    
}


// 3))

#include<stdio.h>

int main()
{
    int num1 = 33;
    int num2 = 4;

    printf("%d divided by %d is %d \n",num1,num2,num1/num2);
    printf("%d divided by %d is %d \n",num1,num2,num1%num2);

}


// 4))


#include<stdio.h>

int main()
{
    int num1 = 33;
    int num2 = 4;

    printf("\n Value of num1 before %d \n",num1);
    num1 = ++num1;
    printf("\n Value of num1 after %d \n",num1);

}


// 5))

#include<stdio.h>

int main()
{
    int age = 21;

    if(age>30){
        printf("SORRY YOU ARE OLD!! %d",age);
    }
    else{
        printf("HURRAH YOU ARE YOUNG!! %d",age);
    }
}


// 6))

#include<stdio.h>

int main()
{
    
    int salary[3]={200,300,500};

    printf("Salary of 2 index is: %d \n",salary[2]);
    printf("Salary of 0 index is: %d \n",salary[0]);
    printf("Salary of 15 index is: %d \n",salary[15]);

}


// 7))


#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    srand(time(0));
    int randomNum = rand();
    int remainder = randomNum%6;
    remainder = remainder+1;

    printf("********Rolling Dice**********");
    printf("the lucky number is: %d",remainder);
}







