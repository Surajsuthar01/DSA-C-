//switch statement and functions
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter a";
    cin>>a;
    int b;
    cout<<"enter b";
    cin>>b;

    char op;
    cout<<"enter the op";
    cin >>op;
    switch(op){
        case '+': cout<<(a+b);
          break;
          case '-': cout<<(a-b);
          break;

    }
    return 0;


    square of the number
   int n;
   cin>>n;
   int m;
   cin>>m;
   int ans=1;
   for(int i=1;i<=m;i++){
       ans=ans*n;
   } 
   cout<<ans;
}
functions

int power(int a ,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        ans=ans*a;
    }
    return ans;
}
 int main(){

int a,b;
cin>>a>>b;

int answer=power(a,b);
cout<<answer;
return 0;

}
power functions

int power(){
 int a,b;
 cin>>a>>b;
 int ans=  1;
 for(int i=1;i<=b;i++){
    ans=ans*a;
 }
 return ans;
}

int main(){
    int ans=power();
    cout<<"answer ="<<ans<<endl;
    int p=power();
    cout<<" answer ="<<p<<endl;
    int ans1=power();
    cout<<"answer ="<<ans1<<endl;
    int p1=power();
    cout<<" answer ="<<p1<<endl;
}


find the number is even or odd

bool iseven(int a){
    if(a&1){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int a;
    cin>>a;
    int ans=iseven(a);
    cout<<ans;
}


ncr finding
int factorial(int n){
    int fact =1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int ncr(int n, int r){
  int num=factorial(n);
  int demon=factorial(r)*factorial(n-r);
  return num/demon;
}
 
int main(){
    int n,r;
    cin>>n>>r;
    cout<<"Anser ="<<ncr(n,r)<<endl;
}

void printnum(int &n){
    n=n+1;
    }

int main(){
    int p;
    cin>>p;
    printnum(p);
    cout<<p;
}

prime number
bool isprime(int n){
    for(int i=2;i<n;i++){
        if (n%i==0){
        return true; 
        }
        
    }return false;
}
int main(){
    int a;
    cin>>a;
    if(isprime(a)){
        cout<<"not the prime no";
    }else{
        cout<<" The prime no.";
    }
}

//fibonacci series
void fibonacci(int n){
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<=n;i++){
    int ans=a+b;   
    cout<<ans<<" ";   
    a=b;
    b=ans;
    }
}
int main(){
int n;
cin>>n;
fibonacci(n);
}




