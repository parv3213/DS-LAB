#include<stdio.h> 
#include<stdlib.h> 
struct node  
{ 
    int data; 
    struct node* left; 
    struct node* right; 
}; 
struct node* newNode(int data)  
{ 
    struct node* node = (struct node*)malloc(sizeof(struct node)); 
    node->data = data; 
    node->left = NULL; 
    node->right = NULL;   
    return(node); 
} 
void deleteTree(struct node * root)
{
    if (root == NULL) return ;
    deleteTree(root->left);
    deleteTree(root->right);
    printf("Deleting node: %d", root->data);
    free(root);
}
int main() 
{ 
    struct node *root = newNode(50); 
    deleteTree(root);   
    root = NULL; 
    printf("\n Tree deleted "); 
    return 0; 
}
