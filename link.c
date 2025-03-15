#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int value;
    struct list *next;
} node;


node* create(int data){
    node* new_node = (node*)malloc(sizeof(node));
    if (new_node == NULL){
        return NULL;
    }
    new_node->value = data;
    new_node->next = NULL;
    return new_node;
}
// inserts at the end of a linked list
node* insert_end(node* head, int data){
    node* new_node = create(data);
    if (head == NULL){
        return new_node;
    }
    node* temp = head;
    while (temp->next != NULL){
        // go to the next one and repeat untill Null 
        temp = temp->next;
    }
    
    // last node and set next to new node
    temp->next = new_node;
    return head;
}

void print_list(node* head)
{
    
    printf("%i\n", head->value);
    if (head->next != NULL){
        print_list(head->next);
    }
}

void delete(node* head)
{
    // delete last  then progress all the way to the end
    if (head == NULL){
        return;
    }
    delete(head->next);
    free(head);
    
}

void

int main(void){
    node* pode = create(50);
    return 0;
    
}
