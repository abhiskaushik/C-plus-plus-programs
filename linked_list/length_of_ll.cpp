    #include<bits/stdc++.h>
  using namespace std;

  struct node {
  	int val;
  	struct node *next;
  };

  void insertEnd(struct node **head_ref,int x){
  	struct node *node=(struct node*)malloc(sizeof(struct node));
  	  
  	  node->val=x;
  	  node->next=NULL;
         if(*head_ref==NULL){
         	*head_ref=node;
         	return;
         }

  	  //*head->next=node;
      struct node *temp=*head_ref;
  	  while(temp->next!=NULL){
  	  	temp=temp->next;
  	  }
  	  temp->next=node;



  }

  int print(struct node *head){
  	 int ct=0;
  	while(head!=NULL){
  		cout<<head->val<<" ";
  		head=head->next;
  		ct++;
  	}
   return ct;

  }

  int main(int argc, char const *argv[])
  {
  	 int ar[]={3,4,2,4,5,-1,0,2};
  	 int size=sizeof(ar)/sizeof(ar[0]);
      struct node *head=NULL;
  	 for (int i = 0; i <size ; ++i)
  	 {
  	 	/* code */
  	 	insertEnd(&head,ar[i]);
  	 }

  	 cout<<endl<<print(head);
  	
  	return 0;
  }
