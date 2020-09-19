#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
enum gates{ NOT=1, AND, OR, NAND, NOR, XOR, XNOR, EXIT };
int main()
{
    int no_input,choice,operand1,operand2,operand3,result;
    printf("\n Basic Logic Gates Operations \n");
    while(1)
    {
    printf("\n Select Choices \n");
    printf("\n 1. NOT \n 2. AND \n 3. OR \n 4. NAND \n 5. NOR \n 6. XOR \n 7. XNOR \n 8.EXIT \n");
    scanf("%d", &choice);
    switch(choice)
    {
    case NOT:
             printf("\n Enter the value \n");
             scanf("%d",&operand1);
             result=not(operand1);
             break;
    case AND:
             printf("\n 1.Two input AND\n 2.Three input AND\n");
             scanf("%d",&no_input);
             if(no_input==2)
             {
               int operand1,operand2;
               printf("\nEnter the values \n");
               scanf("%d %d",&operand1,&operand2);
               result=and_two(operand1,operand2);
             }
             else if(no_input==3)
             {
               int operand1,operand2,operand3;
               printf("\n Enter the values \n");
               scanf("%d %d %d",&operand1,&operand2,&operand3);
               result=and_three(operand1,operand2,operand3);
             }
             else
             {
               printf("\n Invalid Input\n");
             }
             break;
    case OR:
            printf("\n 1.Two input OR\n 2.Three input OR\n");
            scanf("%d",&no_input);
            if(no_input==2)
            {
                int operand1,operand2;
                printf("\n Enter the values \n");
                scanf("%d %d",&operand1,&operand2);
                result=or_two(operand1,operand2);
            }
            else if(no_input==3)
            {
                int operand1,operand2,operand3;
                printf("\n Enter the values \n");
                scanf("%d %d %d",&operand1,&operand2,&operand3);
                result=or_three(operand1,operand2,operand3);
            }
            else
            {
                 printf("\n Invalid Input\n");
            }
            break;
    case NAND:
            printf("\n 1.Two input NAND\n 2.Three input NAND\n");
            scanf("%d",&no_input);
            if(no_input==2)
            {
                int operand1,operand2;
                printf("\n Enter the values \n");
                scanf("%d %d",&operand1,&operand2);
                result=nand_two(operand1,operand2);
            }
            else if(no_input==3)
            {
                int operand1,operand2,operand3;
                printf("\n Enter the values \n");
                scanf("%d %d %d",&operand1,&operand2,&operand3);
                result=nand_three(operand1,operand2,operand3);
            }
            else
            {
                printf("\ninvalid input\n");
            }
            break;
    case NOR:
            printf("\n 1.Two input NOR\n 2.Three input NOR\n");
            scanf("%d",&no_input);
            if(no_input==2)
            {
                int operand1,operand2;
                printf("\nEnter the values\n");
                scanf("%d %d",&operand1,&operand2);
                result=nor_two(operand1,operand2);
            }
            else if(no_input==3)
            {
                int operand1,operand2,operand3;
                printf("\nEnter the values\n");
                scanf("%d %d %d",&operand1,&operand2,&operand3);
                result=nor_three(operand1,operand2,operand3);
            }
            else
            {
                printf("\ninvalid input\n");
            }
            break;
    case XOR:
            printf("\n 1.Two input XOR\n 2.Three input XOR\n");
            scanf("%d",&no_input);
            if(no_input==2)
            {
                int operand1,operand2;
                printf("\nEnter the values\n");
                scanf("%d %d",&operand1,&operand2);
                result=xor_two(operand1,operand2);
            }
            else if(no_input==3)
            {
                int operand1,operand2,operand3;
                printf("\nEnter the values\n");
                scanf("%d %d %d",&operand1,&operand2,&operand3);
                result=xor_three(operand1,operand2,operand3);
            }
            else
            {
                printf("\n Invalid Input\n");
            }
            break;
    case XNOR:
            printf("\nEnter the values\n");
            scanf("%d %d",&operand1,&operand2);
            result=xnor(operand1,operand2);
            break;
    case EXIT:
              exit(0);
              break;
    default : system("cls");
                printf("\n You have entered Invalid Choice \n");
                printf("\n Please Enter Valid Choice \n");
        }
    }
    test_main();
}
