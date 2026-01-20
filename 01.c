//PROGRAM  TO SUM ALL THE NUMBERS UPTO A GIVEN NUMBER
//#include<stdio.h>
void main()
{
int n,i,j,sum=0;
printf("Enter a number");
scanf("%d",&n);
for(i=1,j=n;i<=n&&j>=1;i++,j--)
{
    sum=sum+i;
    printf("%d\n",j);
}
printf("Sum is %d",sum);
}