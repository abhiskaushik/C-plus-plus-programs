  #include<bits/stdc++.h>
  using namespace std;
  
   struct node {
     int val;
     struct node *next,*prev;
   };

  void insertFront(struct node **head_ref,int x){
     struct node *node=(struct node*)malloc(sizeof(struct node));
           node->val=x;
           node->prev=NULL;
           node->next=(*head_ref);

    if(*head_ref!=NULL)
    	node->prev=node;

    *head_ref=node;

  }

  void insertEnd(struct node **head_ref,int x){
  	struct node *node=(struct node*)malloc(sizeof(struct node));
  	 node->val=x;
  	 node->next=NULL;
       
       struct node *temp=*head_ref;

  	 if(*head_ref==NULL){
  	 	node->prev=NULL;
  	 	*head_ref=node;
  	 	return;
  	 }

  	 while(temp->next!=NULL){
        temp=temp->next;
  	 }
  	 temp->next=node;
  	 node->prev=temp;

  	 return;

}

  void insertAfter(struct node *prev_node,int x){
  	 struct node *new_node=(struct node*)malloc(sizeof(struct node));
  	   new_node->val=x;
  	   new_node->prev=prev_node;
  	   new_node->next=prev_node->next;

  	    prev_node->next=new_node;

  	    if(new_node->next!=NULL)
  	    	new_node->next->prev=new_node;

  }

  void print(struct node *head){
  	struct node *last=head;
  	while(head!=NULL){
  		cout<<(head->val)<<" ";
  		last=head;
  		head=head->next;
  	}
  	cout<<endl;
  	//head=head->prev->prev;
  	//cout<<head->val<<"has";

  	while(last!=NULL){
  		cout<<last->val<<" ";
  		last=last->prev;
  	}
  }


  int main(int argc, char const *argv[])
  {   struct node *head=NULL;
  	 insertFront(&head,2);
  	 insertFront(&head,3);
  	 insertFront(&head,12);
  	 insertAfter(head->next,52);
  	 insertEnd(&head,20);

  	 print(head);



  	
  	return 0;
  }