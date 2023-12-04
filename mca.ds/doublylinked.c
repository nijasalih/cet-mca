#include<stdio.h>
#include<stdlib.h>

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

void display_asc(){
    if(head==NULL){
        printf("\nLinked List is Empty!");
    }
    else{
        struct Node *temp = head;
        printf("Linked List in ascending order : ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void display_desc(){
    if(head==NULL){
        printf("\nLinked List is Empty!");
    }
    else{
        struct Node *temp = tail;
        printf("Linked List in ascending order : ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->prev;
        }
        printf("\n");
    }
}

void insert_end(int data){
    struct Node* new_node = create_node(data);

    if(head==NULL){
        head = tail = new_node;
    }
    else{
        new_node->prev = tail;
        tail->next = new_node; 
        tail = new_node;
    }
    display_asc();
    display_desc();
    printf("\n");
}
void insert_at(int data){
    struct Node* new_node = create_node(data);

    if(head==NULL){
        head = tail = new_node;
        new_node->next = new_node->prev = NULL;
    }
    else{
        int pos,i=2;
        printf("Enter the position to be inserted (From head): ");
        scanf("%d",&pos);
        
        struct Node *temp =  head;

        while(i<pos){
            temp = temp->next;
            i++;
        }
        new_node->next = temp->next;
        new_node->prev = temp;
        temp->next->prev = new_node;
        temp->next = new_node;




    }
    display_asc();
    display_desc();
    printf("\n");
}

void delete_end(){
    if(head==NULL){
        printf("\nLinked List is Empty!");
    }
    else{
        if(tail->prev == NULL){
            free(tail);
            tail = head = NULL;
        }
        else{
            tail=tail->prev;
            free(tail->next);
            tail->next = NULL;
            
            display_asc();
            display_desc();
        }
    }
}


int main(){
    insert_end(1);
    insert_end(2);
    insert_end(3);
    insert_end(4);
    insert_end(5);

    

    delete_end();
    delete_end();
    delete_end();
    delete_end();
    delete_end();
    delete_end();


    
    return 0;
}

