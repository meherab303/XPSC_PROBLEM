#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,w;cin>>n>>w;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }  
  sort(v.begin(),v.end());

  
  int gondola=0;

  int l=0,r=n-1;
  while(l<=r){
   long long child_pair_sum=v[l]+v[r];
   if(child_pair_sum>w){
    r--;
   } else{
    r--;
    l++;
   }
   gondola++;
  }
  cout<<gondola<<endl;
    

  
   
  return 0;
}


//max 2jon child gondolai jete parbe.and max_allowed weight exceed korte parbena

//highest er sathe lowest pair korte hobe.jodi pair_weight max_allowed weight exceed kore tar mane highest weight er child ekai jabe gondolai.

//jodi pair_wight max_allowed exceed na kore tahole 2jon e jabe.