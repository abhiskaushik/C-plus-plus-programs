 //size of a BT

  #include<bits/stdc++.h>
  using namespace std;

 struct node{
  
  int val;
  struct node *left,*right;
  
 };

 struct node *insert(int x){
 	struct node *node=(struct node*)malloc(sizeof(struct node));
      node->val=x;
      node->left=NULL;
      node->right=NULL;

      return node;
 }
int ct=0;
 void print(struct node *root){
 	if(root==NULL)
 		return;
 	print(root->left);
 	cout<<root->val<<" ";ct++;
 	print(root->right);

 }
 
  int size(struct node *root){
       if(root==NULL)
       	return 0;

       return size(root->left) +size(root->right)+1;
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
	   root->right->right->right=insert(10);

	   print(root);
  	  cout<<endl<<"size of tree"<<size(root);
  	return 0;
  }