#include<iostream>

using namespace std;
int add(int n1=0){return n1;}
 int add(int n1=0,int n2=0){return n1+n2 -1;}
  int add(int n1=0, char c1='a'){return n1 +c1 -1;}
  int add(int n1=0,int n2=0,int n3=0){return n1 +n2 -1;}

int main(){
    int c = add(2, 5);
    cout<<c<<endl;
    return 0;
}