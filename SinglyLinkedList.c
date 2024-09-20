#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void insertAtBeginning(int value);
void insertAtEnd(int value);
void insertBetween(int value, int loc1, int loc2);
void display();
void removeBeginning();
void removeEnd();
void removeSpecific(int delValue);

int main() {
    int choice, value, choice1, loc1, loc2;

    while (1) {
        printf("\n\n****** MENU ******\n");
        printf("1. Insert\n2. Display\n3. Delete\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &value);
                printf("Where do you want to insert: \n1. At Beginning\n2. At End\n3. Between\nEnter your choice: ");
                scanf("%d", &choice1);
                switch (choice1) {
                    case 1: insertAtBeginning(value); break;
                    case 2: insertAtEnd(value); break;
                    case 3:
                        printf("Enter the two values where you want to insert: ");
                        scanf("%d %d", &loc1, &loc2);
                        insertBetween(value, loc1, loc2);
                        break;
                    default: printf("\nWrong Input!! Try again!!!\n\n"); break;
                }
                break;
            case 2:
                display();
                break;
            case 3:
                printf("How do you want to delete: \n1. From Beginning\n2. From End\n3. Specific\nEnter your choice: ");
                scanf("%d", &choice1);
                switch (choice1) {
                    case 1: removeBeginning(); break;
                    case 2: removeEnd(); break;
                    case 3:
                        printf("Enter the value you want to delete: ");
                        scanf("%d", &loc2);
                        removeSpecific(loc2);
                        break;
                    default: printf("\nWrong Input!! Try again!!!\n\n"); break;
                }
                break;
            case 4: exit(0);
            default: printf("\nWrong input!!! Try again!!\n\n"); break;
        }
    }
}

void insertAtBeginning(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    head = newNode;
    printf("\nOne node inserted at the beginning!!!\n");
}

void insertAtEnd(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    printf("\nOne node inserted at the end!!!\n");
}

void insertBetween(int value, int loc1, int loc2) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;

    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == loc1 || temp->data == loc2) {
            newNode->next = temp->next;
            temp->next = newNode;
            printf("\nOne node inserted between %d and %d!!!\n", loc1, loc2);
            return;
        }
        temp = temp->next;
    }
    printf("\nLocation nodes not found. Node not inserted.\n");
}

void removeBeginning() {
    if (head == NULL) {
        printf("\nList is Empty!!!\n");
        return;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    printf("\nOne node deleted from the beginning!!!\n");
}

void removeEnd() {
    if (head == NULL) {
        printf("\nList is Empty!!!\n");
        return;
    }
    if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("\nOne node deleted from the end!!!\n");
        return;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    printf("\nOne node deleted from the end!!!\n");
}

void removeSpecific(int delValue) {
    if (head == NULL) {
        printf("\nList is Empty!!!\n");
        return;
    }
    if (head->data == delValue) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        printf("\nNode with value %d deleted!!!\n", delValue);
        return;
    }

    struct Node* temp1 = head;
    struct Node* temp2 = NULL;
    while (temp1 != NULL && temp1->data != delValue) {
        temp2 = temp1;
        temp1 = temp1->next;
    }
    if (temp1 == NULL) {
        printf("\nGiven node not found in the list!!!\n");
        return;
    }
    temp2->next = temp1->next;
    free(temp1);
    printf("\nNode with value %d deleted!!!\n", delValue);
}

void display() {
    if (head == NULL) {
        printf("\nList is Empty\n");
        return;
    }
    printf("\nList elements are - \n");
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
