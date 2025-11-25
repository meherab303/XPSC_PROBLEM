#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  

      int n;cin>>n;

    //   for(int i=1;i<=n;i++){    //O(n);
    //     if(n%i==0){
    //         cout<<i<<" ";
    //     }
    //   }



    deque<int>dq;
  //O(sqrt(n));
  for(int i=1;i*i<=n;i++){   //i<=sqrt(n) == i*i<=n
    if(n%i==0){
        cout<<i<<" ";

        if(i!=(n/i)){
            dq.push_front(n/i);
        }
       
    }
  }

  for(auto x:dq){
    cout<<dq.front()<<" ";
    dq.pop_front();
  }
    

  
   
  return 0;
}

//n%a==0; tahole a o divisor and (n/a=b)==> a*b=n paowa jai.so b o divisor.
//a*b<=n; a max b er shoman hbe erpor value repeat hobe.
//a*a<=n;
//a<=sqrt(n);

