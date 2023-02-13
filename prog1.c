#include<stdio.h>
int main()
{
    int income;
    printf("Enter your annual income in LPA: \n");
    scanf("%d", &income);
 
    if(income<3)
    {
        printf("you no need to pay tax\n");
    }
    else if((income>=3) && (income<6))
    {
	    printf("you need to pay 5%% of total income\n ");
    }
    else if((income>=6) && (income<9))
    {
	    printf("you need to pay 10%% of total income\n ");
    }
    else if((income>=9) && (income<12))
    {
	    printf("you need to pay 15%% of total income\n ");
    }
    else if((income>=12) && (income<15))
    {
	   	printf("you need to pay 20%% of total income\n ");
    }
    else if(income>=15)
    {
	    printf("you need to pay 30%% of total income\n ");
    }

 
}


