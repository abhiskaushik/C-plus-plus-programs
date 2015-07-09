  #include<bits/stdc++.h>
  using namespace std;


  int main(int argc, char const *argv[])
  {
  	 string s1,s2;
  	 cin>>s1>>s2;
  	 int l1=s1.length(),l2=s2.length();

  	 int max_l=max(s1.length(),s2.length());
  	 int min_l=min(s1.length(),s2.length());
  	 
  	 vector<int> a,b;
      if(l1>l2){
      	int t1=l1-l2; int i=0;
  	 while(s1[i]!='\0'){
       a.push_back(s1[i]-'0'); i++;
  	 }
  	 while(t1--){
  	 	b.push_back(0);
  	 }
  	  i=0;
  	 while(s2[i]!='\0'){
  	 	b.push_back(s2[i]-'0'); i++;
  	 }
  	}

  	else if(l2>l1){
  		int t2=l2-l1; int i=0;
  		while(s2[i]!='\0'){
  			a.push_back(s2[i]-'0'); i++;
  		}
  		while(t2--){
  			b.push_back(0);
  		}
  		i=0;
  		while(s1[i]!='\0'){
  			b.push_back(s1[i]-'0'); i++;
  		}
  	}
  	else{ 
  		int i=0;
  		while(s1[i]!='\0'){
           a.push_back(s1[i]-'0');
           b.push_back(s2[i]-'0');
  		}
  	}

  	for (int i = 0; i <a.size(); ++i)
  	{
  		/* code */
  		cout<<a[i]<<" ";
  	}
  	cout<<endl;

  	for (int i = 0; i <b.size(); ++i)
  	{
  		/* code */
  		cout<<b[i]<<" ";
  	}
  cout<<endl;

 int sum[max_l];
   int carry=0;
  for (int i =max_l-1; i>=0; --i)
  {
  	/* code */
  	sum[i]=(a[i]+b[i]+carry)%10;
  	if(a[i]+b[i]+carry>=10)carry=1;
  	else
  		carry=0;
  }

  for (int i = 0; i <max_l ; ++i)
  {
  	/* code */
  	cout<<sum[i]<<" ";
  }



  	return 0;
  }