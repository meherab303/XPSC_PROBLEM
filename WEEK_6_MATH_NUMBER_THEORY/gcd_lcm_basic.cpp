#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  int a,b;
  cin>>a>>b;
  int chuto=min(a,b);
  int boro=max(a,b);
  vector<int>v;
  for(int i=1;i*i<=chuto;i++){
    if(chuto%i==0){
        v.push_back(i);
        if(i!=chuto/i){
            v.push_back(chuto/i);
        }

  }}

  sort(v.begin(),v.end());

  int gcd=1;
  for(int i=0;i<v.size();i++){
    if(boro%v[i]==0){
        gcd=v[i];
    }
  }

  cout<<gcd<<endl;



  //LCM
  long long i=1;
  while(true){
    long long lcm=boro*i;
    if(lcm%chuto==0){
        cout<<lcm<<endl;
        break;
    }
    i++;
  }
    

  
   
  return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//   ios::sync_with_stdio(0);
//   cin.tie(0);
//   int a,b;
//   cin>>a>>b;
  
//   while(b!=0){
//     int r=a%b;
//     a=b;
//     b=r;
//   }
//   cout<<a<<endl;
  
  
   
//   return 0;
// }

