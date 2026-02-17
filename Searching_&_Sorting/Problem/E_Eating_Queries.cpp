#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
      int n,q;
      cin>>n>>q;

      vector<int>v(n),pref(n);
      for(int i=0;i<n;i++){
        cin>>v[i];
      }

      sort(v.begin(),v.end(),greater<int>());

      pref[0]=v[0];
      for(int i=1;i<n;i++){ 
        pref[i]=pref[i-1]+v[i];
      }

      //using binary search
    //   for(int i=0;i<q;i++){
    //     int key,l=0,r=n-1,mid;
    //     cin>>key;
    //     int ans=-1;
    //     while(l<=r){
    //         mid=l+(r-l)/2;
    //         if(key==pref[mid]){
    //             ans=mid+1;
    //             break;
    //         }else if(key<pref[mid]){
    //             ans=mid+1;
    //             r=mid-1;
    //         }else{
    //             l=mid+1;
    //         }
    //     }
    //     cout<<ans<<endl;
    //   }
   

    //using lower_bound
    for( int i=0;i<q;i++){
        int key,ans=-1;cin>>key;
        auto it=lower_bound(pref.begin(),pref.end(),key);
        if(it!=pref.end()){
            ans=(it-pref.begin())+1;
        }
        cout<<ans<<endl;
    }
  }


    

  
   
  return 0;
}

