#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void main() {
    int n, m, i;
    int InsertData, DeletePosition, InsertPosition, count, swapPosition1,swapPosition2;
    struct node *head = NULL, *temp, *last, *current, *tempp, *curr1, *curr2;
    printf("<======== LINKED LIST ========>\n\n");

    while (1) {
        printf("\nEnter an option:\n1.Initialise\n2.Print\n3.Insert\n4.Deletion\n5.Swap\n6.Exit\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("\nEnter the number of data: ");
                scanf("%d", &m);
                head = NULL;
                last = NULL;

                for (i = 0; i < m; i++) {
                    temp = (struct node*)malloc(sizeof(struct node));
                    printf("Enter data for node %d: ", i + 1);
                    scanf("%d", &temp->data);
                    temp->next = NULL;

                    if (head == NULL) {
                        head = temp;
                    } else {
                        last->next = temp;
                    }
                    last = temp;
                }
                printf("\n");
                break;

            case 2:
                temp = head;
                while (temp != NULL) {
                    printf("%d->", temp->data);
                    temp = temp->next;
                }
                printf("NULL");
                printf("\n");
                break;

            case 3:
                printf("Enter insertion data, position: ");
                scanf("%d,%d",&InsertData,&InsertPosition);
                temp = head;
                for (i=0;i<InsertPosition-1 && temp!=NULL;i++){
                    temp = temp->next;
                }
                current = (struct node*)malloc(sizeof(struct node));
                current->next = temp->next;
                temp->next = current;
                current->data = InsertData;
                printf("Data inserted successfully!\n\n");
                break;

            case 4:
                printf("Enter the node position to delete: ");
                scanf("%d",&DeletePosition);
                temp = head;
                for (i=0;i<DeletePosition-1;i++){
                    temp = temp->next;
                }
                current = temp->next->next;
                temp->next = current;
                printf("Node deleted successfully!\n\n");
                break;

            case 5:
                printf("Enter the position1, position2 to swap: ");
                scanf("%d,%d",&swapPosition1,&swapPosition2);
                temp = head;
                for (int i=0;i<swapPosition1;i++){
                    temp = temp->next;
                }
                curr1 = temp;
                temp = head;
                for (int i=0;i<swapPosition2;i++){
                    temp = temp->next;
                }
                curr2 = temp;
                curr1->next = curr2->next;
                break;
                
            case 6:
                exit(1);

            default:
                printf("Invalid option! Please try again.\n");
        }
    }
}
