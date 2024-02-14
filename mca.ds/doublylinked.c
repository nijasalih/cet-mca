#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next,*prev;
};

struct Node *head=NULL,*tail=NULL,*temp;

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
        temp = head;
        printf("Linked List in ascending order : ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
    return;
}

void display_desc(){
    if(head==NULL){
        printf("\nLinked List is Empty!");
    }
    else{
        temp = tail;
        printf("Linked List in descending order : ");
        while(temp!=NULL){
            printf("%d ",temp->data);
            temp=temp->prev;
        }
        printf("\n");
    }
    return;
}

void insert_beg(){
    int data;
    printf("Enter the data to be inserted : ");
    scanf("%d",&data);


    struct Node* new_node = create_node(data);

    if(head==NULL){
        head = tail = new_node;
    }
    else{
        new_node->next = head;
        head->prev = new_node; 
        head = new_node;
    }
    display_asc();
    display_desc();
    printf("\n");

    return;
}

void insert_end(){
    int data;
    printf("Enter the data to be inserted : ");
    scanf("%d",&data);

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
    return;
}
void insert_pos(){
    

    if(head==NULL){
        insert_beg();
    }
    else{
        int pos,i=2,j=0;
        printf("Enter the position to be inserted (From head): ");
        scanf("%d",&pos);

        temp = head;
        while(temp!=NULL){
            temp=temp->next;
            j++;
        }
        if(pos<=0 || pos>j+1){
            printf("Invalid Position!\n");
            return;
        }
        if(pos==1){
            insert_beg();
            return;
        }
        else if(pos == j+1){
            insert_end();
            return;
        }
        int data;
        printf("Enter the data to be inserted : ");
        scanf("%d",&data);        

        struct Node* new_node = create_node(data);
        temp =  head;
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
        display_asc();
        display_desc();
    }
}
void delete_beg(){
    if(head==NULL){
        printf("\nLinked List is Empty!");
    }
    else{
        if(head->next == NULL){
            free(head);
            tail = head = NULL;
        }
        else{
            head=head->next;
            free(head->prev);
            head->prev = NULL;
            
            
        }
        display_asc();
        display_desc();
    }
}
void delete_pos(){
    if(head==NULL){
        printf("\nLinked List is Empty!");
    }
    else{
        int pos,i=2,j=0;
        printf("Enter the position to be deleted (From head): ");
        scanf("%d",&pos);    

        temp =  head;

        while(temp!=NULL){
            temp=temp->next;
            j++;
        }
        if(pos<=0 || pos>j){
            printf("Invalid Position!\n");
            return;
        }

        if(pos==1){
            delete_beg();
            return;
        }
        else if(pos==j){
            delete_end();
            return;
        }else{
            temp = head;
            while(i<=pos){
                temp=temp->next;
                i++;
            }
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            free(temp);

            display_asc();
            display_desc();
        }

    }

}



int main(){
    insert_beg();
    insert_end();
    insert_pos();

    delete_pos();
    delete_beg();
    delete_end();



    
    return 0;
}

