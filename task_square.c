#include<stdio.h>

int main()
{
    int rows,columns;

    printf("Enter rows: ");
    scanf("%d",&rows);

    printf("Enter columns: ");
    scanf("%d",&columns);

    for(int i = 1; i <= rows;i++){
        for(int j = 1; j<=columns; j++){
            printf("*");
        }
        printf("\n");

    }
}