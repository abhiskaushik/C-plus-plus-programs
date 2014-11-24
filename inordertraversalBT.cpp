/*
Inorder traversal of binary tree..
using recursion..
*/
#include<iostream>
#include<cstdlib>
using namespace std;

struct node
{
	/* data */
	int val;
	struct node *lc;
	struct node *rc;
};

struct node *insert(int val){

	   struct node *node=(struct node*)malloc(sizeof(struct node));
	    node->val=val;
	    node->rc=NULL;
	    node->lc=NULL;
	    return node;
}

void Inorder(struct node *root){

	if(root!=NULL){
		Inorder(root->lc);
		cout<<root->val<<" ";
		Inorder(root->rc);
	}
}

int main(){
   
    struct node *root=insert(4);

     root->lc=insert(10);
     root->lc->lc=insert(40);
     root->lc->rc=insert(30);
     root->rc=insert(45);

    Inorder(root);


	return 0;
}