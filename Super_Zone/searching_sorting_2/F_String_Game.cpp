#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  string s,t;
  cin>>s;
  cin>>t;
  int n=s.size(),m=t.size();
  vector<int>v(n);

  for(int i=0;i<n;i++){
    cin>>v[i];
  }

  auto ok=[&](int mid)->bool{
   vector<bool>deleted(n+1);
  for(int i=0;i<mid;i++){
    deleted[v[i]]=true;
  }

  int j=0;
  bool found=false;
  for(int i=0;i<n;i++){
    if(s[i]==t[j] && deleted[i+1]==false){
        j++;
    }

    if(j==m){
        found=true;
        break;
    }
  }
  return found;
    
  };


 int l=0,r=n,mid,ans;  //kotota lelter delete korte parbo oitai search space.(0 theke n ta porjnto delete possible).search space index wise korle bhul hbe.

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

