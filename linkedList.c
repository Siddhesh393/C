#include<stdio.h>
#include<stdlib.h>

struct node {
int ele;
    struct node *next;
}*head, *temp, *tail;
void init() {
    head = tail = NULL;
}
void create()
{
    int ele;
    struct node *new1;
    printf("\n Enter Element :");
    scanf("%d",&ele);
    new1 = (struct node *)malloc(sizeof(struct node));
    if (head==NULL)
    {
        head = new1;
        head->ele = ele;
        head->next = NULL;
        tail = head;
} else {
        new1->ele = ele;
        new1->next = NULL;
        tail->next = new1;
        tail = new1;
} }
void display()
{
    temp = head;
    printf("\n Elements are: ");
    while(temp!=NULL)
    {
        printf("%d->",temp->ele);
        temp = temp->next;
    }
}

// int countInt(struct node* head, int search) {
//    struct node* current = head;
//    int intCount = 0;
//    while (current != NULL) {
//       if (current->ele == search)
//          intCount++;
//       current = current->next;
//    }
//    return intCount;
// }

// void removeDuplicates(struct node* head)
// {
//     struct node* current = head;
//     struct node* next1; 

//     if (current == NULL) 
//        return; 
//     while (current->next != NULL) 
//     {
//        if (current->ele == current->next->ele) 
//        {                          
//            next1 = current->next->next;
//            free(current->next);
//            current->next = next1;  
//        }
//        else 
//        {
//           current = current->next; 
//        }
//     }
// }

// // p is pointer to address of rear (double pointer).  

// void  enQueue(struct node **p, struct node *new_node)
// {
//      new_node->next = (*p)->next;
//      (*p)->next = new_node;
//      (*p) = new_node 
//  }
// // *p->next is front and  *p is rear. 
  
// // p is pointer to rear. 

// struct node *deQueue(struct node *p)
// { 
//     struct node *temp = p->next;
//     p->next = p->next->next;
//     return temp;
// }
// // p->next is front and p is rear. 

void sortInsert(struct node* newnode)
{
    /* Special case for the head end */
    if (sorted == NULL || sorted->ele >= newnode->ele) {
        newnode->next = sorted;
        sorted = newnode;
    }
    else {
        struct node* current = sorted;
        /* Locate the node before the point of insertion
         */
        while (current->next != NULL
               && current->next->ele < newnode->ele) {
            current = current->next;
        }
        newnode->next = current->next;
        current->next = newnode;
    }
}
  
// function to sort a singly linked list 
// using insertion sort
void insertionsort()
{
  
    struct node* current = head;
  
    // Traverse the given linked list and insert every
    // node to be sorted
    while (current != NULL) {
  
        // Store next for next iteration
        struct node* next = current->next;
  
        // insert current in sorted linked list
        sortInsert(current);
  
        // Update current
        current = next;
    }
    // Update head to point to sorted linked list
    head = sorted;
}
  

int main() {
    init();
    for(int i=0; i<7; i++)
        create();
    display();
    printf("\n");
    insertionsort();
    printf(" The sorted linked list:");
    display();
}