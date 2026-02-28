#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,k;cin>>n>>k;
  vector<int>v(n);
  for(auto &val:v){
    cin>>val;
  }  
 
  sort(v.begin(),v.end());

  auto ok=[&](int median){
    long long cnt=0;
    for(int i=n/2;i<n;i++){
        cnt+=median>v[i]?(median-v[i]):0;
    }
    return cnt<=k;
  };

 
  int l=1,r=2e9,mid,ans;

  while(l<=r){
    mid=l+(r-l)/2;

    if(ok(mid)){
        ans=mid;
        l=mid+1;
    }else{
        r=mid-1;
    }
  }
  cout<<ans<<endl;
    

  
   
  return 0;
}


/*
     ----reason behind Binary search On answer----

1)Required number of operation e monotonic behavior ache(monotonic true/false pattern ache) 
2)Maximum chaise

*/

