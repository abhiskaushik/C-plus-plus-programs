  #include<bits/stdc++.h>
    using namespace std;

 struct node {


 int val;
 struct node *left;
 struct node *right;


 };

struct node *CreateNode(int x){

	struct node *node=(struct node*)malloc(sizeof(struct node));
	 node->val=x;
	 node->left=NULL;
	 node->right=NULL;

	 return node;
}

void print(struct node *root){
	if(root==NULL)
		return;

	print(root->left);
	cout<<root->val<<" ";
	print(root->right);
}


int sizeoftree(struct node *root){
	if(root==NULL)
		return 0;

	return sizeoftree(root->left)+1+sizeoftree(root->right);

}

bool areIdentical(struct node *root1,struct node *root2){
  
    if(root1==NULL && root2==NULL)
       return true;

       else if(root1==NULL && root2!=NULL || root2==NULL && root1!=NULL)
        return false;

        else

        return ((root1->val==root2->val) && areIdentical(root1->left,root2->left)
         && areIdentical(root1->right,root2->right));	
}


int heightoftree(struct node *root){
	 if(root==NULL)
	 	return 0;

	 return max(heightoftree(root->left),heightoftree(root->right)) +1;
}

    int main(int argc, char const *argv[])
    { 
    	struct node *root=CreateNode(5);
    	root->left=CreateNode(10);
    	root->right=CreateNode(20);
    	root->left->left=CreateNode(30);
    	root->left->right=CreateNode(4);

    	cout<<"tree in inorder traversal is:"<<endl;
    	print(root); cout<<endl;

         cout<<"size of the tree:"<<endl;
    	 cout<<sizeoftree(root)<<endl;
    	 cout<<"heightoftree is:"<<endl;
    	 cout<<heightoftree(root)<<endl;

    	 
    	return 0;
    }