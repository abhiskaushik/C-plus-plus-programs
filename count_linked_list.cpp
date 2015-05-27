 #include<bits/stdc++.h>
 using namespace std;

  struct node
  {  int val;
  	 struct node *next;
  	
  };

   struct node *allocateNode(){
     struct node *new_node=(struct node*)malloc(sizeof(struct node));
      return new_node;
   }


void append(struct node **head_ref,int x){
	
		struct node *new_node=allocateNode();
		 new_node->val=x;
		 new_node->next=NULL;
	
	  if((*head_ref)==NULL){
	  	 (*head_ref)=new_node;
	  	 return;
	  }


	struct node *temp=(*head_ref);
	while(temp->next!=NULL){
		temp=temp->next;
	}
     temp->next=new_node;
	 

}

void printLL(struct node *head){
	struct node *temp=head;
	while(temp!=NULL){
		cout<<temp->val<<" ";
		 temp=temp->next;
	}
	cout<<endl;
}

int count_list(struct node *head,int ctr){
   if(head==NULL)
   	return ctr;

   return count_list(head->next,ctr+1);
}


  int main(int argc, char const *argv[])
  {
  	struct node *head=NULL;
  	 int vals[]={20,30,40,50,100};
       int size=(sizeof(vals)/sizeof(vals[0]));
       for (int i = 0; i <size; ++i)
       {
       	/* code */ append(&head,vals[i]);
       }
  	printLL(head);
    cout<<count_list(head,0)<<endl;
  	return 0;
  }