#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
} ;

struct node *front, *rear = NULL;
void insert(int);
void display();
void delete();
//menu:::
void menu(int choice){
    int value;
       switch(choice){
    case 1:
        printf("\n Enter the value to be inserted -->   ");
        scanf("%d", &value);
        while(1){
            if(value != 999){
            insert(value);
        }
        else {
            menu(choice);
        }

    break;
    case 2:
        delete();
    break;
    case 3:
        display();
    break;
    case 4:
        exit(0);
    }
        }
}

int main() {
    int choice;
    int value; // scanning the value to be inserted!.
    printf("\n *** QUEUE USING LINKED-LIST ***");
    printf("\n\n [ 1 ] To Insert the Queue list .");
    printf("\n [ 2 ] To Delete the Queue list .");
    printf("\n [ 3 ] To Display the Queue list .");
    printf("\n [ 4 ] To Exit from the program .\n\n ");
    printf("choice -->  ");
    scanf("%d", &choice);

    while(1){
        menu(choice);
    }

return 0;
}

// insertion occurs
void insert(int value){
        struct node *newnode;
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = value;
        newnode->next = NULL;
            if(front == NULL){
                front = rear = newnode;
            } else {
                rear->next = newnode;
                rear = newnode;
            }
        printf("\n\n Voila!. Insertion is successful");
}

// deletation occurs
void delete() {
    if(front == NULL){
        printf("\n\n [ X ] Failed!  Queue is * Empty.\n\n");
    }
    else {
        struct node *temp;
        temp = front;
        front = front->next;
        printf(" ! ! Deleted Element :  %d", temp->data);
        free(temp);
    }
}

// display()
void display() {
    if(front == NULL){
        printf("\n\n Queue is Empty.\n\n");
    }
    else {
        struct node *temp;
        temp = front;
        while(temp->next != NULL){
            printf(" %d--->", temp->data);
            temp = temp->next;
        }
        printf(" --->NULL\n");
    }
}















