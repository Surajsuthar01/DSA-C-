#include<iostream>
#include<vector>
using namespace std;

Reverser the array

vector<int> reverse(vector<int> v){
    // when we want specific location where the reverse will
    // not take place

    // cout<<"Enter m"<<endl;
    // int m;
    // cin>>m;
    //int s=m,e=v.size()-1;
    int s=0,e=v.size()-1;
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}
void print(vector<int> v){
    for(auto i:v){
        cout<<i<<" ";
    } cout<<endl;
}

int main(){
  vector<int> v;
  v.push_back(11);
  v.push_back(7);
  v.push_back(18);
  v.push_back(2);
  v.push_back(4);
  v.push_back(6);
  vector<int> ans = reverse(v);
  print(v);
  cout<<"Reverse the array"<<endl;
  print(ans);
  
}

merge the array 

void merge(int arr1[],int n,int arr2[] ,int m, int arr3[]){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<n){
        arr3[k++]=arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }
}


void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[5]={5,7,8,9,18};
    int arr2[3]={1,6,17};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    printarr(arr3,8);
}

merge the element in arr1 instread of the making new array

void mergeinarr1(int arr1[],int n,int arr2[],int m){
// Pointer for the last valid element in arr1
 // Pointer for the last element in arr2
  // Pointer for the end of arr1
  // (where merged elements will be placed)
    int i=n-1;
    int j=m-1;
    int k=n+m-1;
    while(i>=0 && j>=0){
        if(arr1[i]>arr2[j]){
            arr1[k--]= arr1[i--];
        } else{
            arr1[k--] =arr2[j--];
        }
        while(j>=0){
            arr1[k--]=arr2[j--];
        }
    }
}

void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

int main(){
    int arr1[8]={3,7,9,12,15};
    int arr2[3]={16,18,19};
    printarr(arr1,8);
    mergeinarr1(arr1,5,arr2,3);
    printarr(arr1,8);
}

Move Zero to the end

void movezero(int arr[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
} 
void print(int arr[] ,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[8]={1,0,4,8,0,0,9,0};
    print(arr,8);
    movezero(arr,8);
    print(arr,8);

}
Rotating the array 

void rotate(vector<int> & v,int k){
    vector<int> temp(v.size());
    for(int i=0;i<v.size();i++){
        temp[(i+k)%v.size()] = v[i];
    }
    v= temp;
}
void printarr(vector<int> v ){
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
}
   

int main(){
    vector<int> v= {10,20,30,40,50};
    printarr(v);
    rotate(v,2);
    printarr(v);
}

check if array is sorted and roated
 
bool check(vector<int> & v){
    int count =0;
    int n= v.size();
    for(int i=1;i<n;i++){
        if(v[i-1]> v[i]){
            count++;
        }
    }
    if(v[n-1]>v[0])
    count++;
    return count<=1;
}
 void printarr(vector<int> v){
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;
 }

int main(){
    vector<int> v={3,9,5,1,2};
    printarr(v);
    check(v);
    bool isSorted = check(v);
    cout<<isSorted<<endl;
    printarr(v);

}

// sum of the two array
//#include <algorithm>
vector<int> reverse(vector<int> v){
    int s=0;
    int e= v.size()-1;
    while(s<e){
        swap(v[s++],v[e--]);     
    }
    return v;
}
vector<int> arraysum(vector<int>&a,int n, vector<int>&b,int m){
    int i=n-1;
    int j=m-1;
    vector<int> ans;
    int carry =0;
    while(i>=0 && j>=0){
        int val1 =a[i];
        int val2 =b[j];
        int sum = val1 + val2 + carry;
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    while(i>=0){
        int sum = a[i]+ carry;
        carry=sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    while(j>=0){
        int sum =b[j]+carry;
        carry= sum/10;
        sum=sum%10;
        ans.push_back(sum);
        j--;
    }
    if(carry !=0 ){
        ans.push_back(carry);
    } 
   
    return reverse(ans);

}


void printarr(vector<int> v){
    for(auto i:v){
        cout<<i<<" ";
    }cout<<endl;
}

int main(){
    vector<int> a={1,3,5,2};
    vector<int> b={1,2,3,2};
     printarr(a);
     printarr(b);
   // arraysum(a,3,b,3);
    vector<int> result = arraysum(a,a.size(),b,b.size());
    cout<<"Sum of the two array's"<<endl;
    printarr(result);
   
}









