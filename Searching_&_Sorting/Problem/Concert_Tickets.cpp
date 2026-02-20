#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,m;
  cin>>n>>m;
  multiset<int>mst;
  for(int i=0;i<n;i++){
    int x;cin>>x;
    mst.insert(x);
  }  

  while(m--){
    int price;cin>>price;
    auto it=mst.upper_bound(price);
    if(it==mst.begin()){
        cout<<-1<<endl;
    }else{
        --it;
        cout<<*it<<endl;
        mst.erase(it);
    }
  }
    

  
   
  return 0;
}

