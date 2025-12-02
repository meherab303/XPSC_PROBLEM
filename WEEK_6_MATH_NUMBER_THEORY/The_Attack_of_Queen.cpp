#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n,x,y;
    cin>>n>>x>>y;
    long long total_attack= 2*(n-1) //top-down +left-right
                            +min(x-1,y-1)  //top-left(row and col 2tai kome.tai je age 0 hbe.)
                            +min(x-1,n-y) //top-right(row kome,col bare.tai je age 0 othoba n hote pare)
                            +min(n-x,y-1) //bottom-left(row bare,col kome.tai je age n othoba 0 hbe)
                            +min(n-x,n-y);  //bottom-right(row col 2tai bare.tai je age n hbe)
    
    cout<<total_attack<<endl;
  }
   
  return 0;
}

