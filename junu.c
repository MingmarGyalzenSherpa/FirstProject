#include<stdio.h>

int main()
{
    int choice,min,sec,count=0,charge=0;
    printf("Available Option!!");
    printf("\n1. Peak ( Connect fee: 40c || Call Charge per 30 seconds : 80c ");
    printf("\n2. OffPeak ( Connect fee: 20c || Call Charge per 30 seconds : 40c");
    printf("\nEnter your Choice:");
    scanf("%d",&choice);
    printf("Enter call duration..");
    printf("\nEnter minute:");
    scanf("%d",&min);
    printf("Enter second:");
    scanf("%d",&sec);
    if(sec<30)
    {
            sec=30;
        }
    else if(sec>30 && sec<60)
    {
            min++;
            sec=0;
        }
    sec+=min*60;
    count=sec/30;
    if(choice==1)
    {
        charge=(count*80)+40;
    }
    else if(choice==2)
    {
        charge=(count*40)+20;
    }
    else{
        printf("Error Choice!!");
    }
    printf("\nYour total cost is: %d c",charge);
    return 0;
}
