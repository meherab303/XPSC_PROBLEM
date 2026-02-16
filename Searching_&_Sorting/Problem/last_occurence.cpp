#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
   int n,q;cin>>n>>q;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   } 

   for(int i=0;i<q;i++){
    int key,l=0,r=n-1,mid,ans=-1;
    cin>>key;
    while(l<=r){
        mid=l+(r-l)/2;
        if(key==v[mid]){
            ans=mid;
            l=mid+1;
        }else if(key>v[mid]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
   }
    

  
   
  return 0;
}

