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
    int key,l=0,r=n-1,mid;
    cin>>key;
    int min_index=n+1;
    while(l<=r){
        // mid=(l+r)/2;// eivabe mid calculate korle overflow hbe.karon (l+r) jug hoye long long e chole jete pare.

        //alternative
        mid=l+(r-l)/2;  //(2l+r-l)/2==(l+r)/2;
        if(v[mid]>=key){
            min_index=mid+1;
            r=mid-1;
        }else{
            l=mid+1;
        }
    }
    cout<<min_index<<endl;
  }

    

  
   
  return 0;
}

