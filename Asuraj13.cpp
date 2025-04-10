//Macros, Global Variables, Inline Functions & Default Args
//reference variable ,static and dynamic memory allocation
// dynamic memory allocation
// reference variable's
#include<iostream>
using namespace std;
int main(){
    int i=5;
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
}
 
pass bu refernece
int update1(int& n){
    n++;
}
int update(int n){
    n++;
    cout<<n<<endl;
}
int main(){
    int n=5;
    cout<<"before "<<n<<endl;
    update1(n);
    cout<<"After "<<n<<endl;
}

heap memory -> new keyword
int main(){
    char ch ='q';
    cout<<sizeof(ch)<<endl;
    char*c=&ch;
    cout<<sizeof(c)<<endl;
}

int getsum(int *arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n;
    cout<<"enter the array"<<endl;
    cin>>n;
    //variable size array
    int *arr =new int[n];
    //taking input in array
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"sum is :"<<getsum(arr,n)<<endl;
}

static allocation memory automatically relase
dynamic allocation memory manually relase by using delete
implementation of the 2d array dynamically

int main(){
    int n;
    cout<<"2d array dynamic "<<endl;
    cin>>n;   
    int** arr =new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[n];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }


    int row;
    int col;
    cout<<"Enter row & col size :"<<endl;
    cin>>row>>col;
    
    int **arr =new int*[row];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i]=new int[col];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

   for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

// relasing memory
for(int i=0;i<row;i++){
    delete[] arr[i];
}
delete []arr;
 
}
gfg macro's

macros  :- a piece of code in a program that is replaced by value
 of the macro

#define pi 3.14 //defining the macro's
int main(){
    int r=5;
    double area =pi*r*r;
    cout<<"Area is "<<area<<endl;
}

global variable's
any function can change the gobal variable so it's use is bad practice

int score =100;
void a(int n){
    cout<<" a " <<score<<endl;
    cout<<n<<endl;
    n=n+1;
}
void b(int n){
    score++;
    cout<<" b "<<score<<endl;
    n=n+1;
   // cout<<p<<endl;

}
int main(){
    cout<<" main "<<score<<endl;
    int n=10;
    int p=5;
    a(n);
    b(n);
}

inline function :- are use to reduce the function call's overhead
condition if the body of the function is 1 line then works else
if line is 2-3 then the compiler is either or do or don't it depend 
on the compiler 
and if the greater then 3 line then compiler didn't works
no extra memeory used, no function call overheaded

inline int getmax(int &a,int &b){
    return (a>b)? a:b;
}
int main(){
    int a=2 , b=5;
    int ans=0;
    ans=getmax(a,b);
    cout<<ans<<endl;
    a=a+5;
    b=b+1;
    ans=getmax(a,b);
    cout<<ans<<endl;

default argument's
start default argument's make's from right side of the function

void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int size=9;
  
    cout<<endl;
    print(arr,size,5);
    cout<<endl;
    print(arr,size);


}

fibonacci series

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
   
    int ans = fibonacci(n-1)+fibonacci(n-2); 
    return ans;
}

int main(){
    int n;
    cout<<"The value of the n "<<endl;
    cin>>n;
    fibonacci(n);
    int result=fibonacci(n);
    cout<<"fibonacci series is : "<<result<<endl;
  
}

day 2
count distint way to reach the n-th stairs

int countdistways(long long n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    //RC
    int ans=countdistways(n-1)+countdistways(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number "<<endl;
    cin>>n;
    countdistways(n);
    int ans=countdistways(n);
    cout<<"number of distinct ways to climb "<<n<<" stairs: "<<ans<<endl;
}

say the number's

void saydigit(int n,string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit=n%10;
    n=n/10;
    //recursive call
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
}
int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven",
    "eight","nine",};
    int n;
    cin>>n;
    cout<<endl<<endl;
    saydigit(n,arr);  
}

either we can use the 
bool issorted(int *arr,int size){

bool issorted(int arr[],int size){
    if(size==0|| size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }else{

        bool remainingpart=issorted(arr+1,size-1);
        return remainingpart;
    }
   
}

//sum of the array

int getsum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    int remainingpart=getsum(arr+1,size-1);
    int sum=arr[0]+remainingpart;
    return sum;
}

int main(){
    int arr[5]={2,4,5,6,7};
    int size=5;
    int sum=getsum(arr,size);
    cout<<"Sum of the array "<<sum<<endl;
    bool ans=issorted(arr,size);
    if(ans){
        cout<<"Array is sorted "<<endl;
    }else{
        cout<<"Array is not sorted "<<endl;
    }
}

linear search using recursion

void print(int arr[],int size){
    cout<<"size of the array is "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

bool linearsearch(int *arr,int size,int key){
    print(arr,size);
    if(size ==0 ){
        return false;
    }
    if(arr[0]==key){
        return true;
    }else{
        bool remaininpart=linearsearch(arr+1,size-1,key); 
        return remaininpart;
    }

// size of the array is 5
// 1 2 3 4 5
// size of the array is 4
// 2 3 4 5
// size of the array is 3
// 3 4 5
// size of the array is 2
// 4 5
// size of the array is 1
// 5
// Key is found

}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=5;
    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"Key is found"<<endl;
    }else{
        cout<<"key is not found "<<endl;
    }
}

// binary  search using recursion
void print(int arr[],int s, int e){
    for(int i=s;i<e;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
       
    }

int binarysearch(int arr[],int s,int e,int key){
    cout<<"size of the arr"<<endl;
    print(arr,s,e);
    if (s>e){
        return -1;
    }
    
    int mid =s+(e-s)/2;
   // cout<<"mid value "<<mid<<endl;

    if(arr[mid] == key){
        return mid;
    }

    if(arr[mid]<key){
        return binarysearch(arr,mid+1,e,key);
    }else{
        return binarysearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[5]={1,2,3,4,5,};
    int size=5;
    int key=5;
   
    cout<<"Element "<<key<<" is found at index "<<binarysearch(arr,0,5,1)<<endl<<endl<<endl;
     int ans=binarysearch(arr,0,5,9);
     if(ans){
        cout<<"number is found "<<endl;
    }else{
        cout<<"number is not found "<<endl;
    }

}








