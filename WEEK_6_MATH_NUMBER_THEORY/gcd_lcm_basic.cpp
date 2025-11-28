// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
  
//   int a,b;
//   cin>>a>>b;
//   int mn=min(a,b);
//   int mx=max(a,b);
//   vector<int>v;
//   for(int i=1;i*i<=mn;i++){
//     if(mn%i==0){
//         v.push_back(i);
//         if(i!=mn/i){
//             v.push_back(mn/i);
//         }

//   }}

//   sort(v.begin(),v.end());

//   int gcd=1;
//   for(int i=0;i<v.size();i++){
//     if(mx%v[i]==0){
//         gcd=v[i];
//     }
//   }

//   cout<<gcd<<endl;
    

  
   
//   return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int a,b;
  cin>>a>>b;
  
  while(b!=0){
    int r=a%b;
    a=b;
    b=r;
  }
  cout<<a<<endl;
    

  
   
  return 0;
}

