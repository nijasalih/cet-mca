#include<stdio.h>


int superSet[20],setA[20],setB[20],superSetSize,setASize,setBSize;

void getSet(int set[],int setSize){
    for(int i=0;i<setSize;i++){
        scanf("%d",&set[i]);
    }
}

void printSet(int set[],int setSize){
    printf("{");
    for(int i=0;i<setSize;i++){
        printf("%d, ",set[i]);
    }
    printf("}\n");
}


void main(){
    printf("Enter the size of universal set : ");
    scanf("%d",&superSetSize);
    printf("Enter the universal set elements : ");
    getSet(superSet,superSetSize);

    printf("Enter the size of set A : ");
    scanf("%d",&setASize);
    printf("Enter the set A elements : ");
    getSet(setA,setASize);

    printf("Enter the size of set B : ");
    scanf("%d",&setBSize);
    printf("Enter the set B elements : ");
    getSet(setB,setBSize);    

    printf("Entered Sets :\n");
    printf("Universal Set : ");
    printSet(superSet,superSetSize);
    printf("Set A : ");
    printSet(setA,setASize);
    printf("Set B : ");
    printSet(setB,setBSize);
    // int choice = 0;

    // while(choice == 0){

    //     switch ()
    //     {
    //     case /* constant-expression */:
    //         /* code */
    //         break;
        
    //     default:
    //         break;
    //     }
    // }
}

