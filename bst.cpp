#include<bits/stdc++.h>
  using namespace std;

 struct node
 { 
 	 int val;
 	 struct node *lc,*rc;

 	
 };

  struct node *newNode(int x){
       struct node *new_node=(struct node*)malloc(sizeof(struct node));
         new_node->val=x;
         new_node->lc=NULL;
         new_node->rc=NULL;
  }

   void print(struct node *root){

   	   if(root==NULL)
   	   	 return;

   	   	print(root->lc);
   	   	cout<<(root->val)<<" ";
   	   	print(root->rc);

   }


  struct node *insertBST(struct node *root,int val){
  
  	    if(root==NULL)
  	    	return newNode(val);

  	    if(val>(root->val))
  	    	root->rc=insertBST(root->rc,val);
  	    else
  	    	root->lc=insertBST(root->lc,val);

  	    return root;

  }

 int minVal(struct node *root){
  	if(root->lc==NULL)
  		return root->val;

  	return minVal(root->lc);


}
  int main(int argc, char const *argv[])
  {
  	 int ar[]={3,6,12,5,10,7};
  	  int size=sizeof(ar)/sizeof(ar[0]);
      struct node *root=NULL;
      for (int i = 0; i <size; ++i)
      {
      	/* code */
      	 root=insertBST(root,ar[i]);
      }
     print(root);
    cout<<"Minimum Val"<<endl;
     cout<<minVal(root)<<endl;
  	return 0;
  }