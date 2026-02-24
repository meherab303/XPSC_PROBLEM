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
  
  int mid=(n-1)/2;
  sort(v.begin(),v.end());
  int target=v[mid];

  long long cost=0;
  for(auto val:v){
    cost+=abs(target-val);
  }
  cout<<cost<<endl;
    

  
   
  return 0;
}


//absulate difference e median value niye kaj korte hoi.

