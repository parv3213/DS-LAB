#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left, *right;
}; 
typedef struct node node;

node *root = NULL;

node *newNode(int key)
{
    node * temp = (node *)malloc(sizeof(node));
    temp->key = key;
    temp->left = NULL;
    temp->right= NULL;
    return temp;
}

node *insertNode(node *root, int key )
{
    if (root == NULL) return newNode(key);
    if (key < root->key)
    {
        root->left = insertNode(root->left,key);
    }
    else if(key> root->key) {
        root-> right = insertNode(root->right,key);
    }
    return root;
}

void deleteNode(node *root){
    if (root == NULL) return ;
    deleteNode(root->left);
    deleteNode(root->right);
    printf("Deleting node %d\n", root->key);
    free(root);
}

void inorder(node *root)
{
    if (root != NULL){
        inorder(root->left);
        printf("%d\n", root->key);
        inorder(root->right);
    }
}

void preOrder (node *root)
{
    if (root == NULL ) return ;
    printf("%d:",root->key);
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(node *root){
    if (root == NULL ) return ;
    postOrder(root->left);
    postOrder(root->right);
    printf("%d:",root->key);
}

void searchNode(node *root, int key){
    if (root == NULL) {
        printf("Not Exists");
    }
    else if (root->key == key){
        printf("Found!");
    }
    else if (key > root->key){
        searchNode(root->right, key);
    }
    else{
        searchNode(root->left, key);
    }
}

int main()
{
    int n , key;
    node *root = insertNode( NULL , 50);
    root =insertNode(root, 10);
    root = insertNode(root, 44);
    root = insertNode(root, 1);
    root = insertNode(root, 55);
    inorder(root);

    printf("Enter Choice :");
    scanf("%d", &n );
    if (n ==1){
        printf("Enter to search:");
        scanf("%d",&key);
        searchNode(root, key);
    }
    else if  (n == 2 )
    {    deleteNode(root);
        root = NULL;
        printf("%p", root);
    }
    else if (n==3){
        preOrder(root);
    }
    else if (n ==4){
        postOrder(root);
    }
    return 0;
}
