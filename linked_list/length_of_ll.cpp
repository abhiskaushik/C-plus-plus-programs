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

  int lengthIs(struct node *head){

  	if(head==NULL)
  		return 0;

  	 return 1+ lengthIs(head->next);

  }

  int middleElement(struct node *head){
  	struct node *first=head,*second=head;

  	while(first!=NULL && first->next!=NULL){
  		 first=first->next->next;
  		 second=second->next;


  	}
  	return second->val;


  }

  int nthNodeFromEnd(struct node *head,int n){
  	 struct node *x=head,*y=head;
  	    while(n--){
  	    	x=x->next;
  	    }
  	    while(x!=NULL){
  	    	x=x->next;
  	    	y=y->next;
  	    }
  	     return y->val;

  }

void reverse(struct node **head_ref){
	 struct node *current=*head_ref;
	  struct node *prev=NULL;
	  struct node *next;

	  while(current!=NULL){
	  	next=current->next;
	  	current->next=prev;
	  	prev=current;
	  	current=next;


	  }

	  *head_ref=prev;
}



void reverseInRecursion(struct node **head_ref){
	 struct node *first,*rest;

	  if(*head_ref==NULL)
	  	 return;

	  	first=*head_ref;
	  	rest=first->next;

	  	if(rest==NULL)
	  		return;

	  	reverseInRecursion(&rest);
	  	first->next->next=first;
	  	first->next=NULL;

	  	*head_ref=rest;
}

  bool detect_loop(struct node *head){
  	 struct node *slow=head,*fast=head;

  	  while(fast && slow && fast->next){
  	  	   fast=fast->next->next;
  	  	   slow=slow->next;

  	  	   if(fast==slow)
  	  	   	return true;

  	  }

  	  return false;



  }


bool checkPalin(struct node *head){
	stack<int> s;
   
    struct node *temp=head;

	 while(head!=NULL){
	 	s.push(head->val);
	 	head=head->next;
	 }

    while(!s.empty() && temp!=NULL){
    	int top=s.top();
    	// cout<<top<<" ";
    	 if(top!=temp->val)
    	  return false;
    	     



    	 s.pop();
    	 temp=temp->next;



    }
    

    return true;


}
/*

void checkPalin2(struct node **left,struct node *right){

	 if(right==NULL)
	 	return true;

	 bool isPalin=checkPalin2(*left,right->next);

	  if(isPalin==false)
	  	return false;

	  bool temp=(*left->val==right->val);
	    *left=*left->next;

	    return temp;



}
*/
/*
 struct node *insertSorted(struct node *head,int x){
 	 struct node *node=(struct node*)malloc(sizeof(struct node));
 	   node->val=x;

 	 if(head==NULL){
 	 	 node->next=NULL;
 	 	 head=node;
 	 	 return head;

 	 }
 	 if(x<(head->val)){
 	 	node->next=head;

 	 	head=node;
        return head;
 	 }
      struct node *temp=head;
 	 while(temp!=NULL){
 	 	if(x>temp->val && x<temp->next->val){
 	 		temp->next=node;
 	 		node->next=temp->next->next;
 	 	}
 	 	temp=temp->next;
 	 }
     return head;
 }
 */
/*
 int intersection(struct node *head1, struct node *head2){

 	  struct node *temp1=head1;
 	  while(temp1!=NULL){
 	  	l1++; temp1=temp1->next;
 	  }

 	  while(temp2!=NULL){
 	  	l2++; temp2=temp2->next;
 	  }

 	  if(l1>l2){
 	  	while(abs(l1-l2)--){
 	  		head1=head1->next;
 	  	}
 	  }
 	  else{
 	  	while(abs(l1-l2)--){
 	  		head2=head2->next;
 	  	}
 	  }

 	  while(head1!=NULL){
 	  	if(head1->val==head2->val)
 	  		return head1->val;

 	  	head1=head1->next;
 	  	head2=head2->next;
 	  }




 }
 */

 void printRecursive(struct node *head){

 	 if(head==NULL)
 	 	return;

 	 printRecursive(head->next);

 	 cout<<head->val<<endl;
 }


void remove_duplicate(struct node *head){

struct node *current=head,*next_next;
	if(current==NULL)
		return;
	
	while(current->next!=NULL){
		if(current->val==current->next->val){
			next_next=current->next->next;
			free(current->next);
			current->next=next_next;
		}
		else{
			current=current->next;	
		}
	}

}


void remove_duplicate_unsorted(struct node *head){

	int hash[100000]={0};

	struct node *next_next;

	while(head->next!=NULL){
		if(hash[head->next->val]==1){
			next_next=head->next->next;
			
			free(head->next);
			head->next=next_next;

		}
		else{
			hash[head->val]=1;
		}
		head=head->next;
	}

	for (int i = 0; i <20; ++i)
	{
		/* code */
		cout<<hash[i]<<" ";
	}

}

      void swap(struct node *x, struct node *y){
        int temp=x->val;
        x->val=y->val;
        y->val=temp;
      }

void swap_pairwise(struct node *head){
	 if(head!=NULL && head->next!=NULL){
	 	swap(head,head->next);

	 	swap_pairwise(head->next->next);
	 }

}

void last_node_as_first(struct node **head){
	 if(*head==NULL || (*head)->next==NULL)
	 	return;	

	 struct node *last=*head;
	 struct node *secondlast=NULL;

	 while(last->next!=NULL){
	 	secondlast=last;
	 	last=last->next;
	 }
	 secondlast->next=NULL;
	 last->next=*head;
	 *head=last;
}


struct node *intersectionLL(struct node *headone,*headtwo){

	 if(headone==NULL || headtwo==NULL)
	 	return;

	 if(headtwo->val >headtwo->val)
	 	return intersectionLL(headone,headtwo->next);
	 if(headone->val<headtwo->val)
	 	return intersectionLL(headone->next,headtwo);

	 struct node temp=(struct node *)malloc(sizeof(struct node));
	   temp->val=headone->val;

	   temp->next=intersectionLL(headone->next,headtwo->next);

	    return temp;
}





  int main(int argc, char const *argv[])
  {
  	 int ar[]={3,5,6,2,1,4};  int ar2[]={5,1,9,0,6,1};
  	 int size=sizeof(ar)/sizeof(ar[0]);
  	 int size2=sizeof(ar2)/sizeof(ar2[0]);

      struct node *head=NULL,*headtwo=NULL;
  	 for (int i = 0; i <size ; ++i)
  	 {
  	 	/* code */
  	 	insertEnd(&head,ar[i]);
  	 }

  	 for (int i = 0; i < size2; ++i)
  	 {
  	 	/* code */
  	 	insertEnd(&headtwo,ar2[i]);
  	 }



  	//cout<<endl<<print(head)<<endl;
  	  //cout<<"lengthIs:"<<lengthIs(head);
  	//cout<<middleElement(head)<<endl;
  	//cout<<nthNodeFromEnd(head,4);
  	 //reverse(&head);
  	//reverseRec(&head);
  	 //reverseInRecursion(&head);
  	 print(head); cout<<endl;
  	 //cout<<detect_loop(head);
  	 //cout<<checkPalin(head);
       //cout<<checkPalin2(&head,head)<<endl;
      // head=insertSorted(head);

      // print(head);

  	 //cout<<intersection(head,head2)<<endl;
     // printRecursive(head);

     //remove_duplicate(head);
    // remove_duplicate_unsorted(head);
     //swap_pairwise(head);
     //last_node_as_first(&head);
     struct node *temphead;
     temphead=intersectionLL(head,headtwo);
     print(temphead);

  	return 0;
  }
