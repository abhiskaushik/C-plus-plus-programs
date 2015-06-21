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
 int height(struct node *root){
  if(root==NULL)
    return 0;
      int l=height(root->left); cout<<"l:"<<l<<endl;
      int r=height(root->right); cout<<"r:"<<r<<endl;
  
  return(max(l,r)+1);


 }

//post order traversal...
 void del(struct node *root){
   if(root==NULL)
    return;
  del(root->left);
  del(root->right);
  cout<<"deleting:"<<root->val<<endl;
  free(root);


 }

 void mirror(struct node *root){
     if(root==NULL)
      return;
    
    mirror(root->left);
    mirror(root->right);

    struct node *temp=root->right;
     root->right=root->left;
     root->left=temp;

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

	   print(root); cout<<endl;
  	  //cout<<endl<<"size of tree"<<size(root)<<endl;
      //cout<<"height:"<<height(root)<<endl;

     // del(root); root=NULL;
     // cout<<"new tree:"<<endl;
      mirror(root);
      print(root);
     
  	return 0;
  }