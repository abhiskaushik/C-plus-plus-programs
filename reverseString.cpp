/*
Strings..
Printing reverse of a string..
*/
#include<iostream>
#include<string>
using namespace std;

void rever(string *s){
     
    if(s!=NULL){
    	//return;

       rever(s+1);
	   cout<<(*s); 
   }

	 //cout<<*s;

}


int main(){
 
     string s;
      cin>>s;
     rever(&s);
    

	return 0;
}