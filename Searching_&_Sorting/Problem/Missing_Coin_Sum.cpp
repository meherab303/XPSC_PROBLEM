#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;cin>>n;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  } 
  
  sort(v.begin(),v.end());

  long long sum=0;
  for(int i=0;i<n;i++){
    if(v[i]-sum<=1){   //(v[i]-sum==1 || v[i]<=sum) equal to v[i]-sum<=1
        sum+=v[i];
    }
    else{
        break;
    }
  }
  cout<<sum+1<<endl;
    

  
   
  return 0;
}


//sort korar por jodi v[i], sum theke 1 boro hoi othoba sum er shoman ba chuto hoi tahole 1 theke sum+v[i] porjnto shob sum bananu jabe.karon 1 boro hole next value ta automatic bananu jabe.

//example dhori sum=7.mane ami 1 theke 7 porjnto shob sum create korte pari(1,2,3,4,5,6,7).erporer value ashlo 8.tahole 7+8=15 porjnto shob sum bananu jabe.like 8 ,8+1=9,8+2=10,8+3=11,8+4=12,8+5=13,8+6=14,8+7=15.

//kintu jdi 1 er theke beshi boro hoi tahole minimum sum+1 value ta ar bananu jabena.
