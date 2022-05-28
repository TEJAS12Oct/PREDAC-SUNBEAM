#include<stdio.h> 
#include<stdlib.h> 

#define SIZE 5

#define true 1
#define false 0

typedef struct stack
{
    int arr[SIZE];
    int top; 
}stack_t;

typedef int bool_t; 
int peek_element(stack_t *ps); 
void pop_element( stack_t *ps);
bool_t is_stack_empty( stack_t *ps ); 
void push_element(stack_t *ps, int ele); 
bool_t is_stack_full(stack_t *ps); 
void init_stack(stack_t *ps); 

int menu()
{
    int choice;
    printf("**** Static stack *****\n");
    printf("0.Exit\n");
    printf("1.Push\n");  
    printf("2.Pop\n");
    printf("3.Peek\n");

    printf("Enter the choice");
    scanf("%d",&choice); 
    return choice;  
}

enum menu_options{EXIT,PUSH,POP,PEEK}; 

int main()
{
    stack_t s;
    int ele;    
    init_stack(&s); 

    while(1)
    {
           int choice = menu( ); 

           switch( choice)
           {
               case EXIT: 
               exit(0);

               case PUSH: 
               //step-1: check stack is not full 
               if( !is_stack_full(&s) )
               {
                     printf("Enter the ele : ");
                     scanf("%d",&ele); 
                     push_element(&s,ele); 
                     printf("%d is pushed onto the stack..\n",ele); 
               } 
               else 
                printf("Stack overflow!!!\n");
            break; 

            case POP: 
            // step 1: -> check stack is empty 
            if(!is_stack_empty(&s))
            {
                   ele = peek_element(&s);  
                   pop_element(&s);
                   printf("Deleted element is %d \n",ele);    
            } 
            else 
               printf("Stack underflow"); 
               break; 
           } 
        
    }




    return 0; 
}

int peek_element(stack_t *ps)
{
    return ( ps->arr[ps->top]); 
}

void pop_element( stack_t *ps)
{   
        // decrement value of top by 1 
        ps->top--; 
}

bool_t is_stack_empty( stack_t *ps )
{
        if(ps->top == -1)
           return true; 
        else 
           return false;   
}





void push_element(stack_t *ps, int ele)
{
        // Increment the top  by 1 
        ps->top++; 
        //insert/push element onto the stack at the top end 
        ps->arr[ps->top] = ele;   
}

bool_t is_stack_full(stack_t *ps)
{
        if(ps->top == SIZE - 1)
            return true; 
        else 
            return false;      
}



void init_stack(stack_t *ps)
{
    // init value of top == -1 
    ps->top = -1;  
}

