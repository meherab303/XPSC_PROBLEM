#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int row,col;
    cin>>row>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<i+j<<" ";
        }
        cout<<endl;
    }

  }  
    

  
   
  return 0;
}

