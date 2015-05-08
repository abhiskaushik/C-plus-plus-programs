/*m,,,gfee,m
project euler
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

class ProjectEuler{

private:
  
  //ll primes[100000];

public:
   ProjectEuler(){}
/*  helper functions   */
              ll gcd(ll x, ll y){
                
        
                if(x==0)
                 return y;
                
                 else if(y>=x && x>0)
                   return gcd(y%x,x);

                   else
                   return 0; 
              
              }

               ll lcm(ll x, ll y){

               	 return (x*y)/gcd((x<y)?x:y,(x>y)?x:y);
               }
        
          

       bool isPrime(ll k){
          if(k<=1)
           return false;
          else if(k<=3)
           return true;
          else if(k%2==0 || k%3==0)
           return false;
   
          ll i=5;
          while(i*i<=k){
            if(k%i==0 || k%(i+2)==0)
             return false;
   
            i+=6; 
          }
          
          return true;  
   
   
       }

       bool isPalindrome(ll n){
       	  ll num=n,rev=0;

       	 while(n>0){
       	 	int last_digit=n%10;
       	 	 rev=rev*10+last_digit;
       	 	 n=n/10;
       	 }
       	 if(rev==num)
       	 	return true;
       	 else
       	 	return false;

       }
   
    void generatePrimes(ll n){
        ll primes[100000];
         
         for (int i = 0; i <=n; ++i)
         {
            primes[i]=1;
         }


         ll s=sqrt(n);

        for (ll i = 2; i <=s; ++i)
        {      //cout<<primes[i]<<endl;
        	  
        	  if(primes[i]==1){

        	  	  //ll multiple_factor=2;
        	  
        	  	for (ll multiple_factor=2,j=i*multiple_factor; j <=n; multiple_factor++)
        	  	{ 
        	  	    primes[j]=0;	 
        	  	}
        	  
        	  }
        }

        for (int i =2; i <=n; ++i)
        {
            printf("%lli ",primes[i]);
        }
    
    }   



//sum of multiples of 3 & 5.
   void pe1(){
   	ll n,t;
   	scanf("%lli",&t);
   	while(t--){

   	scanf("%lli",&n);
   	ll m=n-1;
   	ll p1=(m/3*(m/3+1))/2;
   	ll p2=(m/5*(m/5+1))/2;
   	ll p3=(m/15*(m/15+1))/2;
   	printf("%lli\n",3*p1+5*p2-15*p3);


   }	
}
  //fibonaccii
  void pe2(){
  	ll t;
  	scanf("%lli",&t);
  	while(t--){
  		ll n;
  		scanf("%lli",&n);
  		ll fib=0,fib1=1,fib2=2,sum=0;
  		while(1){

  			 fib=(fib1+fib2);

              if(fib>n)
              	break;

 
  			 
  			 if(fib%2==0)
  			   sum+=fib;
            
            fib1=fib2;
            fib2=fib;

  		}
  		printf("%lli\n",sum+2);
  	}


  }
 
  
    //largest prime factor..
   void p3(){

      //use seive erotho to find all prime factors upto n..
   	   ll n,t;
   	    scanf("%lli",&t);
   	    while(t--){
   	     scanf("%lli",&n);

   	   if(isPrime(n)){
   	   	 printf("%lli\n",n);
   	   }
   	   else{
       ll largest=1;
     for (int i=n/2; i>1; --i)
     {
     	 if(isPrime(i) && n%i==0 && i>largest)
     	 	largest=i;
     }

     printf("%lli\n",largest);


   }
   
    }
}

 void p3A(){
 	ll n,t;
 	 scanf("%lli",&t);
 	while(t--){
 
 	scanf("%lli",&n);
 	ll p=1,f;
 	for (ll f=2;f*f<=n; ++f)
 	{
 		 while(n%f==0){
 		 	p=f;
 		 	n/=f;
 		 }
 	}
 	if(n>1)
      p=n;

 	printf("%lli\n",p);
 
 }
 
 }

 void p4(){
 	ll n,t;
 	  scanf("%lli",&t);
 	  while(t--){
 	  	  scanf("%lli",&n);
 	  	   for (ll i = n-1; i>101101 ;i--)
 	  	   {
 	  	   	 if(isPalindrome(i)){
 	  	   	 	printf("%lli\n",i);
 	  	   	 	break;
 	  	   	  }
 	  	   }

 	  }
 }

 void p5(){
 	ll t,n;
 	  //scanf("%lli",&t);
 	  cin>>t;
 	   while(t--){
 	  	   //scanf("%lli",&n);
 	  	    cin>>n;

 	  	    ll new_lcm=1;
 	  	   for (ll i =2; i<=n; ++i)
 	  	   {
 	  	   	  new_lcm=lcm(new_lcm,i);
 	  	   	  //printf("%lli\n",new_lcm);
 	  	   	   

 	  	   }
          //printf("%lli\n",new_lcm);
 	  	   cout<<new_lcm<<endl;
 	  }
 }


};


int main(){

 ProjectEuler pe;
 //pe.pe1();
 //pe.pe2();
  //pe.p3();
 //pe.generatePrimes(20);
  //cout<<pe.isPrime(7919);
  //pe.p3A();
 //cout<<pe.isPalindrome(10001)<<endl;
// pe.p4();
   pe.p5();
   //cout<<pe.gcd(0,36)<<endl;

 return 0;

}