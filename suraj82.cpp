#include<iostream>
#include<deque>
#include<vector>
using namespace std;
// LT 83 sliding window maximum using deque
// int main(){

//     deque<int> dq;
//     dq.push_back(1);
//     dq.push_back(2);
//     dq.push_front(3);
//     dq.push_front(4);
//     for(auto i : dq)
//     cout<<i<<" "<<endl;
//     dq.pop_back();
//     dq.pop_front();
//     for(auto i :dq)
//     cout<<i<<" ";

   
// }

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(auto&i:a)
    cin>>i;

    deque<int>q;
    vector<int> ans;
    for(int i=0;i<k;i++){
        while(!q.empty() && a[q.back()]<a[i]){

            q.pop_back();
        }
        q.push_back(i);
    }
    ans.push_back(a[q.front()]);
    for(int  i=k;i<n;i++){
        if(q.front()==i-k){
            q.pop_front();
        }
        while(!q.empty()&&a[q.back()]<a[i]){
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i:ans)
    cout<<i<<" ";


}

