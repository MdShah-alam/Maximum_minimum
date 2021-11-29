#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers are : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3)
    {
        printf("Maximum number is : %d\n",num1);
        if(num2>num3)
            printf("Minimum number is : %d\n",num3);
        else
            printf("Minimum number is :%d\n",num2);

    }

    else if(num2>num3 && num2>num1)
    {
        printf("Maximum number is : %d\n",num2);
        if(num3>num1)
            printf("Minimum number is : %d\n",num1);
        else
            printf("Minimum number is :%d\n",num3);
    }
    else
    {
        printf("Maximum number is : %d\n",num3);
        if(num1>num2)
            printf("Minimum number is : %d\n",num2);
        else
            printf("Minimum number is :%d\n",num1);
    }

    getch();
}
