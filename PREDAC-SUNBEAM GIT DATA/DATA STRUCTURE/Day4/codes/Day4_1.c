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
void add_node_at_specific_position(int pos,int data); 
void delete_node_at_first_position(void); 
void delete_node_at_last_position( void ); 
int main()
{
    //add_node_at_last_postion(10);
    //add_node_at_last_postion(20); 
    //add_node_at_last_postion(30);
    //add_node_at_last_postion(40); 

     add_node_at_first_pos(50);
     add_node_at_first_pos(40);
     add_node_at_first_pos(30);
     add_node_at_first_pos(20);
     add_node_at_first_pos(10);

     //add_node_at_specific_position( 4, 99);  

      //delete_node_at_first_position( );

      //delete_node_at_last_position( );   
      

        delete_node_at_last_position( );  


    display_list( ); 
    return 0; 
}


// void delete_node_at_specific_postion( int pos )
// {
//         if(pos==1)
//           delete_node_at_first_position( ); 
//         else if(pos == count_nodes())//pos is last 
//            delete_node_at_last_position( ); 
//         else// if pos is in between  
//         {
//              int i = 1; 
//              //start the traversal from first node 
//              //TODO    
//         }  
         
// }

void free_list( void  )
{
     if(head!=NULL)
     {
            while(head!=NULL)
            {
                //delete_node_at_last_position( ); 
                  delete_node_at_first_position( );  
            }
        printf("List is freed , all memory freed sucess ..\n");     
     }
}




void delete_node_at_last_position( void )
{
        // step1 : check list is empty 
        if(head == NULL)
        {
            printf("Linked list is empty"); 
        }
        else
        {
            //if linked list contains only one node
            if(head->next == NULL)
            {
                //delete the node and make the head as NULL
                free(head); 
                head = NULL; 
            }
            else// if list contains more than one node 
            {
                //start the traversal from first node 
                node_t *trav = head; 
                // traverse till second last node 
                while(trav->next->next!=NULL)
                {
                    trav = trav->next;  
                } 
                free(trav->next); 

                trav->next = NULL; 
                
            }
            

        }
        
} 


void delete_node_at_first_position(void)
{
    //step1 : check list is empty 
    if(head == NULL)
        printf("List is empty"); 
    else// if list is not empty 
    {
        //if list contains only one node 
        if(head->next == NULL)
        {
            free(head); 
            head = NULL; 
        }
        else // if list contains more than one nodes  
        {
            //store the addr of first node into temp pointer which is to be deleted 
               node_t *temp = head;
                //attach the cur next node to head 
               head = head->next;       
                // delete the node 
                free(temp);// free(1000); 
                temp = NULL; // To avoid dangling pointer                
        }
          
         
    }
        
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

int count_nodes(void)
{
    int cnt = 0;

    //if list is not empty
    if( head != NULL )
    {
        //start traversal from the first node
        node_t *trav = head;
        //traverse the list till last node and increment the counter
        while( trav != NULL )
        {
            cnt++;
            trav = trav->next;
        }

        //return final count i.e. no. of nodes in a list
    }
    
    return cnt;
}

void add_node_at_specific_position(int pos,int data)
{
        if(pos==1)//if pos is first 
          add_node_at_first_pos(data); 
        else if(pos== count_nodes()+1)// if pos is last 
          add_node_at_last_postion(data); 
        else 
        {
            //create the new node 
            node_t *newnode = create_node(data);  
            int i = 1; 
            //start the traversal from first node 
            node_t *trav = head; 
            //traverse the list till (pos -1 )th node 
            while( i < pos -1)
            {
                 i++; 
                 trav = trav->next; 
            }  
            newnode->next = trav->next; 
            trav->next = newnode;     
        }       
           
}