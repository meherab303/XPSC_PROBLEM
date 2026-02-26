#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,p;cin>>n>>p;
  vector<int>v(n);

  int min_making_time=INT_MAX;
  for(int i=0;i<n;i++){
   cin>>v[i];
   min_making_time=min(v[i],min_making_time);
  }  

  auto total_product=[&](long long sec){  //lambda func
    long long cnt=0;
    for(int i=0;i<n;i++){
        cnt+=sec/v[i];   
    }
    return cnt;
   
  };

  long long max_time_needed=p*(long long)min_making_time;

  long long l=1,r=max_time_needed,mid,ans;
  

  while(l<=r){
     mid=l+(r-l)/2;
     long long product=total_product(mid);

    if(product>=p){
        ans=mid;
        r=mid-1;
    }else{
        l=mid+1;
    }

  }

  cout<<ans<<endl;
    

  
   
  return 0;
}


//binary search on ans--> ans e time chaise.binary search time er upor korse tai binary search on ans.  

//jei machine er min time lage ekta product banaite ,oi machine * total product e hbe max time .eitai l,r er range hbe .

