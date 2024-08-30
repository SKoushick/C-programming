#include <stdio.h>
#include <stdlib.h>

struct node {
    int num;
    struct node *nextptr;
}*stnode;

// Function prototypes
void ClListcreation(int n);
void displayClList();

int main() {
    int n;
    stnode = NULL;

    // User input for the number of nodes

    printf(" Input the number of nodes : ");
    scanf("%d", &n);

    // Creating a circular linked list
    ClListcreation(n);
    displayClList();
    return 0;
}

// Function to create a circular linked list
void ClListcreation(int n) {
    int i, num;
    struct node *preptr, *newnode;

    if (n >= 1) {
        stnode = (struct node *)malloc(sizeof(struct node));

        printf(" Input data for node 1 : ");
        scanf("%d", &num);
        stnode->num = num;
        stnode->nextptr = NULL;
        preptr = stnode;

        // Loop to create subsequent nodes and link them to form a circular list
        for (i = 2; i <= n; i++) {
            newnode = (struct node *)malloc(sizeof(struct node));
            printf(" Input data for node %d : ", i);
            scanf("%d", &num);
            newnode->num = num;
            newnode->nextptr = NULL; // Setting the next address of the new node as NULL
            preptr->nextptr = newnode; // Linking the previous node with the new node
            preptr = newnode; // Advancing the previous node to the new node
        }
        preptr->nextptr = stnode; // Linking the last node with the first node to form a circular list
    }
}

// Function to display the circular linked list
void displayClList() {
    struct node *tmp;
    int n = 1;

    if (stnode == NULL) {
        printf(" No data found in the List yet.");
    } else {
        tmp = stnode;
        printf("\n\n Data entered in the list are :\n");

        // Loop to display nodes in the circular list
        do {
            printf(" Data %d = %d\n", n, tmp->num);
            tmp = tmp->nextptr; // Moving to the next node
            n++;
        } while (tmp != stnode); // Checking if we have reached the first node again
    }
}
