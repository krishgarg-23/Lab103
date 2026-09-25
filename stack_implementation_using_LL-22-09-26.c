#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
struct node* top;
struct node* new;
struct node* t;

void pop(){
    if( top == NULL){
        printf("Stack underflow\n");
    }
    else{
        t=top;
        top= top->next;
        free(t);
        t=NULL;
    }
}
void push(int x){
    new=(struct node*)malloc(sizeof(struct node));
    new->data= x;
    new->next= top;
    top= new;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);
    pop();
    pop();
    pop();
    pop();
    pop();
    return 0;
}
