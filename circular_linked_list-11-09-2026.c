#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main() {
    struct Node *head= NULL, *temp=NULL, *newNode=NULL;
    int choice;

    do{
        newNode= (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for new node: ");
        scanf("%d", &newNode->data);
        newNode->next = NULL;

        if(head==NULL){
            head= newNode;
            temp= newNode;
        }
        else{
            temp->next= newNode;
            temp= newNode;
            temp->next= head;
        }
        printf("Do you want to add another node(1 for Yes/ 0 for No)");
        scanf("%d", &choice);
    }
    while(choice==1);{
        printf("\n Linked list: ");
        temp= head;
    }
    do{
        printf("%d ->", temp->data);
        temp= temp->next;
    }
    while(temp!=NULL);
    printf("NULL\n");


    return 0;
}