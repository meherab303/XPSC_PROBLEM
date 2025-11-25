#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int n,q;
  cin>>n>>q;

  vector<vector<long long>>forest(n+1,vector<long long>(n+1,0));

  for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){
        char c;cin>>c;
        forest[i][j]=(c=='*');
    }
  }

 for(int i=1;i<=n;i++){

    for(int j=1;j<=n;j++){
        forest[i][j]+=forest[i-1][j]+forest[i][j-1]-forest[i-1][j-1];
    }
  }


    //  for(int i=0;i<=n;i++){

    //     for(int j=0;j<=n;j++){
    //        cout<<forest[i][j]<<" ";
    //     }
    //     cout<<endl;
    //   }

    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;

        long long result=forest[x2][y2]-forest[x1-1][y2]-forest[x2][y1-1]+forest[x1-1][y1-1];
        
        cout<<result<<endl;
    }

  
   
  return 0;
}

