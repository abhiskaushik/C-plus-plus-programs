#include<bits/stdc++.h>
  using namespace std;

  struct node{
  	int val;
  	struct node *left,*right;
  };



  struct node *insert(int x){

  		//newNode(x);
 struct node *new_node=(struct node*)malloc(sizeof(struct node));
         new_node->val=x;
         new_node->left=NULL;
         new_node->right=NULL;
         return new_node;
  }

void print(struct node *root){
	if(root==NULL)
		return;
	print(root->left);
	//hash[]
	cout<<root->val<<" ";
	print(root->right);
}

int main(int argc, char const *argv[])
{
	struct node *root=insert(1);
	   root->left=insert(2);
	   root->left->left=insert(4);
	   root->left->right=insert(5);
	   root->right=insert(3);
	   root->right->left=insert(6);
	   root->right->right=insert(7);
	   root->right->left->right=insert(8);
	   root->right->right->right=insert(9);

	   print(root);
	return 0;
}