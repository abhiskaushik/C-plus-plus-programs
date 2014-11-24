/*
Path in a binary search tree with a given sum

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
	 node->lc=NULL;
	 node->rc=NULL;

	 return node;
}

struct node *insert(struct node *node,int val){
	  if(node==NULL)
	  	 return newNode(val);

	  	if(val<node->val)
	  		node->lc=insert(node->lc,val);
	  	else if(node->val<val)
	  		node->rc=insert(node->rc,val);

   return node;
}

void inorder(struct node *node){
	if(node!=NULL){
		inorder(node->lc);
		cout<<node->val<<" ";
		inorder(node->rc);
	}
}

int isPath(struct node *node,int sum){
  
     if(node==NULL)
     	return (sum==0);

     else
     return isPath(node->lc,sum-(node->val)) || isPath(node->rc,sum-(node->val));
      cout<< node->val<< " ";

 

}



int main(){
   struct node *root=NULL;
    root=insert(root,10);
    insert(root,30);
    insert(root,40);
    insert(root,3);
    inorder(root);
   cout<< isPath(root,43);
  

}