#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int data()
{
    //Variable declarations.

    int choice_in=0, choice_out=0;
    int count=0;
    char ch;
    float user_in;
    float bits;
    float result;

    //Variable declarations end.

    //UI Design.
    printf("***************************\n");
    printf("***   DATA CONVERSION   ***\n");
    printf("***************************\n\n");

    Options:   //Checkpoint for jump statement.
    printf("Choose input data unit option.\n");
    printf("1. Bits \t 2. Bytes\n3. Kilobytes \t 4. Megabytes\n5. Gigabytes \t 6. Terabytes\n7. Petabytes \t 8. Exabytes\n\t9. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.
    if(choice_in>9){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }
    else if(choice_in==9)
    return 0;

    printf("\nChoose output data unit option.\n");//Taking user output choice.
    printf("1. Bits \t 2. Bytes\n3. Kilobytes \t 4. Megabytes\n5. Gigabytes \t 6. Terabytes\n7. Petabytes \t 8. Exabytes\n\t9. Go back\n--> ");
    scanf("%d", &choice_out);

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in bits.\n--> ");
        scanf("%f", &user_in);
        bits=user_in;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in Bytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in Kilobytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8192;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in Megabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8388608;
    }
    else if(choice_in==5)
    {
        printf("\nEnter value in Gigabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8589934592;
    }
    else if(choice_in==6)
    {
        printf("\nEnter value in Terabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8796093022208;
    }
    else if(choice_in==7)
    {
        printf("\nEnter value in Petabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*9007199254740992;
    }
    else if(choice_in==8)
    {
        printf("\nEnter value in Exabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*9223372036854775808ull;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in bits.\n");
        result=bits;
        printf("--> %f bits\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in Bytes.\n");
        result=bits/8;
        printf("--> %f Bytes\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in Kilobytes.\n");
        result=bits/8192;
        printf("--> %f Kilobytes\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in Megabytes.\n");
        result=bits/8388608;
        printf("--> %f Megabytes\n", result);
    }
    else if(choice_out==5)
    {
        printf("\nValue in Gigabytes.\n");
        result=bits/8589934592;
        printf("--> %f Gigabytes\n", result);
    }
    else if(choice_out==6)
    {
        printf("\nValue in Terabytes.\n");
        result=bits/8796093022208;
        printf("--> %f Terabytes\n", result);
    }
    else if(choice_out==7)
    {
        printf("\nValue in Petabytes.\n");
        result=bits/9007199254740992;
        printf("--> %f Petabytes\n", result);
    }
    else if(choice_out==8)
    {
        printf("\nValue in Exabytes.\n");
        result=bits/9223372036854775808ull;
        printf("--> %f Exabytes\n", result);
    }

    return 1;
}

int main()
{
    if(!data())
    printf("Unit converter.\n");
}