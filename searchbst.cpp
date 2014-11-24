/*
Search in a BST..

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

struct node *insert(struct node *node,int val){
     
       if(node==NULL)
       	  return newNode(val);
      
          if(val>node->val)
          node->rc=insert(node->rc,val);
           else if(val<node->val)
           	node->lc	= insert(node->lc,val);
	      
      
	return node;
}

void print(struct node *root){
	if(root!=NULL){
          print(root->lc);
          cout<<root->val<<" ";
          print(root->rc);
	}
}

int search(struct node *root, int val){
      
        if(root==NULL)
        	return 0;

        if(root->val==val)
        	return 1;
         
        if(val<root->val)
          search(root->lc,val);
          
          else if(val>root->val)
          search(root->rc,val); 



}


int main(){
   struct node *root=NULL;
    root=insert(root,10);
     insert(root,20);
     insert(root,4);
     insert(root,12);

   print(root);
   cout<<search(root,5);

}