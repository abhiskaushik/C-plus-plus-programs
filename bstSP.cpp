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
 
  return new_node;
 }

 void findSP(struct node *root, struct node*& suc, struct node*& pred,int k){
    if(root==NULL)
    	return;

    if(k==root->val){
    	if(root->lc!=NULL){
            struct node *temp=root->lc;
    		while(temp->rc){
    			temp=temp->rc;
    		}
    		pred=temp;
    	}

    	if(root->rc!=NULL){
    		struct node *temp=root->rc;
    		while(temp->lc){
    			temp=temp->lc;
    		}
    		suc=temp;
    	}
    }

    if(k<root->val){
    	suc=root;
    	findSP(root->lc,suc,pred,k);

    }
    else{
    		pred=root;
    		findSP(root->rc,suc,pred,k);
    }


 }


 struct node *insert(struct node *root,int x){
      if(root==NULL)
      	 return newNode(x);

      if(root->val > x)
      	root=insert(root->lc,x);

      else
      	root=insert(root->rc,x);

      return root;
 }


  int main(int argc, char const *argv[])
  {  
  	 int ar[]={50,30,70,20,40,60,80};
  	 int size=sizeof(ar)/sizeof(ar[0]);
       struct node *root=NULL;
  	 for (int i = 0; i <size; ++i)
  	 {
  	 	/* code */
  	 	root=insert(root,ar[i]);
  	 }
     struct node *suc=NULL, *pred=NULL;
     int k=30;
     //cin>>k;
  	 findSP(root,suc,pred,k);
      cout<<suc->val<<endl;
      cout<<pred->val<<endl;
  	
  	return 0;
  }