  #include<bits/stdc++.h>
  using namespace std;

  void permute(const string& s){
      string s1=s;
      sort(s1.begin(),s1.begin());
      do{
      	 cout<<s1<<endl;
      }
      while(next_permutation(s1.begin(),s1.end()));
  }


  int main(int argc, char const *argv[])
  {
  	 int t;
  	 cin>>t;
  	 while(t--){
  	 	string s;
  	 	cin>>s;
  	 	permute(&s[0]);
  	 }
  	return 0;
  }