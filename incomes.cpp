  #include<bits/stdc++.h>
#define ll long long
using namespace std;

ll bs(ll ar[],int l,int r,int q){
    if(l>=r)
        return r+1;

    
    ll mid=l+(r-l)/2;
    
    if(ar[mid+1]>=q && ar[mid]<q)
        return mid+1;

    if(q>ar[mid])
       return bs(ar,mid+1,r,q);
     else 
       return bs(ar,l,mid-1,q);

}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     ll n;
    cin>>n;
    ll ar[n];
    for(ll i=0;i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    ll q,b;
    cin>>q;
    ll br[q];
    for(ll i=0;i<q;i++){
        cin>>br[i];
        
    }
     ll ans;
    for (ll i = 0; i < q; ++i)
    {
        /* code */
         ans=bs(ar,0,n-1,br[i]);
        cout<<ans<<endl;
    }
    return 0;
}
