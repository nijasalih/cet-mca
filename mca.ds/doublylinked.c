#include<stdio.h>

struct Node{
    int data;
    struct Node *next,*prev;
};

struct Node *head=NULL,*tail=NULL;

struct Node* create_node(int data){
    struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = new_node->prev = NULL;
    
    return new_node;
}

int main(){
    
    
    return 0;
}
// insert_beg(){

// }
