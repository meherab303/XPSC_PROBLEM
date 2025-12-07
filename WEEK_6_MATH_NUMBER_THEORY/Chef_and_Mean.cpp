#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    vector<int>v(n);
    long long sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    if(sum%n!=0){
       cout<<"Impossible"<<endl;
       continue;
    }else{
    int mean_value=sum/n;
    
    int target_value=mean_value;
    bool found=false;
    int pos; 
    for(int i=0;i<n;i++){
        if(v[i]==target_value){  
           
            pos=i+1;
            found=true;
            break;
        }
    }
     if(found){
        cout<<pos<<endl;
    }else{
        cout<<"Impossible"<<endl;
    }
    }
   
    
    

  
} 
  return 0;
}

//key idea
//1.mean=sum/n;
//2.ekta value remove kore mean thik rakhte hole thik mean er equal value e delete korte hbe.
//example:sum=18,n=4.18/4=4.5 --> tahole ekta value remove(n-1) kore mean 4.5 rakhte hole thik 4.5 e remove korte hbe(karon total n thekeo 1 remove hbe).tai (sum/n!=0  hole-->impossible)

//(20/5)=4 .(16/4)=4. -->prottekta bhag er ongsho 4.so ekta bhag komaite hole(n-1) shomoporiman bhag er ongsho baad  dite hbe.

// alternative--> shobkichu double e niye korleo solve hoi.