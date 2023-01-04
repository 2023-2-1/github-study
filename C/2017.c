#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode{
    char data;
    struct BiTNode *left;
    struct BiTNode *right;
}BiTNode, *BiTree;

void lookTree(BiTNode *root){
    if(root != NULL){
        
        
        lookTree(root->left);
        printf("%c", root->data);
        lookTree(root->right);
    }
}

BiTNode* CreateTree(){
    BiTNode *n1 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n2 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n3 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n4 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n5 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n6 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n7 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n8 = (BiTNode *)malloc(sizeof(BiTNode));

    n1->data = '+';
    n2->data = '*';
    n3->data = '-';
    n4->data = 'a';
    n5->data = 'b';
    n6->data = '-';
    n7->data = 'c';
    n8->data = 'd';

    


    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = n5;

    n3->left = NULL;
    n3->right = n6;

    n4->left = NULL;
    n4->right = NULL;

    n5->left = NULL;
    n5->right = NULL;

    n6->left = n7;
    n6->right = n8;

    n7->left = NULL;
    n7->right = NULL;

    n8->left = NULL;
    n8->right = NULL;


    return n1;

}

void BiTreeToExp(BiTNode *T){
    if(T!=NULL){

        if(T->left!=NULL || T->right!=NULL){
            
            if(T->left==NULL || T->left->left == NULL && T->left->right == NULL)
                printf("(");
            
        }

        BiTreeToExp(T->left);
        printf("%c", T->data);
        
        BiTreeToExp(T->right);

        if(T->left!=NULL || T->right!=NULL){
        
            if(T->right->left==NULL || T->right->right == NULL)
                printf(")");
        }
    }
}

int main(){

    BiTNode * T;
    T = CreateTree();
    // lookTree(T);
    BiTreeToExp(T);
    return 0;
}