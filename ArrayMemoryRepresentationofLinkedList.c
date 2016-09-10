#include<stdio.h>
#include<conio.h>
#define MAX 100
struct Node
{
   int data;
   int next;
}arr[100];
void func(int *,int,char);
void display(int);

void main()
{
	 int n,head;
     printf("enter no do want to insert in a linked list = ");
     scanf("%d",&n);
     int i;
     for(i=0;i<n;i++)
     {
     	char ch;
     	fflush(stdin);
     	printf("Enter %d number = ",(i+1));
     	scanf("%c",&ch);
     	func(&head,i,ch);   	
	 }
	 printf("Data				Next\n");
	 for(i=0;i<n;i++)
     {
     	printf("%c				%d\n",arr[i].data,arr[i].next);
	 }
     display(head); 
	 getch();
}
void func(int *head,int i ,char ch)
{
	   if(i==0)
	   {
	   	    arr[i].data=ch;
	   	    arr[i].next=-1;
	   	    *head=i;
	   }
	   else if(ch<arr[*head].data)
	   {
	   	     arr[i].data=ch;
	   	     arr[i].next=*head;
	   	     *head=i;
	   }
	   else
	   {
	   	     int k=*head;
	   	     arr[i].data=ch;
	   	     arr[i].next=-1;
	   	     while(arr[k].next!=-1&&ch>arr[arr[k].next].data)
	   	     {
	   	     	   k=arr[k].next;
		   	 }
		   	 arr[i].next=arr[k].next;
		   	 arr[k].next=i;
		   	 
	   }
}
void display(int h)
{
	while(h!=-1)
	{
		printf("%c  ",arr[h].data);
		
		h=arr[h].next;
	}
}
