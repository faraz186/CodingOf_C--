// 1))

// #include<stdio.h>

// int main() 
// {
//   double first, second, temp;

//   printf("Enter first number: ");
//   scanf("%lf", &first);

//   printf("Enter second number: ");
//   scanf("%lf", &second);

//   temp = first;

//   first = second;

//   second = temp;

//   printf("\nAfter swapping, first number = %.2lf\n", first);

//   printf("After swapping, second number = %.2lf", second);

//   return 0;

// }


// ***********C Program to calculate Area of Equilatral triangle*******

// // 2))

// #include<stdio.h>
// #include<math.h>

// int main()
// {
//     int traingle_side;
//     float triangle_area;

//     printf("Enter the side of triangle: ");
//     scanf("%d",&traingle_side);

//     triangle_area = sqrt(3)/4 * traingle_side * traingle_side;

//     printf("Area of Equilteral Triangle is: %.2f",triangle_area);

//     return 0;
// }



// // 3))

// #include<stdio.h>
// #include<math.h>
// #define PI 3.14

// int main()
// {
//     int radius;
//     float area,circumference;

//     printf("Enter the Radius of Circle: ");
//     scanf("%d",&radius);

//     area = PI * radius * radius;

//     circumference = 2 * PI *radius;

//     printf("Area of Circle: %.3f \n",area);

//     printf("Circumference of Circle: %.3f \n",circumference);

//     return 0;
// }


// // 4))

// #include<stdio.h>

// void hello()
// {
//     printf("Hello World");
// }
// int main()
// {
//     hello();
    
//     return 0;
// }


// 5))


// #include<stdio.h>

// void table()
// {
//     int num,i;

//     printf("Enter integers: ");
//     scanf("%d",&num);

//     for(i = 0; i<11;i++)
//     {
//         printf("%d * %d = %d \n",num,i,num*i);
//     }
// }
// int main()
// {
//     table();
//     return 0;
// }


// // 6))

// #include<stdio.h>

// int even()
// {
//     int num;

//     printf("Enter any number: ");
//     scanf("%d",&num);

//     if(num % 2 == 0){
//         printf("Even Number");
//     }
//     else{
//         printf("Odd Number");
//     }

// }

// int main()
// { 
//     even();
//     return 0;
// }


// 7))

// #include<stdio.h>

// int largest_num()
// {
//     int a,b,c;

//     printf("Enter three Integers: ");
//     scanf("%d %d %d",&a,&b,&c); 

//     if(a>b && a>c)
//     {
//         printf("%d is largest",a);
//     }
//     else if(b>a && b>c)
//     {
//         printf("%d is largest",b);
//     }
//     else if(c>a && c>b)
//     {
//         printf("%d is largest",c);
//     }
//     else 
//     {
//         printf("%d %d %d all are equal",a,b,c);
//     }

// }

// int main()
// { 
//     largest_num();
//     return 0;
// }


// // 8))

// #include<stdio.h>

// int Marksheet()
// {
//     int chemistry,english,computer,maths,physics,Total_Marks;

//     float Obtained_marks,percentage;

//     printf("Enter Physics Marks: ");
//     scanf("%d",&physics);

//     printf("Enter English Marks: ");
//     scanf("%d",&english);

//     printf("Enter Computer Marks: ");
//     scanf("%d",&computer);

//     printf("Enter Maths Marks: ");
//     scanf("%d",&maths);

//     printf("Enter Chemistry Marks: ");
//     scanf("%d",&chemistry);

//     Total_Marks = physics + english + computer + maths + chemistry;

//     Obtained_marks = physics + english + computer + maths + chemistry;

//     percentage = Obtained_marks / 500 * 100;

//     printf("Your Total Marks is: %d \n",Total_Marks);

//     printf("Your percentage is: %.2f",percentage);

// }

// int main()
// { 
//     Marksheet();
//     return 0;
// }