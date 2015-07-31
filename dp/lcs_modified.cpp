  #include<bits/stdc++.h>
   using namespace std;

 int lcs(string s1,string s2,int l1,int l2){
 	  if(l1==0 || l2==0)
 	  	return 0;
 	  if(s1[l1-1]==s2[l2-1])
 	  	return 1+ lcs(s1,s2,l1-1,l2-1);
 	  else
 	  	return max(lcs(s1,s2,l1-1,l2),lcs(s1,s2,l1,l2-1));
 }


   int main(int argc, char const *argv[])
   {
   	  string s1,s2;
   	  cin>>s1>>s2;
   	  int l1=s1.length();
   	  int l2=s2.length();
   	  cout<<lcs(s1,s2,l1,l2);

   	return 0;
   }