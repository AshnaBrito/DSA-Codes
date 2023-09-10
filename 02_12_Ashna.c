#include <stdio.h>
#include<stdlib.h>

#define size 5

int queue{size};
int front,rear;

void init();
void enqueue(int);
void dequeue();
void display;

void init()
{
front=0;
rear=-1;
}

void enqueue(int x);
{
	if (rear==size-1)
		printf("Queue overflow");
	else	
		{
			rear=rear+1;
			queue[rear]=x;
		}
}
void dequeue()
{
	if(rear<front)
		printf("Queue is empty");
	else
	{
		printf("\n %d is deleted",queue[front++]);
	} 		
}

void display()
{
	int i;
	if(rear<front))	
		printf("\n Queue Underflow");
	else
	    for(i=front;i<=rear;i++)
	        {
	        	printf("\n %d",queue[i]);
	        }
}
void main()
{
int ch;
int x;
init();

while(1)	        
{
printf("\n-----Queue operation----");
printf("Enqueue element");
printf("Dequeue element");
printf("Display the queue elements");
printf("Exit");
printf("Enter your choices");
scanf("%d",&ch);

switch(ch)
{
case1:printf("Enter Element to be enqueued");
		scanf("%d",&ch);
		enqueue(x);
		break;
case2:dequeue();
		break;
case3:display();
		break;
case4:exit(1);
default: printf("wrong choice");
			break;
}
}
}			
		
					
		




		
