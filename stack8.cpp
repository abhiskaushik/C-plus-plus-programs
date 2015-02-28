/*
reversing a string without using extra space of stack..
*/

#include<iostream>
#include<string>
using namespace std;
/*
class Reverse{
  private:
  	int i,j;
  
  public:
      
      Reverse(){
      	i=0;
      }

    void swap(char *a,char *b){
         char temp=*a;
         *a=*b;
         *b=temp;
    }

  	string rev(string str){
       j=str.length()-1;
       while(i<j){
       	swap(&str[i],&str[j]);
       }
       return str;
  	}


};
*/
void swap(char *a,char *b){
	char temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
    
  //  Reverse r;
    string s;
    cin>>s;

   //string t=r.rev(s);
   int i=0,j=s.length()-1;
    while(i<j){
    	swap(&s[i],&s[j]);
    	i++; j--;
    }
   
	cout<<s<<endl;

}
