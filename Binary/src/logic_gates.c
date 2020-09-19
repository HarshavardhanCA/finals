#include<stdio.h>

int not(int operand1)
{
    int result;
    result=!operand1;
    printf("\n%d\n",result);
    return result;
}

int and_two(int operand1,int operand2)
{
    int result;
    result=operand1 & operand2;
    printf("\n%d\n",result);
    return result;
}
int and_three(int operand1,int operand2,int operand3)
{
    int result;
    result=operand1 & operand2 & operand3;
    printf("\n%d\n",result);
    return result;
}
int or_two(int operand1,int operand2)
{
    int result;
    result=operand1 | operand2;
    printf("\n%d\n",result);
    return result;
}
int or_three(int operand1 ,int operand2 ,int operand3)
{
    int result;
    result=operand1 |operand2 |operand3;
    printf("\n%d\n",result);
    return result;
}

int nor_two(int operand1,int operand2)
{
    int result;
    result=!(operand1|operand2);
    printf("\n%d\n",result);
    return result;
}
int nor_three(int operand1,int operand2,int operand3)
{

int result;
    result=!(operand1|operand2|operand3);
    printf("\n%d\n",result);
    return result;
}



int nand_two(int operand1,int operand2)
{
    int result;
    result=!(operand1 & operand2);
    printf("\n%d\n",result);
    return result;
}
int nand_three(int operand1,int operand2,int operand3)
{

    int result;
    result=!(operand1 & operand2 & operand3);
    printf("\n%d\n",result);
    return result;

}
int xor_two(int operand1,int operand2)
{
    int result;
    result=((operand1 &(~ operand2))+((~operand1)& operand2));
    printf("\n%d\n",result);
    return result;
}
int xor_three(int operand1,int operand2,int operand3 )
{
    int result;
    result=((operand1 & operand2 & operand3) + ((~operand1)&(~operand2)&operand3) + ((~operand1)&operand2&(~operand3)) + (operand1&(~operand2)&(~operand3)));
    printf("\n%d\n",result);
    return result;
}
int xnor(int operand1,int operand2)
{
    int result;
    result=((operand1&operand2)+((!operand1)&(!operand2)));
    printf("\n%d\n",result);
    return result;
}
