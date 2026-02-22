#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   int n;cin>>n;

   /*
   vector<pair<int,int>>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=i;
   }
   
   sort(v.begin(),v.end());


   int round=1;
   for(int i=0;i<n-1;i++){
    if(v[i].second>v[i+1].second){
        round++;
    }
   }
   cout<<round<<endl;
   */

   //using position array

   vector<int>v(n+1);
   for(int i=1;i<=n;i++){
    int x;
    cin>>x;
    v[x]=i;
   }
   int round=1; //minimum 1ta round to laghbei.

   for(int i=1;i<n;i++){
    if(v[i]>v[i+1]){
        round++;
    }
   }
   cout<<round<<endl;
   
    

  
   
  return 0;
}

