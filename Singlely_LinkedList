#include<stdio.h>
#include<stdlib.h>

struct node {
    int num;
    struct node * nextptr;
} *stnode;

void createNodeList(int n);
void displayList();

int main(){
    int n;
    printf("Input the number of nodes :");
    scanf("%d",&n);
    createNodeList(n);
    printf("Entered data:");
    displayList();
    return 0;
}

void createNodeList(int n)
{
    struct node *fnNode, *tmp;
    int num, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    if (stnode == NULL){
        printf("NO MEMORY CREATED");
    }
    else {
        printf("Enter node one:");
        scanf("%d", &num);
        stnode-> num = num;
        stnode->nextptr = NULL;
        tmp = stnode;

        for (i=2; i<=n; i++)
        {
            fnNode = (struct node *)malloc(sizeof(struct node));
            if(fnNode == NULL)
            {
                printf("MEMORY NOT CREATED");
                break;
            }
            else{
                printf("Input data for node %d:",i);
                scanf("%d", &num);
                fnNode->num = num;
                fnNode->nextptr = NULL;

                tmp->nextptr = fnNode;
                tmp = tmp->nextptr;

            }
        }
    }
}

void displayList()
{
    struct node *tmp;
    if (stnode == NULL){
        printf("List is empty");
    }
    else {
        tmp = stnode;
        while (tmp != NULL){
            printf("DATA = %d\n", tmp->num);
            tmp = tmp->nextptr;
        }
    }
}
