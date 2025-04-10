#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
// LT 88 given an array and a value ,find if there exitsts three number 
//  whose sum is equal to the given value.
// two pointer techanique
int main(){
  int n;cin>>n;
  int target;cin>>target;
  vector<int> a(n);
  for(auto &i : a)
    cin>>i;
    bool  found =false;
    sort(a.begin(),a.end());
    for(int i=0;i<n;i++){
        int low=i+1,high=n-1;
        while(low<high){
            int current = a[i] + a[low] + a[high];
            if(current == target){
                found = true;
            }
            if(current < target){
                low++;
            }
            else{
                high--;
            }
        }
    }
    if(found){
        cout<<"True";
    }

    else{
        cout<<"False";
    }
    return 0;
  }
