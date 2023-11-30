#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

struct Node* create_node(int data){
    struct Node* new_node =(struct Node*)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
}

void display(){
    if(head==NULL){
        printf("\nLinked list is empty!\n");
    }
    else{
        struct Node* temp = head;
        printf("\nLinked List : ");
        while(temp!= NULL){
            printf(" %d",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}

void insert_end(int data){
    
    struct Node* new_node = create_node(data);

    if(head==NULL){
        head = new_node; 
    }
    else{
        struct Node* temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = new_node;
    }
    display();
}

void insert_beg(int data){
    
    struct Node* new_node = create_node(data);

    if(head==NULL){
        head = new_node; 
    }
    else{
        struct Node* temp = head;
        head = new_node;
        new_node->next = temp;
    }
    display();
}
void insert_at(int data){
    
    struct Node* new_node = create_node(data);

    if(head==NULL){
        head = new_node; 
    }
    else{
        int pos,i=2;
        struct Node* temp;
        
        printf("\nEnter the position to be inserted : ");
        scanf("%d",&pos);
        
        if(pos==1){
            new_node->next=head;
            head=new_node;
        }
        temp = head;
        while(i<pos){
            temp=temp->next;
            i++;
        }
        new_node->next=temp->next;
        temp->next = new_node; 
    }
    display();
}



void delete_at(){
     if(head==NULL){
        printf("\nLinked List is empty!\n");
    }
    else{
        int pos,i=2;
        struct Node *curr, *prev;
        
        printf("\nEnter the position of element to be deleted : ");
        scanf("%d",&pos);
        
        prev = head;
        while(i<pos){
            prev=prev->next;
            i++;
        }
        curr = prev->next;
        prev->next = curr->next;
        printf("%d is deleted \n",curr->data);
        
        free(curr);
    }
}

void delete_beg(){
     if(head==NULL){
        printf("\nLinked List is empty!\n");
    }
    else{
        struct Node* temp = head;
        head = head->next;
        printf("%d is deleted",temp->data);
        free(temp);
    }
}
void delete_end(){
     if(head==NULL){
        printf("\nLinked List is empty!\n");
    }
    else{
        struct Node *prev,*temp;
        temp = head;
        while(temp->next!=NULL){
            prev= temp;
            temp=temp->next;
        }
        printf("%d is deleted ",temp->data);
        free(temp);
        prev->next = NULL;
    }
}


int main(){

    display();

    insert_end(3);
    insert_beg(1);
    insert_at(2);

    insert_end(4);
    insert_end(5);
    insert_end(6);
    insert_end(7);




    delete_at();

    delete_end();
    delete_end();
    delete_end();
    

    display();


    return 0;
}