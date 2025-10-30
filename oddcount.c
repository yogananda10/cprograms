#include<stdio.h>
void main()
{
int r,n;
scanf("%d",&n);
int oddnumber= 0;
 while(n!=0)
 {
 r=n%10;
 if(r%2!=0)
 {
 oddnumber++;
 }
 n=n/10;
 }
if(oddnumber==0)
{
printf("0");
}
else
{
printf("%d",oddnumber);
}

}
