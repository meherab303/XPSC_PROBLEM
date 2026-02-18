#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  sort(v.begin(),v.end());
  
  int q;cin>>q;
  for(int i=0;i<q;i++){
    int key;cin>>key;
    auto it=upper_bound(v.begin(),v.end(),key);
    int total_shops=it-v.begin();
    cout<<total_shops<<endl;
  }  
    

  
   
  return 0;
}

