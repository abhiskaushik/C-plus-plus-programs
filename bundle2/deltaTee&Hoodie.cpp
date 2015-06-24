  #include<bits/stdc++.h>
  using namespace std;
  #define ll long long

  ll gcd1(ll x,ll y){
      	if(y%x==0)
      		return x;

      	return gcd1(y%x,x);
      }

ll gcd(ll a, ll b){
        ll gr=(a>b)?a:b,sm=(a<b)?a:b;
	   return  gcd1(gr,sm);

      //return 0;
      
      }


 

      

     


      int main(int argc, char const *argv[])
      {
          ifstream ifile,ifile2;
          ifile.open("input.txt");
          ifile2.open("input.txt");
          ofstream ofile;
          ofile.open("output.txt");
             
             int cnt=0; int t; string fline;
          /*while(getline(ifile,fline)){
                 if(cnt>0)break;

               istringstream iss(fline); cout<<"hey"<<fline<<endl;
               int val;
               while(iss>>val)
               {
   
                     t=val;
                 
               }
               cnt++;

          } */


      	 
      	 //cin>>t;
          //string t; 
          int ctr=0;
          while(ctr<=0){
            ifile2>>t; ctr++;
          }
          //while(ifile>>t)
          cout<<t<<"from input file"<<endl;
          
   // int tc=t[1]-'0';
          //ll hash[4]={0};
          ll hash[4];
  // while(t--){
	
	//cin>>a>>b>>x>>y;
  //int ar[]={a,b,x,y};
 string line;  ll lm=0;
while(getline(ifile,line)){
               
                if(lm>0){
                 ll a,b,x,y;
                

               istringstream iss(line); //cout<<"hey"<<fline<<endl;
               int val; int rk=0; //ll temp; 
               
               while(iss>>val)
               {
                      //cout<<val;
                       
                        hash[rk++]=val;
                       // cout<<hash[rk]<<" "; rk++;

                       //temp=val;
                       //a=temp; 
                     //cout<<hash[rk]<<" ";
                       // rk++;
                 
               }
               rk=0;
              // cout<<endl;
             //cout<<hash[0];           

         for (int i = 0; i <4; ++i)
         {
           /* code */ 
          cout<<hash[i]<<" ";
         }
         cout<<endl;

   
	if(gcd(hash[0],hash[1])==gcd(hash[2],hash[3]))
		ofile<<1<<endl; //cout<<1<<endl;
	else
	 ofile<<0<<endl; //cout<<0<<endl;

	

  }
  lm++;
}
//}

      	return 0;
}
