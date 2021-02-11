#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include"trans.h"
#include"trans.c"
int main()
{
    int n,m;
    //---------------------------------------Row and Column size------------------------------------//
    printf("Enter the row size: ");
    scanf("%d",&n);
    printf("Enter the column size: ");
    scanf("%d",&m);
    double *arr=malloc(n*m*sizeof(double));
    //---------------------------------------Input Matrix-----------------------------------------//
    printf("Enter the matrix:\n");
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    scanf("%lf",(arr+i*m+j));
    //---------------------------------------Original Matrix-----------------------------------------//
    printf("\nOriginal Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        printf("%.2lf ",*(arr+i*m+j));
        printf("\n");
    }
    transpose(arr,n,m);
    //---------------------------------------Transposed Matrix---------------------------------------//
    printf("\nTransposed Matrix:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        printf("%.2lf ",*(arr+i*n+j));
        printf("\n");
    }
    return 0;
}