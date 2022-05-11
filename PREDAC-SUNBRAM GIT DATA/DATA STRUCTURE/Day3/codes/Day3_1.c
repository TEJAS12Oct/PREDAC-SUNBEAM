#include<stdio.h> 
#include<stdlib.h> 


typedef struct node 
{
    int data; 
    struct node* next;  
}node_t; 

node_t *head = NULL; 
void add_node_at_last_postion( int data ); 
node_t *create_node( int data  ); 
void display_list(void); 
void add_node_at_first_pos(int data); 
int main()
{
    //add_node_at_last_postion(10);
    //add_node_at_last_postion(20); 
    //add_node_at_last_postion(30);
    //add_node_at_last_postion(40); 

     add_node_at_first_pos(10);
     add_node_at_first_pos(20);
     add_node_at_first_pos(30);
     add_node_at_first_pos(40);
     add_node_at_first_pos(100); 

     // 40->30->20->10 

    display_list( ); 
    return 0; 
}

node_t *create_node( int data  )
{
    //step-1: Allocate memory dynamically for a node 

    node_t *temp = (node_t *)malloc(sizeof(node_t));    
//malloc() allocates required bytes of memory from heap section 
// if sucess it returns starting address of dynamically allocated block 
// on failure it will return NULL 

    if(temp==NULL)
    {
        printf("Malloc() failed!!! "); 
        exit(1); 
    }
    // initialize the members of the node 
    temp->data = data; 
    temp->next = NULL;  

// return starting addr of dynamically allocated node to the calling function 
    return temp; 
} 

void add_node_at_last_postion( int data )
{
 // step 1: Create a newnode runtime/dynamically(by using Dynamic memory allocation) 

        node_t *newnode = create_node(data);    

        // list is empty     
        if(head == NULL)
        {
        //store add of newly created node into the head 
              head = newnode;    
        }
        else
        {
            //start trav linked list from the first node 
            node_t *trav = head;   
           //traverse the list till the last node 
             while( trav->next !=NULL )
             {
                    trav = trav->next; 
                    // move the trave pointer towards the next node 
             }
//attach newly created node to the last node 
// store the address of newly created node into the next part of last node              
             trav->next = newnode;  
        }
        
}

void display_list(void)
{
        if(head!=NULL)
        {
            // start the traversal from the first node 
            node_t *trav = head;  
            printf("List is : head ->");
            while(trav!=NULL)
            {
                //print the data part
                printf(" %d ->",trav->data);//10 20 30       
                trav = trav->next;  
            } 
            printf("null\n"); 
        }
        else 
           printf("List is empty"); 
}

void add_node_at_first_pos(int data)
{
    //step1 : Create the newnode  dynamically 

    node_t *newnode = create_node(data);

    // if list is empty   
       if(head==NULL)
       {
           // store the address of newly created node into head 
           head = newnode; 
       }
       else // if linked list is not empty 
       {
//store the add of cur first node in next part of newly created node 
            newnode->next = head;
 //attach newly created node to the head           
            head = newnode;    
       }



}