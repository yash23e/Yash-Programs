#include<stdio.h>
int subtraction(int n1,int n2)
{
    int sub = 0;
    sub =n1-n2;
    return sub;
}
int main()
{
    int data1 = 0, data2 = 0;
    int result = 0;
    printf("Enter first nUmber :\n");
    scanf("%d",&data1);
    printf("Enter second number : \n");
    scanf("%d",&data2);
    result=subtraction(data1,data2);
    printf("subtraction is :%d",result);
    return 0;

}