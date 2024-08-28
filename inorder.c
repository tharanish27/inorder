#include <stdio.h>
#include <stdlib.h>


typedef struct TreeNode {
    int value;
    struct TreeNode* left;
    struct TreeNode* right;
} TreeNode;


TreeNode* createNode(int value) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}


void inOrderTraversal(TreeNode* root) {
    if (root == NULL) {
        return;
    }

   
    inOrderTraversal(root->left);
    
    
    printf("%d ", root->value);
    
   
    inOrderTraversal(root->right);
}


int main() {
   
    TreeNode* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    
   
    printf("In-order traversal of the binary tree:\n");
    inOrderTraversal(root);
    
    printf("\n");
    
    
    return 0;
}
