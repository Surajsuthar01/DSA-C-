// LT -24 basic math

#include<iostream>
#include <vector>
using namespace std;

//Find Prime number using Sieve of Eratosthenes

// time complexity O(n*log(log n))
// int countPrime(int n){
//     int cnt=0;
//     vector<bool> prime(n+1,true);
//     prime[0]=prime[1]=false;
//     for(int i=2;i<n;i++){
//         if(prime[i]){
//             cnt++;
//             for(int j=2*i;j<n;j=j+=i){
//                 prime[j]=0;
//             }
//         }
//     }
//     return cnt;
// }


// int main() {
//     int n;
//     cout << "Enter a number (n): ";
//     cin >> n;
//     int primes=countPrime(n);
//     cout<<"Number of primes less than : "<< n<<primes<< endl;
    
//     return 0;
// }
 
// finding the gcd
int gcd(int a ,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a>b){
            a=a-b;
        }else{
            b=b-a;
        }
    }
    return a;
}

// find the lcm
 int lcm(int a, int b){
    return (a/gcd(a,b))*b;
 }

int main(){
    int a,b;
    cout<<"enter "<<endl;
    cin>>a>>b;
    cout<<lcm(a,b)<<endl;
}

// Modular Arithmetics/ Fast Exponentiation
// 1LL-> long long literal

// int modularExponentiation(int x ,int n ,int m){
//     int res=1;
//     while(n>0){
//         if(n&1){
//             //odd
//             res= (1LL * (res)* (x)%m)%m;
//         }
//         x=(1LL * (x)%m *(x)%m)%m;
//         n=n>>1;
//     }
//     return res;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int x, n, m;
//     cout << "Enter base (x): ";
//     cin >> x;
//     cout << "Enter exponent (n): ";
//     cin >> n;
//     cout << "Enter modulus (m): ";
//     cin >> m;
    
//     int result = modularExponentiation(x, n, m);
//     cout << "Result of (" << x << "^" << n << ") % " << m 
//          << " = " << result << endl;
    
//     return 0;
// }