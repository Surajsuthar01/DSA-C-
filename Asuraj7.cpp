// The Standard Template Library (STL) in C++ is a powerful set of 
// template classes and functions that provide generic implementations 
// of common data structures and algorithms. It offers ready-made 
// components that can be used with any data type, significantly
//  simplifying and accelerating C++


// for the array relate the stl

// #include<iostream>
// #include<array>

// using namespace std;
// int main(){
//     //int even[]={1,6,7,9};
//     array<int,4>a={1,2,3,4};
//     int size=a.size();
//     for(int i=0;i<size;i++){
//         cout<<a[i]<<endl;
//     }
//     cout<<"Element at second index ="<<a[2]<<endl;
//     cout<<"Empty or not "<<a.empty()<<endl;
//     cout<<"First element ="<<a.front()<<endl;
//     cout<<"Last element ="<<a.back()<<endl;

// }

// vector related the stl 

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> v;

//     vector<int>a(5,1);
//     cout<<" vector with give size "<<endl;
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;

//     //copy the vector a 
//     vector<int> last(a);
//     cout<<"Print the last vector "<<endl;
//     for(int i:last){
//         cout<<i<<" ";
//     }cout<<endl;


//     cout<<"capacity of the vector = "<<v.capacity()<<endl;
//     v.push_back(1);
//     cout<<"capacity of the vector = "<<v.capacity()<<endl;
//     v.push_back(2);
//     cout<<"capacity of the vector = "<<v.capacity()<<endl;
//     v.push_back(3);
//     cout<<"capacity of the vector = "<<v.capacity()<<endl;
//     cout<<"size of the vector = "<<v.size()<<endl;
  
//     cout<<"Element at 2nd index = "<<v.at(2)<<endl;
//     cout<<"Front element = "<<v.front()<<endl;
//     cout<<"back element = "<<v.back()<<endl;
//     // pop back function

//     cout<<"Before pop "<<endl;
//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;

//     v.pop_back();
//     cout<<"After the pop"<<endl;

//     for(int i:v){
//         cout<<i<<" ";
//     }cout<<endl;
//     // when we clear the vector the cpacity still same but size is made 0
//     cout<<"Before clear size = "<<v.size()<<endl;
//     v.clear();
//     cout<<"After clear size = "<<v.size()<<endl;
//     cout<<"After clear size capacity = "<<v.capacity()<<endl;

// }

// Deque with stl 

// #include<iostream>
// #include<deque>
// using namespace std;
// int main(){
//     deque<int> d;
//     d.push_back(1);
//     d.push_front(2);
//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;
    
//     d.push_back(4);
//    cout<<"After the push element in back"<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;
   
//     cout<<"Element at first Index = "<<d.at(1)<<endl;
//     cout<<"Empty or not "<<d.empty()<<endl;
//     cout<<"front = "<<d.front()<<endl;
//     cout<<"back = "<<d.back()<<endl;

//     cout<<"Before erase size "<<d.size()<<endl;
//     //we have to define start point and delete point where we want to 
//     //erase the deque

//     d.erase(d.begin(),d.begin()+1);
//     cout<<"After erase size "<<d.size()<<endl;
//     for(int i:d){
//         cout<<i<<" ";
//     }cout<<endl;

// } 


// List in stl list ->implementation is done by doubly-linklist 
// 2 pointer's first front and back 

// #include<iostream>
// #include<list>
// using namespace std;

// int main(){

//     list<int> a(5,100);
//     for(int i:a){
//         cout<<i<<" ";
//     }cout<<endl;
  
//     // copy list from a to p

//     list<int> p(a);
//     for(int i:p){
//         cout<<i<<" ";
//     }cout<<endl;

//     list<int> l;
//     l.push_back(1);
//     l.push_front(2);
//     l.push_back(3);
//     l.push_back(4);
    
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"Size of the list = "<<l.size()<<endl;

//     l.erase(l.begin());
//     cout<<"After erase list"<<endl;
    
//     for(int i:l){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"Size of the list = "<<l.size()<<endl;

// }

// stack in stl

// #include<iostream>
// #include<stack>

// using namespace std;
// int main(){
//     stack<string> s;
//     s.push("suraj");
//     s.push("suthar");
//     s.push("sheldon");
//     cout<<"Top Element = "<<s.top()<<endl;
//     s.pop();
//     cout<<"Top Element = "<<s.top()<<endl;
//     cout<<"size of the stack = "<<s.size()<<endl;
  

// }

//Queue in stl

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){
//  queue<string> q; 
//  q.push("suraj"); 
//  q.push("suthar");
//  cout<<"first element = "<<q.front()<<endl;
//  cout<<"last element = "<<q.back()<<endl; 
//  cout<<" size of the string = "<<q.size()<<endl;
 
// }

//priority queue in stl -> used to gain the output of the max and min
//heap (element)

// #include<iostream>
// #include<queue>
// using namespace std;
// int main(){

//     // max heap
//     priority_queue<int> maxi;
    
//     //min heap

//     priority_queue<int,vector<int> ,greater<int>> mini;
//     maxi.push(1);
//     maxi.push(5);
//     maxi.push(8);
//     maxi.push(2);
//     maxi.push(9);
//     cout<<"size = "<<maxi.size()<<endl;
//     int n=maxi.size();
//     for(int i=0;i<n;i++){
//         cout<<maxi.top()<<" ";
//         maxi.pop();
//     }cout<<endl;

//     mini.push(55);
//     mini.push(5);
//     mini.push(95);
//     mini.push(1);
//     mini.push(8);
//     cout<<"size = "<<mini.size()<<endl;
//     int m=mini.size();
//     for(int i=0;i<m;i++){
//         cout<<mini.top()<<" ";
//         mini.pop();
//     }cout<<endl;

//     cout<<"Empty or not queue = "<<mini.empty()<<endl;

// }

// set in stl set-> is used to store unique element 
// time complextiy O(log n)

// #include<iostream>
// #include<set>
// using namespace std;
// int main(){
//     set<int>s;
//     s.insert(5);
//     s.insert(7);
//     s.insert(5);
//     s.insert(1);
//     s.insert(0);
//     s.insert(1);
//     s.insert(3);
//     s.insert(5);

//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     set<int>::iterator it =s.begin();
//     it++;

//     s.erase(it);

//     for(auto i:s){
//         cout<<i<<" ";
//     }cout<<endl;

//     cout<<"5 is present or not "<<s.count(5)<<endl; 

//     set<int>::iterator itr =s.find(5);
//     for(auto it=itr;it !=s.end();it++){
//         cout<<*it<<" ";
//     }cout<<endl;
//}

// map in stl ->  data store in key values

// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int,string> m;
//     //here 1 key and suraj value

//     m[1]="suraj";
//     m[12]="suthar";
//     m[3]="sheldon";
//     m.insert({5,"billy"});
//     for(auto i:m){
//         cout<<i.first<<endl;
//     }
//     cout<<"Before erase "<<endl;

//     for(auto i:m){
//         cout<<i.first<<" "<<i.second<<endl;
//     }

//     cout<<"finding 1 = "<<m.count(1)<<endl;

//     m.erase(1);
//     cout<<"After erase "<<endl;
//     for(auto i:m ){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     cout<<"finding 1 = "<<m.count(1)<<endl;

// }

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(5);
    v.push_back(8);
    v.push_back(7);
    v.push_back(9);
    v.push_back(1);

    sort(v.begin(),v.end());
    // because when the vector is not sorted it not worked
    cout<<"Finding 9 = "<<binary_search(v.begin(),v.end(),8)<<endl;

    int a=2;
    int s=5;
    cout<<"max = "<<max(a,s)<<endl;
    cout<<"min = "<<min(a,s)<<endl;

    cout<<"a = "<<a<<endl<<"s = "<<s<<endl;
    swap(a,s);
    cout<<"swap"<<endl;
    cout<<"a = "<<a<<endl<<"s = "<<s<<endl;

    string suraj ="suraj suthar";
    reverse(suraj.begin(),suraj.end());
    cout<<"string = "<<suraj<<endl;

    cout<<"Before rotate"<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;

    rotate(v.begin(),v.begin()+1,v.end());
    cout<<"After rotate "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }

   

}










