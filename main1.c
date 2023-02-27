#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Function declarations.
int mass();
int length();
//int area();
int data();
int temperature();
int time();
//int volume();
//int speed();

//Temperature functions
float convertToFahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

int main()
{
    //Variable declaration.
    int choice=0;

    //UI Design.
    printf("\n");
    printf("************************************\n");
    printf("***  WELCOME TO UNIT CONVERTER  ****\n");
    printf("************************************\n\n");

    //Main program loop.
    while(1)
    {
        printf("\nChoose an option below to proceed.\n");
        printf("1. Mass\n2. Length\n3. Area\n4. Data\n5. Temperature\n6. Time\n7. Volume\n8. Speed\n\t9. Exit\n\n--> ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                mass();
                break;

            case 2:
                length();
                break;

            //case 3:
                //area();
                //break;

            case 4:
                data();
                break;

            case 5:
                temperature();
                break;

            case 6:
                time();
                break;

            //case 7:
                //volume();
                //break;

            //case 8:
                //speed();
                //break;

            case 9:
                printf("\nExiting program. Thank you for using!\n\n");
                return 0;

            default:
                printf("\nInvalid option selected. Try again.\n");
                break;
        }
    }

    return 0;
}

//Mass conversion function.
int mass()
{
    //Variable declarations.

    int choice_in=0, choice_out=0;
    int count=0;
    char ch;
    float user_in;
    float grams;
    float result;

    //Variable declarations end.

    //UI Design.
    printf("***************************\n");
    printf("***   MASS CONVERSION   ***\n");
    printf("***************************\n\n");

    Options:   //Checkpoint for jump statement.
    printf("Choose input mass unit option.\n");
    printf("1. Milligrams \t 2. Grams\n3. Kilograms \t 4. Tons\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_in);//Taking user input choice.
    if(choice_in>5){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }
    else if(choice_in==5)
    return 0;

    printf("\nChoose output mass unit option.\n");//Taking user output choice.
    printf("1. Milligrams \t 2. Grams\n3. Kilograms \t 4. Tons\n\t5. Go back\n--> ");
    scanf("%d", &choice_out);

/************************INPUT PROCESSING************************/
    if(choice_in==1)
    {
        printf("\nEnter value in milligrams.\n--> ");
        scanf("%f", &user_in);
        grams=user_in/1000;
    }
    else if(choice_in==2)
    {
        printf("\nEnter value in grams.\n--> ");
        scanf("%f", &user_in);
        grams=user_in;
    }
    else if(choice_in==3)
    {
        printf("\nEnter value in kilograms.\n--> ");
        scanf("%f", &user_in);
        grams=user_in*1000;
    }
    else if(choice_in==4)
    {
        printf("\nEnter value in tons.\n--> ");
        scanf("%f", &user_in);
        grams=user_in*1000000;
    }
    
/**********************OUTPUT PROCESSING*********************/
    if(choice_out==1)
    {
        printf("\nValue in milligrams.\n");
        result=grams*1000;
        printf("--> %f milligrams\n", result);
    }
    else if(choice_out==2)
    {
        printf("\nValue in grams.\n");
        result=grams;
        printf("--> %f grams\n", result);
    }
    else if(choice_out==3)
    {
        printf("\nValue in kilograms.\n");
        result=grams/1000;
        printf("--> %f kilograms\n", result);
    }
    else if(choice_out==4)
    {
        printf("\nValue in tons.\n");
        result=grams/1000000;
        printf("--> %f tons\n", result);
    }

    return 1;
}

//Mass conversion function.
int length()
{
    // Variable declarations
    int choice_in = 0, choice_out = 0;
    char ch;
    float user_in, meters, result;
    
    // UI Design
    printf("***************************\n");
    printf("*** LENGTH CONVERSION  ***\n");
    printf("***************************\n\n");
    
    Options: // Checkpoint for jump statement
    printf("Choose input length unit option.\n");
    printf("1. Millimeters \t 2. Centimeters\n3. Meters \t 4. Kilometers\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_in);
    if(choice_in > 5)
    {
        printf("Invalid choice. Try again? y/n\n-->");
        scanf(" %c", &ch);
        if(ch == 'y')
        {
            goto Options;
        }
        else
        {
            return 0;
        }
    }
    else if(choice_in == 5)
    {
        return 0;
    }
    
    printf("\nChoose output length unit option.\n");
    printf("1. Millimeters \t 2. Centimeters\n3. Meters \t 4. Kilometers\n\t5. Go back\n--> ");
    scanf("%d", &choice_out);
    
    /********************** INPUT PROCESSING **********************/
    if(choice_in == 1)
    {
        printf("\nEnter value in millimeters.\n--> ");
        scanf("%f", &user_in);
        meters = user_in / 1000;
    }
    else if(choice_in == 2)
    {
        printf("\nEnter value in centimeters.\n--> ");
        scanf("%f", &user_in);
        meters = user_in / 100;
    }
    else if(choice_in == 3)
    {
        printf("\nEnter value in meters.\n--> ");
        scanf("%f", &user_in);
        meters = user_in;
    }
    else if(choice_in == 4)
    {
        printf("\nEnter value in kilometers.\n--> ");
        scanf("%f", &user_in);
        meters = user_in * 1000;
    }
    
    /********************* OUTPUT PROCESSING *********************/
    if(choice_out == 1)
    {
        printf("\nValue in millimeters.\n");
        result = meters * 1000;
        printf("--> %f millimeters\n", result);
    }
    else if(choice_out == 2)
    {
        printf("\nValue in centimeters.\n");
        result = meters * 100;
        printf("--> %f centimeters\n", result);
    }
    else if(choice_out == 3)
    {
        printf("\nValue in meters.\n");
        result = meters;
        printf("--> %f meters\n", result);
    }
    else if(choice_out == 4)
    {
        printf("\nValue in kilometers.\n");
        result = meters / 1000;
        printf("--> %f kilometers\n", result);
    }
    
    return 1;
}

//Area Conversion function.

//Data Conversion function.
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
        bits=user_in*8589934592UL;
    }
    else if(choice_in==6)
    {
        printf("\nEnter value in Terabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*8796093022208UL;
    }
    else if(choice_in==7)
    {
        printf("\nEnter value in Petabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*9007199254740992UL;
    }
    else if(choice_in==8)
    {
        printf("\nEnter value in Exabytes.\n--> ");
        scanf("%f", &user_in);
        bits=user_in*9223372036854775808UL;
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
        result=bits/8589934592UL;
        printf("--> %f Gigabytes\n", result);
    }
    else if(choice_out==6)
    {
        printf("\nValue in Terabytes.\n");
        result=bits/8796093022208UL;
        printf("--> %f Terabytes\n", result);
    }
    else if(choice_out==7)
    {
        printf("\nValue in Petabytes.\n");
        result=bits/9007199254740992UL;
        printf("--> %f Petabytes\n", result);
    }
    else if(choice_out==8)
    {
        printf("\nValue in Exabytes.\n");
        result=bits/9223372036854775808UL;
        printf("--> %f Exabytes\n", result);
    }

    return 1;
}

//Temperature Conversion function.
int temperature() {
    int choice;
    float temperature, result;
    
    printf("***************************\n");
    printf("*** TEMPERATURE CONVERTER***\n");
    printf("***************************\n\n");
    
    printf("Choose conversion option:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Go back\n");
    printf("\n--> ");
    scanf("%d", &choice);
    
    if(choice == 3) {
        return 0;
    }
    
    printf("\nEnter temperature value: ");
    scanf("%f", &temperature);
    
    switch(choice) {
        case 1:
            result = convertToFahrenheit(temperature);
            printf("%.2f Celsius = %.2f Fahrenheit\n", temperature, result);
            break;
        case 2:
            result = convertToCelsius(temperature);
            printf("%.2f Fahrenheit = %.2f Celsius\n", temperature, result);
            break;
        default:
            printf("Invalid choice. Try again.\n");
            break;
    }
    
    return 1;
}

//Time Conversion finction.
int time() {
    int choice_in = 0, choice_out = 0;
    char ch;
    float user_in, seconds, result;

    printf("***************************\n");
    printf("***   TIME CONVERSION   ***\n");
    printf("***************************\n\n");

Options:
    printf("Choose input time unit option.\n");
    printf("1. Seconds \t 2. Minutes\n3. Hours \t 4. Days\n\t5. Go back\n\n--> ");
    scanf("%d", &choice_in);

    if (choice_in > 5) {
        printf("Invalid choice. Try again?  y/n\n-->");
        scanf(" %c", &ch);
        if (ch == 'y')
            goto Options;
        else
            return 0;
    } else if (choice_in == 5)
        return 0;

    printf("\nChoose output time unit option.\n");
    printf("1. Seconds \t 2. Minutes\n3. Hours \t 4. Days\n\t5. Go back\n--> ");
    scanf("%d", &choice_out);

    if (choice_out > 5) {
        printf("Invalid choice. Try again?  y/n\n-->");
        scanf(" %c", &ch);
        if (ch == 'y')
            goto Options;
        else
            return 0;
    } else if (choice_out == 5)
        return 0;

    printf("\nEnter value in %s.\n--> ", choice_in == 1 ? "seconds" : choice_in == 2 ? "minutes" : choice_in == 3 ? "hours" : "days");
    scanf("%f", &user_in);

    if (choice_in == 1)
        seconds = user_in;
    else if (choice_in == 2)
        seconds = user_in * 60;
    else if (choice_in == 3)
        seconds = user_in * 3600;
    else
        seconds = user_in * 86400;

    if (choice_out == 1) {
        printf("\nValue in seconds.\n");
        result = seconds;
        printf("--> %f seconds\n", result);
    } else if (choice_out == 2) {
        printf("\nValue in minutes.\n");
        result = seconds / 60;
        printf("--> %f minutes\n", result);
    } else if (choice_out == 3) {
        printf("\nValue in hours.\n");
        result = seconds / 3600;
        printf("--> %f hours\n", result);
    } else {
        printf("\nValue in days.\n");
        result = seconds / 86400;
        printf("--> %f days\n", result);
    }

    return 1;
}

