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
    int l=0,r=n-1,key;
    cin>>key;

    int mid,max_index=0;
    while(l<=r){
        mid=(l+r)/2;
        if(v[mid]<=key){
            max_index=mid+1;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<max_index<<endl;
  }
    

  
   
  return 0;
}

