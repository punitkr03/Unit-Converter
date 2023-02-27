#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int data()
{
    int choice=0;
    printf("***************************\n");
    printf("***   DATA CONVERSION   ***\n");
    printf("***************************\n\n");
    int count=0;
    char ch;
    Options:
    printf("Choose input data unit option.\n");
    printf("1. Bits \t 2. Bytes\n3. Kilobytes \t 4. Megabytes\n5. Gigabytes \t 6. Terabytes\n7. Petabytes \t 8. Exabytes\n\t9. Go back\n\n--> ");
    scanf("%d", &choice);
    if(choice>9){
    printf("Invalid choice. Try again?  y/n\n-->");
    scanf(" %c", &ch);
    if(ch=='y')
    goto Options;
    else
    return 0;
    }

    printf("Choose input data unit option.\n");
    printf("1. Bits \t\t 2. Bytes\n3. Kilobytes \t 4. Megabytes\n5. Gigabytes \t 6. Terabytes\n7. Petabytes \t 8. Exabytes\n\t\t9. Go back\n");
    // switch (choice)
    // {
    // case 1:
        
    //     break;
    
    // default:
    // printf("Enter a valid choice.\n");
    //     break;
    // }
}

int main()
{
    if(!data())
    printf("Unit converter.\n");
}