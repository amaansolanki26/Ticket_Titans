#include<stdio.h>

int seats[5]={50,50,50,50,50};

void book_ticket() 
{
    int bus_number; 
    int seats_num;
    
    printf("enter bus number ");
    scanf("%d",&bus_number);

    if (bus_number<101 || bus_number>105) 
    {
        printf("\ninvalid bus number");

        return;
    }

    printf("enter number of seats: ");
    scanf("%d",&seats_num);

    if (seats_num<= 0) 
    {
        printf("\ninvalid number of seats");

        return;
    }

    int index=bus_number - 101;

    if (seats[index]>=seats_num)
     {
        seats[index]-=seats_num;
        printf("booking successful %d seats booked on bus number %d\n",seats_num, bus_number);

    } else 

    {
        printf("not enough seats available only %d left\n", seats[index]);
    }
}

int main() 
{
    book_ticket(); 
    return 0;
}
