#include<stdio.h>
#include<stdbool.h>

#define MAX 3       // Stack's maximum size

//Function declaration
void push(void);
void pop(void);
void display(void);
void peek();

int stack[MAX];
int top=-1;

int main()
{
  int choice;
  printf("*** Stack  Implementation using Array***");
  
  while(1)
  {
    printf("\n1. Push\n");
    printf("2. Pop\n");
    printf("3. Display Elements\n");
    printf("4. Peek Top element\n");
    printf("Enter the Choice: ");
    scanf("%d",&choice);
    
    switch(choice)
    {
      case 1:
      {
        //Pushing(Inserting) the element into the stack
        push();  
        break;
      }
      case 2:
      {
        //Popping(Removing) the element into the stack
        pop();
        break;
      }
      case 3:
      {
        //Displaying all the elements in  the stack
        display();
        break;
      }
      case 4:
      {
        //Displaying the last element which is pushed into the stack
        peek();
        break;
      }
      default:
      {
        printf ("\nPlease Enter a Valid Choice: ");
        break;
      }
    }
  }
}

bool isFull()
{
  bool isStackFull = false;
  
  if(top >= (MAX-1))
  {
    printf("\nStack overflow\n");
    isStackFull = true;
  }
  
  return (isStackFull);
}

bool isEmpty()
{
  bool isStackEmpty = false;
  
  if(top <= -1)
  {
    printf("\nStack underflow\n");
    isStackEmpty = true;
  }
  
  return (isStackEmpty);
}
    
void push()
{
  if( isFull() == false )
  {
    int value;
    printf("\nEnter a value to be pushed: ");
    scanf("%d",&value);
    top++;
    stack[top]=value;
  }
}

void pop()
{
  if( isEmpty() == false )
  {
    printf("\nThe popped elements is: %d\n",stack[top]);
    top--;
  }
}

void display()
{
  if(top > -1)
  {
    int i;
    printf("\nThe elements in the stack are:\n");
    for(i=0; (i < top); i++)
    {
        printf("\n%d",stack[i]);
    }  
  }
  else
  {
    printf("\nThe Stack is empty\n");
  }
}

void peek()
{
  if(top > -1)
  {
    printf("\nThe top element is:%d\n",stack[top]);
  }
  else
  {
    printf("\nThe Stack is empty\n");
  }
}
