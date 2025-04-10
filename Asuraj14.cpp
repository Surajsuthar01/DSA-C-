//Recursion when function is call itself
//when big problem solution depend on same type of the small problem
#include<iostream>
#include <vector>
using namespace std;

// int factorial (int n){
//     //base condition : stack overflow and segemation fault error so it manditory

//     if(n==0){
//         return 1;
//     }
// //     int fact=factorial(n-1);
// //     int factnum= n*fact;
// //     return factnum;
//   return n*factorial(n-1);
// }

// int power(int n){
//     if(n==0){
//         return 1;
//     }
//     // int powerfun=power(n-1);
//     // int pow=2*powerfun;
//     // return pow;
//     return 2*power(n-1);
// }

// int main(){
//     int n;
//     cout<<"Enter the num :"<<endl;
//     cin>>n;
//   //  int ans =factorial(n);
//   int ans =power(n);
//   //  cout<<"Factorial is : "<<ans<<endl;
//   cout<<"Power of the 2 : "<<ans<<endl;
    
// }

//input
//cout
//recursive relation

// void print(int n){
//     //tail recursion
//     //base case
//     if (n==0){
//         return ;
//     }
//     cout<<n<<" "; //processsing
//     print(n-1);//here it's recurence relation
// }

// void print1(int n){
//     //head recursion
//     //base condition
//     if(n==0){
//         return ;
//     }
//     print1(n-1);
//     cout<<n<<" ";



// }
// int main(){

//     cout<<"Enter num "<<endl;
//     int n;
//     cin>>n;
//     cout<<endl;
//     cout<<"tail recursion "<<endl;
//     print(n);
//     cout<<endl;
//     cout<<"head recursion"<<endl;

//     print1(n);
// }

// void  reachhome(int src,int dest){
//     cout<<"source "<<src<<" - destination "<<dest<<endl;
//     //base case
//     if(src==dest){
//         cout<<"The reached home"<<endl;
//         return;
//     }
//     //processing 
//     src++;
    
//     //recursive call's
//     reachhome(src,dest);
// }
// int main(){
//     int src=1;
//     int dest=10;
//     cout<<endl;
//     reachhome(src,dest);

// }



//fibonacci series

// int fibonacci(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
   
//     int ans = fibonacci(n-1)+fibonacci(n-2); 
//     return ans;
// }

// int main(){
//     int n;
//     cout<<"The value of the n "<<endl;
//     cin>>n;
//     fibonacci(n);
//     int result=fibonacci(n);
//     cout<<"fibonacci series is : "<<result<<endl;
  
// }

//day 2
//count distint way to reach the n-th stairs

// int countdistways(long long n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     //RC
//     int ans=countdistways(n-1)+countdistways(n-2);
//     return ans;
// }
// int main(){
//     int n;
//     cout<<"Enter the number "<<endl;
//     cin>>n;
//     countdistways(n);
//     int ans=countdistways(n);
//     cout<<"number of distinct ways to climb "<<n<<" stairs: "<<ans<<endl;
// }

// say the number's

// void saydigit(int n,string arr[]){
//     //base case
//     if(n==0){
//         return;
//     }
//     //processing
//     int digit=n%10;
//     n=n/10;
//     //recursive call
//     saydigit(n,arr);
//     cout<<arr[digit]<<" ";
// }
// int main(){
//     string arr[10]={"zero","one","two","three","four","five","six","seven",
//     "eight","nine",};
//     int n;
//     cin>>n;
//     cout<<endl<<endl;
//     saydigit(n,arr);  
// }

// either we can use the 
//bool issorted(int *arr,int size){

// bool issorted(int arr[],int size){
//     if(size==0|| size==1){
//         return true;
//     }
//     if(arr[0]>arr[1]){
//         return false;
//     }else{

//         bool remainingpart=issorted(arr+1,size-1);
//         return remainingpart;
//     }
   
// }

// //sum of the array

// int getsum(int *arr,int size){
//     if(size==0){
//         return 0;
//     }
//     if(size==1){
//         return arr[0];
//     }
//     int remainingpart=getsum(arr+1,size-1);
//     int sum=arr[0]+remainingpart;
//     return sum;
// }

// int main(){
//     int arr[5]={2,4,5,6,7};
//     int size=5;
//     int sum=getsum(arr,size);
//     cout<<"Sum of the array "<<sum<<endl;
//     bool ans=issorted(arr,size);
//     if(ans){
//         cout<<"Array is sorted "<<endl;
//     }else{
//         cout<<"Array is not sorted "<<endl;
//     }
// }

//linear search using recursion

// void print(int arr[],int size){
//     cout<<"size of the array is "<<size<<endl;
//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// bool linearsearch(int *arr,int size,int key){
//     print(arr,size);
//     if(size ==0 ){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }else{
//         bool remaininpart=linearsearch(arr+1,size-1,key); 
//         return remaininpart;
//     }

// // size of the array is 5
// // 1 2 3 4 5
// // size of the array is 4
// // 2 3 4 5
// // size of the array is 3
// // 3 4 5
// // size of the array is 2
// // 4 5
// // size of the array is 1
// // 5
// // Key is found

// }

// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=5;
//     int key=5;
//     bool ans=linearsearch(arr,size,key);
//     if(ans){
//         cout<<"Key is found"<<endl;
//     }else{
//         cout<<"key is not found "<<endl;
//     }
// }

// binary  search using recursion

// void print(int arr[],int s, int e){
//     for(int i=s;i<e;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
       
//     }

// int binarysearch(int arr[],int s,int e,int key){
//     cout<<"size of the arr"<<endl;
//     print(arr,s,e);
//     if (s>e){
//         return -1;
//     }
    
//     int mid =s+(e-s)/2;
//    // cout<<"mid value "<<mid<<endl;

//     if(arr[mid] == key){
//         return mid;
//     }

//     if(arr[mid]<key){
//         return binarysearch(arr,mid+1,e,key);
//     }else{
//         return binarysearch(arr,s,mid-1,key);
//     }
// }
// int main(){
//     int arr[5]={1,2,3,4,5,};
//     int size=5;
//     int key=5;
   
//     cout<<"Element "<<key<<" is found at index "<<binarysearch(arr,0,5,1)<<endl<<endl<<endl;
//      int ans=binarysearch(arr,0,5,9);
//      if(ans){
//         cout<<"number is found "<<endl;
//     }else{
//         cout<<"number is not found "<<endl;
//     }

// }


//LT-34 reverse the string using recursion
// void reverse(string & str,int i,int j){
//     cout<<"call recieved for "<<str<<endl;
//     if(i>j){
//         return ;
//     }
//     swap(str[i],str[j]);
//     i++;
//     j--;
//     reverse(str,i,j);
// }
// int main(){
//     string name ="suraj suthar";
//     cout<<endl;
//     reverse(name,0,name.length()-1);
//     cout<<endl;
//     cout<<name<<endl;
// }


//  check the string is palindrome

// bool checkpalindrome(string str,int i,int j){
//     if(i>j){
//         return true;
//     }
//     if(str[i] != str[j]){
//         return false;
//     }else{
//         return checkpalindrome(str,i+1,j-1);
//     }
// }

// int main(){
//     string name="surirus";
//     bool palindrom =checkpalindrome(name,0,name.length()-1);
//     if(palindrom){
//         cout<<"string is palindrome"<<endl;
//     }else{
//         cout<<"string is not palindrome"<<endl;
//     }
// }

// calculating the power using the recursion

// int power(int a,int b){
//     if (b==0){
//         return 1;
//     }
//     if(b==1){
//         return a;
//     }
//    int ans = power(a,b/2);
//    if(b%2 == 0 ){
//     return ans *ans;
//    } else{
//     return a*ans*ans;
//    }
// }

// int main(){
//     int a,b;
//     cout<<"Enter the value of a,b :"<<endl;
//     cin>>a>>b;
//     cout<<endl;
//     int ans=power(a,b);
//     cout<<"Answer is "<<ans<<endl;
//     return 0;

// }

// bubble sort using the recursion

// void bubblesort(int *arr,int n){
//     if(n==0 || n==1){
//         return ;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     bubblesort(arr,n-1);
// }
// int main(){
//     int arr[5]={3,9,2,1,5};
//     bubblesort(arr,5);
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

//LT 35  Merge sort using recursion

// void merge(int *arr,int s,int e){
//     int mid = s+(e-s)/2;
//     int len1 =mid-s+1;
//     int len2=e-mid;
//     int *first=new int[len1];
//     int *second=new int[len2];

//     //copy values

//     int mainarrayindex=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[mainarrayindex++];
//     }
//     mainarrayindex =mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[mainarrayindex++];
//     }

//     // merge 2 sorted arrays

//     int index1=0;
//     int index2=0;
//     mainarrayindex =s;
    
//     while(index1 <len1 && index2 <len2){
//         if(first[index1]<second[index2]){
//             arr[mainarrayindex++]=first[index1++];
//         }else{
//             arr[mainarrayindex++]=second[index2++];
//         }
//     }
//     while(index1 <len1){
//         arr[mainarrayindex++]=first[index1++];
//     }
//     while(index2<len2){
//       arr[mainarrayindex++]=second[index2++];
//     }
// }

// void mergesort(int *arr,int s,int e){
//    //base
//    if(s>=e){
//     return;
//    }
//    int mid =s+(e-s)/2;
//    mergesort(arr,s,mid);
//    mergesort(arr,mid+1,e);
//    merge(arr,s,e);
// }

// int main(){
//     int arr[6]={9,3,8,7,4,5};
//     int n=6;
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
//     return 0;
// }


// void merge(int *arr,int s,int e){
//     int mid=s+(e-s)/2;

//     int len1=mid-s+1;
//     int len2=e-mid;

//     int *first=new int[len1];
//     int *second=new int[len2];

//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }
    
//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }
//     int index1=0;
//     int index2=0;
//      k=s;
//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2]){
//             arr[k++]=first[index1++];
//         }else{
//             arr[k++]=second[index2++];
//         }
//     }
//     while(index1<len1){
//       arr[k++]=first[index1++];
//     }
//     while(index2<len2){
//         arr[k++]=second[index2++];
//     }
// }

// void mergesort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid=s+(e-s)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,e);
// }

// int main(){
//     int arr[9]={3,7,1,9,5,2,8,0,4};
//     int n=9;
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// void merge(int *arr,int s,int e){
//     int mid=s+(e-s)/2;
//     int len1=mid-s+1;
//     int len2=e-mid;

//     int *first = new int[len1];
//     int *second= new int[len2];

//     int k=s;
//     for(int i=0;i<len1;i++){
//         first[i]=arr[k++];
//     }

//     k=mid+1;
//     for(int i=0;i<len2;i++){
//         second[i]=arr[k++];
//     }
//     //merge first and second back to arr
//     int index1=0;
//     int index2=0;
//     k=s;
//     while(index1<len1 && index2<len2){
//         if(first[index1]<second[index2]){
//             arr[k++]=first[index1++];
//         }else{
//            arr[k++] =second[index2++];
//         }
//     }
//     while(index1<len1){
//         arr[k++]=first[index1++];
//     }
//     while(index2<len2){
//        arr[k++] =second[index2++];
//     }
// }

// void mergesort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int mid= s+(e-s)/2;
//     mergesort(arr,s,mid);
//     mergesort(arr,mid+1,e);
//     merge(arr,s,e);
// }

// int main(){
//     int arr[9]={3,7,1,9,5,2,8,0,4};
//     int n=9;
//     mergesort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

// quick sort using the recursion

// int partition(int *arr,int s,int e){
//     int pivot=arr[s];
//     int cnt=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot){
//             cnt++;
//         }
//     }
    
//     int pivotindex=s+cnt;
//     swap(arr[pivotindex],arr[s]);
//     int i=s;
//     int j=e;
//     while(i<pivotindex&& j>pivotindex){

//         while(arr[i]<pivot){
//             i++;
//         }
//         while(arr[j]>pivot){
//             j--;
//         }
//     while(i<pivotindex && j>pivotindex){
//         swap(arr[i++],arr[j--]);
//     }
//   }
//     return pivotindex;
// }

// void quicksort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p =partition(arr,s,e);
//     quicksort(arr,s,p-1);
//     quicksort(arr,p+1,e);
// }

// int main(){
//     int arr[6]={2,9,6,1,5,3};
//     int n=6;
//     quicksort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

//  this is my version of the code

// int partition(int *arr,int s,int e){
//     int pivot=arr[s];
//     int cnt=0;
//     for(int i=s+1;i<=e;i++){
//         if(arr[i]<=pivot){
//             cnt++;
//         }
//     }
//     int pivotindex=s+cnt;
//     swap(arr[pivotindex],arr[s]);
//     int i=s;
//     int j=e;
//     while(i<pivotindex && j>pivotindex){
//         if(arr[i]<pivot){
//             i++;
//         }
//         if(arr[j]> pivot){
//             j--;
//         }

//      while(i<pivotindex && j>pivotindex){
//         swap(arr[i++],arr[j--]);
//       }
//     }
   
//     return pivotindex;

// }

// void quicksort(int *arr,int s,int e){
//     if(s>=e){
//         return;
//     }
//     int p=partition(arr,s,e);
//     quicksort(arr,s,p-1);
//     quicksort(arr,p+1,e);
// }

// int main(){
//     int arr[6]={9,2,6,1,5,3};
//     int n=6;
//     quicksort(arr,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }cout<<endl;
// }

//LT-37: Recursion - Subsets / Subsequences of String 
//this code is underreview

class Solution {
private:
    void solve(vector<int>& nums, vector<int>& output, int index, vector<vector<int>>& ans) {
        // base case
        if (index >= nums.size()) {
            ans.push_back(output);
            return;
        }

        // exclude
        solve(nums, output, index + 1, ans);

        // include
        int element = nums[index];
        output.push_back(element);
        solve(nums, output, index + 1, ans);
        output.pop_back(); // backtrack
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums, output, index, ans);
        return ans;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {1, 2, 3}; // you can change this input
    vector<vector<int>> result = obj.subsets(nums);

    for (auto subset : result) {
        cout << "{ ";
        for (int num : subset) {
            cout << num<<" ";
        }
        cout << "}" << endl;
    }

    return 0;
}
