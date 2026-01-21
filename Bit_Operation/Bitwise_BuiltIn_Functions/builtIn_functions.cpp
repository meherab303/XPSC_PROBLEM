#include<bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n,int k){
    return (n>>k)&1;
}

void print_on_off_bits(int n){
    for(int k=31;k>=0;k--){
        if(check_kth_bit_on_or_off(n,k)){
            cout<<1<<" ";
        }else{
            cout<<0<<" ";
        }
    }
    cout<<endl;
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  print_on_off_bits(39);  
  cout<<__builtin_popcount(39)<<endl;  // total koita setValue(1) ache ta return kore.
  cout<<__lg(39)<<endl; //highest setValue(1) er pos return kore.mane last koto tomo position e 1 ache(right to left) .

  
   
  return 0;
}

