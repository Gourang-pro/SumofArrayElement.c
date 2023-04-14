#include<stdio.h>
#include<conio.h>

int main()
{
    int i, size, sum=0;
    printf("c program to find the sum of array element\n");
    printf("enter the number of element you want in array\n");
    scanf("%d",&size);
    int arr[size];
    for ( i = 0; i < size; i++)
    {
        printf("please give value for index %d : ",i);
        scanf("%d",&arr[i]);

    }
    for ( i = 0; i < size; i++)
        sum=sum+arr[i];
        printf("sum of array element=%d",sum);

    
    return 0;
}