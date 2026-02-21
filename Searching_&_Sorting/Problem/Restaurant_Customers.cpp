#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;cin>>n;

  //approach-1
  /*
  
  
  map<int,int>mp;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    mp[a]++;
    mp[b]--;
  } 
  
  int cnt=0,max_cus=0;

  for(auto [time,val]:mp){
    cnt+=val;
    max_cus=max(cnt,max_cus);
  }
  cout<<max_cus<<endl;
  
  
  */

  //approach-2

  vector<pair<int,int>>v;
  for(int i=0;i<n;i++){
    int a,b;cin>>a>>b;
    v.push_back({a,+1});
    v.push_back({b,-1});
  }

  sort(v.begin(),v.end());

  int cnt=0,max_cus=0;

  for(auto val:v){
    cnt+=val.second;
    max_cus=max(cnt,max_cus);
  }
  cout<<max_cus<<endl;
  
    

  
   
  return 0;
}



//technique:  customer arrive korlei +1.leave korle -1 .
//map use korle sort kora laghbena karon map e by default sort thake.vector e sort kora laghbe

