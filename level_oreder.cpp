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
  int ar[1000]={0};
//int temp=0;
 void root_to_leaf(struct node *root,int temp){
    if(root==NULL)
      return;

    //if(root!=NULL)
       ar[temp]=root->val; temp++;//v.push_back(root->val); temp++;

    if(root->left==NULL && root->right==NULL){
      for (int i =0; i <temp; ++i)
      {
        /* code */ cout<<ar[i]<<" ";
      }
      cout<<endl; //v.erase(v.begin(),v.end());
    }

    root_to_leaf(root->left,temp);
    root_to_leaf(root->right,temp);


 }

void printlevel(struct node *root,int l){
  if(root==NULL)
    return;

  if(l==1){
    cout<<root->val<<" ";
  }
  else if(l>1)
    printlevel(root->left,l-1);
    printlevel(root->right,l-1);

}

 void level_order(struct node *root){
   int h=height(root);
   for (int i = 1; i <=h; ++i)
   {
        printlevel(root,i);
        cout<<endl;
   }
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
      //mirror(root);
      //print(root);
    // root_to_leaf(root,0);
      level_order(root);
  	return 0;
  }