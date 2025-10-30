#include<stdio.h>
#include<stdlib.h>
void main()
{
int enterpin;
int amount;
int yourpin=2020;
int amountinatm = 1000000;
printf("insert your card\n");
printf("Dont remove your card till end of the process\n");
printf("Enter your pin\n");
scanf("%d",&enterpin);
if(yourpin== enterpin)
{
printf("enter amount\n");
scanf("%d",&amount);
if(amountinatm>amount)
{
printf("transcation is processing.....\n -----please collect your amount%d--",amount);

}
else
{
printf("insufficent funds vist near bank atm");
}
}
else
{
printf("wrong pin ");

}



}
