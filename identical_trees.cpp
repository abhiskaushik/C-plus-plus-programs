  #include<bits/stdc++.h>
  using namespace std;

struct node
{ 
	int val;
	struct node *left,*right;
	
};


  bool check(struct node *root,struct node *root2){
  	if(root2==NULL && root==NULL)
  		return true;
  	 if(root!=NULL && root2!=NULL){
  	 	return (root->val==root2->val)&&check(root->left,root2->left)&&check(root->right,root2->right);
  	 }
  	 else
  	 	return false;
  }

 void print(struct node *root){
 	if(root==NULL)
 		return;

 	print(root->left);
 	cout<<root->val<<" ";
 	print(root->right);
 }
 
 struct node *insert(int x){
 	 struct node *node=(struct node*)malloc(sizeof(struct node));
 	   node->val=x;
 	   node->left=NULL;
 	   node->right=NULL;

 	   return node;
 }


  int main(int argc, char const *argv[])
  {
  	struct node *root=insert(1);
	   root->left=insert(2);
	   root->left->left=insert(4);
	   root->left->right=insert(5);
	   root->right=insert(3);
	   root->right->left=insert(16);
	   root->right->right=insert(7);
	   root->right->left->right=insert(8);
	   root->right->right->right=insert(9);

	struct node *root2=insert(1);
	   root2->left=insert(2);
	   root2->left->left=insert(4);
	   root2->left->right=insert(5);
	   root2->right=insert(3);
	   root2->right->left=insert(6);
	   root2->right->right=insert(7);
	   root2->right->left->right=insert(8);
	   root2->right->right->right=insert(9);

 


	   print(root); cout<<endl; print(root2);
	   
	   if(check(root,root2)==true)
	   	cout<<"same"<<endl;

	   else
	   	cout<<"diff"<<endl;

  	return 0;
  }