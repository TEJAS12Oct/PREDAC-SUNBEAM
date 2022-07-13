#include<stdio.h>

#define SIZE 6
// type declaration of queue
typedef struct queue
{
    int arr[SIZE];
    int rear;
    int front;
    int count;      // change   // to keep no of elements in queue 
}queue_t;
// create vriable of above type
queue_t q;

// Operations
void init(void);
void enqueue(int data);
void dequeue(void);
int peek(void);
int is_empty(void);
int is_full(void);

int main(void)
{
    int choice, data;

    init();

    do{
        printf("1. Enqueue\n2. Dequeue\n3. Peek\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // Enqueue
            if(is_full())
                printf("Queue is full\n");
            else
            {
                printf("Enter data : ");
                scanf("%d", &data);
                enqueue(data);
            }
            break;
        
        case 2:
            if(is_empty())
                printf("Queue is empty\n");
            else
            {
                printf("Data deleted = %d\n", peek());
                dequeue();
            }
            break;

        case 3:
            if(is_empty())
                printf("Queue is empty\n");
            else    
                printf("Peeked Data = %d\n", peek());
            break;
        }

    }while(choice != 0);

    return 0;
}
void init(void)
{
    // init front and rear
    q.front = -1;
    q.rear = -1;
    q.count = 0;        // change
}
void enqueue(int data)
{
    //a. reposition rear (increment)
    q.rear = (q.rear + 1) % SIZE;       // change
    //b. add data at rear index
    q.arr[q.rear] = data;
    // increment the count
    q.count++;
}
void dequeue(void)
{
    // reposition front (increament)
    q.front = (q.front + 1) % SIZE;     // change
    // decrement the count
    q.count--;
}
int peek(void)
{
    // return data of front + 1 index
    return q.arr[(q.front + 1) % SIZE];     // change
}
int is_empty(void)
{
    return q.count == 0;        // change
}
int is_full(void)
{
    return q.count == SIZE;     // change
}