// time complextiy and binary search algorithm

#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    //int mid=(start+ end)/2;
    // use this when we use the limit like 2(31) then avoid the make the more number
    int mid = start+(end-start)/2;
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }
        if (key>arr[mid]){
            start =mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
       // mid= (start+end)/2;
       mid =start+(end-start)/2;
    }
    return -1;

}
int main(){

   int odd[5]={2,3,7,9,15};
   int even[6]={3,8,9,12,15,26};
   int index=binarysearch(even,6,26);
   cout<<"Index of the element is "<<index<<endl;

   return 0;
   
}
 
first accurence and last accurence of the element

 int firstocc(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
           ans=mid;
           end=mid-1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    
    }
   return ans;
 }

  int lastacc(int arr[],int n,int key){
    int start =0;
    int end=n-1;
    int ans=-1;
    int mid = start +(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        if(key<arr[mid]){
            end=mid-1;

        }
        if(key>arr[mid]){
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
  }

 int main(){
    int odd[10]={1,2,3,4,4,4,7,8,9,9};
    int indexfirst=firstocc(odd,10,4);
    int indexlast=lastacc(odd,10,4);
   cout<<"First occurence is "<<indexfirst;
   cout<<" And Last accurence is "<<indexlast<<endl;
   int totalacc=(indexlast-indexfirst)+1;
   cout<<"Total accurence is = "<<totalacc;
    
 }

pick largest element moutain of the arr

int peakmount(int arr[],int n){
  int  start =0;
   int end=n-1;
   int mid=start+(end-start)/2;
   while(start<end){
    if(arr[mid]<arr[mid+1]){
        start=mid+1;
    }else{
        end=mid;
    }
    mid=start+(end-start)/2;
   }
   return start;
}
int main(){
    int arr[10]={3,4,5,6,9,8,7,5,3,1};
    int peak=peakmount(arr,10);
    cout<<" peak is "<<peak;

}

privot element

int pivot(int arr[],int n){
    int start=0;
    int end=n-1;
    int mid=start+(end-start)/2;
    while(start<end){
        if(arr[mid]>=arr[0]){
            start=mid+1;
        }else{
            end=mid;
        }
        mid=start+(end-start)/2;
    }
    return start;
}
int main(){
    int arr[5]={7,9,1,2,3};
    int findpivot = pivot(arr,5);
    cout<<"The pivo is "<<findpivot;

}

correction of this code search in rotated array

int binarysearch(int arr[],int n,int start,int end,int key){
//  int start =0;
//  int end=n-1;
 int mid=start+(end-start)/2;
 while(start<end){
    if(arr[mid]==key){
      return mid;
    }
    if(key>arr[mid]){
        start=mid+1;
    }
    if(key<arr[mid]){
        end=mid-1;
    }
    mid=start+(end-start)/2;
 }
 return -1;
}

 int findposition(int arr[],int n,int key){
    int ppivot = pivot(arr,5);
    if(key>=arr[ppivot] && key<=arr[n-1]){
        return binarysearch(arr,ppivot,n-1,key);
    }
    else {
        return binarysearch(arr,0,)
    }
 }


 int main(){
    int arr[5]={7,9,1,2,3};
    int newbin=binarysearch(arr,5,2);
    cout<<"the index ="<<newbin;
    int findpivot = pivot(arr,5);
    cout<<"The pivo is "<<findpivot;

}

print the square root of the number
take the long instad of the int when the 2pow(31) of the code

int findsquare(int n){
    int start=0;
    int end=n;
    int mid=start+(end-start)/2;
    int square=mid*mid;
    int ans=-1;
    while(start<=end){
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            start=mid+1;
        }
        if(square>n){
            end=mid-1;
        }
        mid=start+(end-start)/2;
        square=mid*mid;

    }
    return ans;
}

  double moreprecision(int n,int precision,int result){
    double factor=1;
    double ans=result;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans=j;
        }
    }
    return ans;
  }
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = findsquare(n);
    cout << "The integer square root is: " << result << endl;
    cout<<" The answer is ="<<moreprecision(n,3,result)<<endl;

    return 0;
}

selectionsort sort algorithm

int selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minIndex =i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[minIndex]){
            minIndex=j;
            }
            int temp =arr[j];
            arr[j]=arr[minIndex];
            arr[minIndex]=temp;
        }
    }
}

//correct for  int arr[]={5 ,3 ,9 ,12 ,1};
int insertsort2(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0&& arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        } arr[prev+1]=curr;
    }
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
   int arr[]={7,1,4,3,9};
   int arr2[]={5 ,3 ,9 ,12 ,1};
    printarr(arr2,5);
  insertsort2(arr2,5);
    selectionsort(arr2,5);
    printarr(arr2,5);
    
}

//bubble sort 
// int bubble(int arr[],int n){
//     for(int i=1;i<n;i++){
//         bool swapped = false;
//         for(int j=0;j<n-i;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//                 swapped =true;
//             }   
//         }
//          if(swapped == false){
//              break;
//         }
//     }
// }
//  void printarr(int arr[],int n){
//         for(int i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }cout<<endl;
//     }
// int main(){
//     int arr[]={2,5,9,1,23,3};
//     int arr1[]={1,2,3,4,5,6};
//     printarr(arr,6);
//     bubble(arr,6);
//     printarr(arr,6);
// }


int insertionsort(int arr[],int n){
   for(int i=0;i<n;i++){
    int curr=arr[i];
    int prev=i-1;
    while(prev>=0 && arr[prev]>curr){
        arr[prev+1]=arr[prev];
        prev--;
    }
    arr[prev+1]=curr;
   }
}

int insertionsort2(int arr[],int n){
   for(int i=0;i<n;i++){
      int j=i; //O(n^2)  but  in the best case O(n)
      while(j>0 && arr[j-1]>arr[j]){
         int temp = arr[j-1];
         arr[j-1] = arr[j];
         arr[j] = temp;
         j--;
      }
   }
}

 void printarr(int arr[] ,int n ){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
 }
 
 int main(){
    int arr[]={4,12,11,20,2,5};
    printarr(arr,6);
   // insertionsort(arr,6);
   insertionsort2(arr,6);

    printarr(arr,6);
 }
 
