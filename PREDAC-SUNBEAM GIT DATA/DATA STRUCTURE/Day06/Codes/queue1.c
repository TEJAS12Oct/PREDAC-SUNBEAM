#include<stdio.h>

#define SIZE 6
// type declaration of queue
struct queue{
    int arr[SIZE];
    int rear;
    int front;
};
// create variable for queue
struct queue q;

void init();
void push(int data);
void pop();
int peek();
int is_empty();
int is_full();

int main(void)
{
    int choice, data;
    init();
    do
    {
        printf("1. Push\n2. Pop\n3. Peek\n");
        printf("Enter choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:// push
                if(is_full())
                    printf("Queue is full\n");
                else
                {
                    printf("Enter data to be added : ");
                    scanf("%d", &data);
                    push(data);
                }
                break;

            case 2:// pop
                if(is_empty())
                    printf("Queue is empty\n");
                else 
                {
                    printf("Deleted data = %d\n", peek());
                    pop();
                }
                break;

            case 3:// peek
                if(is_empty())
                    printf("Queue is empty\n");
                else    
                    printf("Peeked data = %d\n", peek());

                break;
        }
    } while (choice != 0);
    

    return 0;
}

void init()
{
    q.front = -1;
    q.rear = -1;
}
void push(int data)
{
    //a. increament rear
    q.rear++;
    //b. add element at rear index
    q.arr[q.rear] = data;
}
void pop()
{
    // increament front
    q.front++;
}
int peek()
{
    // return data of front + 1 index
    return q.arr[q.front + 1];
}
int is_empty()
{
    if(q.front == q.rear)
        return 1;
    else
        return 0;
}
int is_full()
{
    return q.rear == SIZE - 1;
}