#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n,k;cin>>n>>k;
    auto not_divisible=[&](int mid){
        return (mid-(mid/n))>=k;   // kotota divisible noi =(mid-mid/n).
    };

    int l=1,r=2e9,mid,ans=0;
    while(l<=r){
        mid=l+(r-l)/2;
        if(not_divisible(mid)){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
  }  
    

  
   
  return 0;
}




//mathmatical approach--> cout<< k + (k-1/n-1) <<endl;

/*

যদি সব সংখ্যা valid হত, তাহলে উত্তর হতো k. ekhon majhkhane skip kora lage jeigula divisible.tai k+skip== ans
skip=k-1/n-1;
k er age k-1 ta not divisible ache
proti n er jnno not divisible n-1 ta.

tahole n-1 tar jonno divisible 1ta
1 tar jonno divisble 1/n-1;
k-1 tar jnno divisible k-1/n-1;

*/