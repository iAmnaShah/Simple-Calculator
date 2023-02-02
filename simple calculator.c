#include<stdio.h>
int num1, num2, choice;
void add();
void subtract();
void multiply();
void divide();
void mod();
void main()
{

    printf(" Enter two numbers:");
    scanf("%d %d",&num1, &num2);
    printf(" Press 1 to add:\n");
    printf(" Press 2 to subtract:\n");
    printf(" Press 3 to multiply:\n");
    printf(" Press 4 to divide:\n");
    printf(" Press 5 to mod\n");
    printf(" Enter choice[1-5]:\n");
    scanf("%d",&choice);
    if(choice==1)
    add();
    else if(choice==2)
    subtract();
    else if(choice==3)
    multiply();
    else if(choice==4)
    divide();
    else if(choice==5)
    mod();
    else
    printf("Invalid choice");
    return 0;
}
void add()
{
    int add;
    add = num1 + num2;
    printf("%d",add);
}
void subtract()
{
    int subtract;
    subtract = num1 - num2;
    printf("%d", subtract);
}
void multiply()
{
    int multiply;
    multiply = num1 * num2;
    printf("%d",multiply);
}
void divide()
{
    int division;
    division = num1 / num2;
    printf("%d",divide);
}
void mod()
{
    int mod;
    mod = num1 % num2;
    printf("%d",mod);
}

