// binary to decimal number system L-6

#include<iostream>
#include<math.h>
#include <climits>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int ans=0;
    // int i=0;
    // while(n !=0){
    //     int bit=n&1;
    //     ans=(bit * pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"ans ="<<ans<<endl;
    // return 0;


    // binary to decimal
    // int n;
    // cin>>n;
    // int i=0;
    // int ans=0;
    // while(n != 0){
    //     int digit = n%10;
    //     if(digit ==1){
    //         ans =ans+pow(2, i);
    //     }
    //     n=n/10;
    //     i++;
    // }
    // cout<<" ans ="<<ans<<endl;


    //normal case of the revser the number

    // int n;
    // cin>>n;
    // int ans=0;
    // while( n !=0){
    //    int digit = n%10;
    //    ans=(ans*10)+digit;
    //    n=n/10;
    
    // }
    // cout<<ans;

    //optimsed code for the reverse the numbser
    // int n;
    // cin>>n;
    // int ans =0;
    // while(n!=0){
    //    int digit=n%10;
    //    if((ans>INT_MAX/10)|| (ans< INT_MIN/10)){
    //     return 0;
    //    }
    //    ans=(ans *10)+digit;
    //    n=n/10;

    // }
    // cout<<ans;

    // compleement of the number
//     int n;
//     cin>>n;
//     int m =n;
//     int mask =0;
//     if (n ==0 ){
//         return 1;
//     }
//     while(m !=0){
//         mask =(mask << 1) | 1;
//         m=m >> 1;
//     }
//     int ans =(~n)& mask;
//     cout<<ans;
  

// power of the function

int n;
cin>>n;

bool ans = false;
for(int i=0;i<=30;i++){
    int ans=pow(2,i);
    if (ans == n){
        return true;
    }cout<<ans<<" ";
}


}