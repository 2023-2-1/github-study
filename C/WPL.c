#include <stdio.h>
#include <stdlib.h>
typedef struct BiTNode{
    int weight;
    struct BiTNode *left;
    struct BiTNode *right;
}BiTNode, *BiTree;


static int wpl = 0;

void WPL(BiTNode *r, int depth){
    if(r!=NULL){
        // printf("%d", r->weight);
        if(r->left==NULL&&r->right==NULL){
            wpl += r->weight * depth;
        }
        WPL(r->left, depth+1);
        WPL(r->right, depth+1);
    }
}

void lookTree(BiTNode *root){
    if(root != NULL){
        printf("%d", root->weight);
        
        lookTree(root->left);
        lookTree(root->right);
    }
}

BiTNode* CreateTree(){
    BiTNode *n1 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n2 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n3 = (BiTNode *)malloc(sizeof(BiTNode));
    BiTNode *n4 = (BiTNode *)malloc(sizeof(BiTNode));

    n1->weight = 2;
    n2->weight = 1;
    n3->weight = 3;
    n4->weight = 5;

    n4->left = NULL;
    n4->right = NULL;

    n3->left = NULL;
    n3->right = NULL;

    n1->left = n2;
    n1->right = n3;

    n2->left = n4;
    n2->right = NULL;

    return n1;

}

int main(){
    
    BiTNode *T;
    T = CreateTree();

    lookTree(T);
    printf("\n");

    
    WPL(T, 0);
    printf("%d", wpl);

    return 0;
}