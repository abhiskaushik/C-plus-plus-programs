  #include<bits/stdc++.h>
  using namespace std;

  template<class X> void swap(X *x, X *y){
          X temp=*x;
          *x=*y;
          *y=temp;
        }

   int main(int argc, char const *argv[])
        {    double a=12.7,b=10;
        	swap(a,b);
        	cout<<a<<" "<<b<<endl;

        	return 0;
        }     