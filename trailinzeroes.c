#include<stdio.h>
#include<conio.h>
int trailingZeorsInFact(int n);
void main()
{
	int n,sum;
	printf("Enter a  number");
	scanf("%d",&n);
    sum=trailingZeorsInFact(n);
	printf("No of trailing zeroes %d !=%d",n,sum);
	getch();
}
int trailingZeorsInFact(int n)
{
	int m,sum=0;
	m=n;
	while(m>=5)
	{
		sum=sum+m/5;
		m=m/5;
	}
    return sum;	
}
