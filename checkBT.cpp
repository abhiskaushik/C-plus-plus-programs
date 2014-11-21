/*
Check if a binary tree is a BST
or not..
SO inorder traversal will give a sorted sequence..

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

struct node *newNode(int val){
	struct node *node=(struct node*)malloc(sizeof(struct node));
	   node->val=val;
	   node->lc=node->rc=NULL;

	   return node;

}


int inorder(struct node *root){
       static int cur=0; 
     if(root!=NULL){
     	inorder(root->lc);
     	  
     	  if(root->val<cur)
     	       return 0;
     	   else
     	   	cur=root->val;

     	//cout<<root->val<<" ";

     	inorder(root->rc);
     }


    return 1;

}


int main(){
     struct node *root=newNode(10);
       root->lc=newNode(7);
       root->rc=newNode(15);
       root->lc->lc=newNode(4);
       root->lc->rc=newNode(9);
       root->rc->lc=newNode(13);
       root->rc->rc=newNode(17);


     cout<<inorder(root)<<endl;


	return 0;
}
