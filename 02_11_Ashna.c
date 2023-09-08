/*Name:Ashna Brito
Roll no. 02
Batch:A
Program number:11 
Description:Array Implementation of stack
*/
#include <stdio.h>
#include<stdlib.h>
// #include <conio.h>
int stack[5];
int top=-1; //stack initialisation condition//

/*Function prototype*/
//push method is used to insert element into the stack//
void push (int);

//pop method is used to delete elementfrom stack//
void pop();

//display method is used to transverse and print all ten elements from stack//
void display();

/*main method*/
void main()
{
int ch; //used to store user choice//
int n1;

while(1)
{

printf("\n stack operation");
printf("\n push an element into the stack");
printf("\n pop mout an element from the stack");
printf("\n Display the stack elements");
printf("\n Exit");

printf("\n Enter your choice");
scanf("%d",&ch);

switch(ch)
{
	case 1 : printf("\n Enter elements to be pushed into the stack");
	         scanf("%d",&ch)
	         push(n1);
	         break;
	        
	case 2 : pop();
		 //getch();
		 break;
	
	case 3 : display();
	         //getch();
	         break;
	case 4 : exit(1);
       default : printf("\n wrong choice");
       	 break;
       	 
     } 	 //end of switch
     
 } //end of while
 
 
 ]
 /*End of main method*/
 
 /*push method*/
void push(int x) 	  
{
     if(top==4)	
	 {
	      printf("\n stack is full");
	 }
     else
	 {
	  top++;
	  stack[top]=X;
	 }
}
/*End of push method*/

/*pop method*/  
void pop()
{
     if(top==-1)
      {
      	  printf("stack is empty");
      }  
      else
      {
          a=stack[top];
      top--;
        printf("\n %d element popped out of the stack",a);
        }
}
/*end of pop method*/        

/*display method*/
void display()
{
   int i;
   if (top==-1)
       printf("stack is empty");
    else
    {
       printf("elements in stack are");
       for(i=top;i>=0;i--)
       {
          printf("\n %d",stack[i]);
       }
    }
}
/*end of display method*/
