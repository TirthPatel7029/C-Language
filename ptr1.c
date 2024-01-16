#include<stdio.h>

// wap to swap two value using pointer with udf.
// wap to get and print and store value in the array of pointer.

void sum(int *a, int *b)
{
    *a = *a + *b;
    printf("udf sum is %d\n",*a);
}
int main()
{
    int x[5] = {10,20,30,40,50};
    int *a[5];
    char name[10] = "Akhil";
    char *n[10];
    for(int i=0; i<10; i++)
    {
        n[i] = &name[i];
    }

    for(int i=0; i<10; i++)
    {
        printf("%u\n",n[i]);
    }

    // for(int i=0; i<5; i++)
    // {
    //     a[i] = &x[i];
    // }

    // for(int i=0; i<5; i++)
    // {
    //     printf("%u ",*a[i]);
    // }

    // int a = 10;
    // int b = 20;
    // sum(&a,&b);
    // printf("a = %d",a);//30
}


// // variable : 
//     // pointer : we can store address of the value/variable.
//     // pointer : hardware : c,c++,
//     int a = 19; // simple variable
//     int b = 20;
//     double c;
//     int *ptr = &a; //declaration
//     double *d = &c;
//     int *ptrForB = &b;
//     int **p = &ptr;

//     printf("%u\n",*ptrForB);
//     printf("%u",**p);//*p value at pointer