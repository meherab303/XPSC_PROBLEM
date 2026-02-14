#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,q;
  cin>>n>>q;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  } 
  
  for(int i=0;i<q;i++){
    int key;cin>>key;
    int l=0,r=n-1,mid;
    bool found=false;
    while(l<=r){
        mid=(l+r)/2;
        if(key==v[mid]){
            found=true;
            break;
        }else if(key<v[mid]){
            r=mid-1;
        }else{
            l=mid+1;
        }

    }
    if(found){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
  } 
    

  
   
  return 0;
}

