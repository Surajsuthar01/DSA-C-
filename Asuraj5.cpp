//array
#include<iostream>
#include <climits>
using namespace std;


int main(){
    int number[15];
    cout<<"value at 0 ="<<number[1]<<endl;
    cout<<"value at 4 ="<<number[4]<<endl;
    cout<<"value at 99 ="<<number[99]<<endl;
    cout<<endl<<"suraj"<<endl;

    //initialising the array
    int second[4]={3,4,8,9};
    cout<<"value at 3rd index is = "<<second[2]<<endl;
    cout<<"value is = ";
    int third[15]={1,4,2,3,5,9};
    int n=15;
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }
}


 void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"Done"<<endl;
 }

 int main(){
    int number[15]={2,3,6,9};
    int third[38]={2,7,1,5};
    printarr(number,15);
    printarr(third,38);

    //calculate the size of the array

    int thirdsize=sizeof(third)/sizeof(int);
    cout<<"size of the third is = "<<thirdsize<<endl;

 }
 
  finding the maximum number or minimum number in the array

   int getmin(int num[],int n){
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(num[i] < min){
            min=num[i];
        }
    }
    return min;
   }

   int getmax(int num[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
     return max;
   }
   
   //with maximum predefined functions
   int maxnumber(int num[],int n){
    int maxnum=INT_MIN;
    for(int i=0;i<n;i++){
        //this is predefined function
        maxnum=max(maxnum,num[i]);
    }
    return maxnum;
   }

   int main(){
    int size;
    cin>>size;
    int num[size];
    for(int i=0;i<size;i++){
        cin>>num[i];
    }
    cout<<"max number = "<<getmax(num,size)<<endl;
    cout<<"min number = "<<getmin(num,size)<<endl; 
    cout<<"min number = "<<maxnumber(num,size)<<endl; 
   }
  
linear search in array

int search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]={1,2,6,7,3,9,4};
    cout<<"enter the key";
    int key;
    cin>>key;
    bool found= search(arr,10,key);
    if(found){
        cout<<"key is present";
    }else{
        cout<<"key is not present";
    }
}

Reverse the array 

int printarr(int arr[],int n ){
 for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
 }cout<<endl;

}
void reversearr(int arr[],int n){
   int start =0;
   int end=n-1;
   while(start<=end){
    swap(arr[start],arr[end]);
    start++;
    end--;
   }
}

int main(){
    int arr[]={1,2,4,8,9,3};
    int brr[]={9,8,7,3,6};
    printarr(arr,6);
    printarr(brr,5);
    reversearr(arr,6);
    reversearr(brr,5);
    cout<<"reverse arry is = "<<endl;
    printarr(arr,6);
    printarr(brr,5);
}

swap the number alternative

void printarr(int arr[],int size){
   for(int i=0;i<size;i++){
      cout<<arr[i]<<" ";
   }cout<<endl;
}

void swaparr(int arr[],int size){
for(int i=0;i<size;i+=2){
   if(i+1<size){
    // swap(arr[i],arr[i+1]);
//if the prebuild swap partion is not working then apply 
   int temp =arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=temp;
   }
}

}
int main(){
   int even[8]={9,5,3,2,1,4,8,7};
   int odd[5]={4,9,2,1,8};
   printarr(even,8);
   swaparr(even,8);
   printarr(even,8);
   cout<<"second output"<<endl;
   printarr(odd,8);
   swaparr(odd,8);
   printarr(odd,8);
}

// 9 5 3 2 1 4 8 7 
// 5 9 2 3 4 1 7 8
// second output
// 4 9 2 1 8 5 9 2
// 9 4 1 2 5 8 2 9
 
make the main for the run  the code

int findduplicate (int arr[],int n){
   int ans=0;
 //xor of the all array element
 for(int i=0;i<n;i++){
   ans=ans^arr[i];
 }
 for(int i=1;i<n;i++){
   ans=ans^i;
 }
 return ans;

}

int main (){
   int even[5]={2,5,3,5,4};
  int duplicate= findduplicate(even,5);
   
   cout<<" answer is ="<<duplicate;
}

 int duplicate(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j]){
           return arr[i];
         }
      }
   }
   return -1; 
 }

 int main(){
   int even[8]={2,33,4,5,6,1,5,99};
   int duplicatenum=duplicate(even,8);
   cout<<duplicatenum;

 }


correct this code it has error's

int pairsum(int arr[],int n,int target){
   for(int i=0;i<n;i++){
      for (int j=i+1;j<n;j++){
         for(int k=j+1;k<n;k++){
            if (arr[i] + arr[j] + arr[k] == target) {
               cout << "Triplet found: (" << arr[i] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
              return 1;
         }
       }
     }
   }
}

int main(){
   int arr[5] = {1, 2, 3, 4, 5}; // Changed the array
   int print = pairsum(arr, 5, 6); // Changed the target

   cout << "Result: " << print << endl;

   return 0;

}

void printarr(int arr[],int n){
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }cout<<endl;
}
void sortone(int arr[],int n){
   int left=0;
   int right=n-1;
   while(left<right){
      while(arr[left]==0){
         left++;
      }
      while(arr[right]==1){
         right--;
      }
   }
   swap(arr[left],arr[right]);
   left++;
   right++;

}
int main(){
   int arr[5]={0,0,1,0,1};
   sortone(arr,5);
   printarr(arr,5);
   cout<<"ram";
}





