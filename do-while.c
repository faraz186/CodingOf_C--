// #include<stdio.h>

// int main()
// {
//     int value = 0;

//     do{
//         printf("inside loop %d \n",value);
//         value++;
//     }
//     while (value>10);
//     printf("outside loop");
// }


// **************************Tasks**************************

#include<stdio.h>

int main()
{
    int outside=0;
    int inside=0;
    
    for(int outside = 0;outside<=5;outside++)
    {
        printf("\n outside %d \n",outside);

        printf("inside");

        while (inside<=10)
        {
            printf("%d",inside);
            inside++;
        }
        
    };

}