#include <stdlib.h>
#include <stdio.h>
#include <time.h>
typedef struct node
    {
    int data;
    struct node *l;
        struct node *r;
    }TreeNode;

TreeNode* create(void){
    return NULL;
}
TreeNode* search(TreeNode* root, int target){
    if (root ==NULL){
        return NULL;
    }
    if (root->data == target){
        return root;
    }
    if (root->data<target){
        return search(root->r, target);
    }
    else{
        return search(root->l, target);
    }
}
TreeNode* insert(TreeNode* root,int data){
    TreeNode* new_node = (TreeNode*)malloc(sizeof(TreeNode));
    new_node->l=NULL;
    new_node->r=NULL;
    new_node->data=data;
    if (root==NULL){
        return new_node;
    }
    if (data>=root->data){
        root->r = insert(root->r, data);
    }else{
        root->l=insert(root->l, data);
    }
    return root;
}
void print(TreeNode *root){
    if (root==NULL){
        return;
    }
    print(root->l);
    printf("%4d",root->data);
    print(root->r);
}
#define SIZE 20
int main(void){
    srand(time(NULL));
    TreeNode* pt = create();
    for (int i =0 ;i< SIZE;i++){
        pt = insert(pt,rand() %100);
    }
    print(pt);
    printf("\n");
}
