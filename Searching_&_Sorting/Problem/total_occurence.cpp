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
    int first_occ=-1,last_occ=-1;
    int key,l=0,r=n-1,mid;
    int l2=0,r2=n-1,mid2;
    cin>>key;
    while(l<=r){
        mid=l+(r-l)/2;
        if(key==v[mid]){
            first_occ=mid;
            r=mid-1;
        }else if(key>v[mid]){
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    while(l2<=r2){
        mid2=l2+(r2-l2)/2;
        if(key==v[mid2]){
            last_occ=mid2;
            l2=mid2+1;
        }else if(key>v[mid2]){
            l2=mid2+1;
        }else{
            r2=mid2-1;
        }
    }

    if(first_occ>-1 && last_occ>-1){
        cout<<last_occ-first_occ+1<<endl;
    }else{
        cout<<0<<endl;
    }
    
   }
   
   
    

  
   
  return 0;
}

