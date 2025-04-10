//pointer's  LT- 25    store the address
// size of the pointer is 8 bytes
#include<iostream>
using namespace std;
// int main(){
//     int suraj=90;
//     int num =99;
//     cout<<"Address of the suraj : "<<&suraj<<endl;
//     cout<<"Address of the suraj : "<<&num<<endl;

//     int *ptr =&num;
//     double a =39.9;
//     double *a2= &a;

//     cout<<"value is :"<<*ptr<<endl;
//     cout<<"address is : "<<ptr<<endl;
//     cout<<"size of the integer is : "<<sizeof(num)<<endl;
//     cout<<"size of the pointer is : "<<sizeof(ptr)<<endl;
//     cout<<"size of the pointer is : "<<sizeof(a2)<<endl;
 
// }

// int main(){

// int num =5;
// int a=num;
// cout<<"a before "<<num<<endl;
// a++;
// cout<<"a after "<<num<<endl;

// int *p =&num;
// cout<<"before "<<num<<endl;
// (*p)++;
// cout<<"after "<<num<<endl;
// //copying the pointer

// int *q=p;
// cout<<p<<" - "<<q<<endl;
// cout<<*p<<" - "<<*q<<endl;
//}

// 
 //int main(){
    // int arr[10]={3,8,9,10};
    // cout<<"Address of the first arr is "<<arr<<endl;
    // cout<<"Address of the first arr is "<<&arr[0]<<endl;
    // cout<<"0th index value "<<*arr<<endl;
    
    // cout<<"1th index "<<*arr+1<<endl;
    // cout<<"2th index "<<*(arr+1)<<endl;
    // int i =3;
    // cout<<i[arr]<<endl;
    
    // int temp[10];
    // cout<<sizeof(temp)<<endl;
    // int *ptr =&temp[0];
    // cout<<sizeof(ptr)<<endl;
    //  int a[20]={1,2,3,4,5};
    // //  cout<<&a[0]<<endl;
    // //  cout<<&a<<endl;
    // //  cout<<a<<endl;
    //  int *q = &a[0];
    //  cout<<q<<endl;
    //  cout<<*q<<endl;

    // int arr[5]={9};
    // //arr=arr+1; give error
    // int *ptr=&arr[0];
    // cout<<ptr<<endl;
    // ptr=ptr+1;
    // cout<<ptr<<endl;

    // int arr[6]={1,3,4,445,56,6};
    // char ch[7]="abcdef";
    // cout<<*arr<<endl;
    // cout<<arr<<endl;
    // cout<<ch<<endl;

    // // printing of the element start of the index in inside of the char
    // char *ptr= &ch[3];
    // cout<<*ptr<<endl;
    // cout<<ptr<<endl;

    // char temp='z';
    // char *p= &temp;
    // cout<<p<<endl;  
 // }

//  void print(int *p){
//     cout<<*p<<endl;
//  }

//  void update(int *p){
//     p=p+1;
//     cout<<p<<endl;
//  }
//  int main(){
//     int value =5;
//     int *p =&value;
//     print(p);
//     update(p);
//     print(p);
//  }

// int getsum(int arr[],int n){
//     int sum =0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }
//     return sum;
// }
// int main(){
//     int arr[6]={1,3,5,8,9,10};
//     cout<<"sum of the arr "<<getsum(arr,6)<<endl;
// }
 
//double pointer 

// void update(int **p2){
// // change yes 
//    **p2=**p2+1;
// //change yes
//   // *p2=*p2+1;
// // change no 
//   // p2=p2+1;
// }
// int main(){
//     int i=5;
//     int *p= &i;
//     int **p2 = &p;
//     cout<<"printing of the p "<<&p<<endl;
//     cout<<" address of the p2 "<<&p2<<endl;
//     cout<<" value of the p2 "<<**p2<<endl;
//     cout<<endl;
//     cout<<"Before the i "<<i<<endl;
//     cout<<"Before the p "<<p<<endl;
//     cout<<"Before the P2 "<<p2<<endl;
//     update(p2);
//     cout<<"After the i "<<i<<endl;
//     cout<<"After the p"<<p<<endl;
//     cout<<"After the p2 "<<p2<<endl;

// }

// int main(){
//     int first =8;
//     int second =19;
//     int *ptr =&second;
//     *ptr =9;
//     cout<<first<<" "<<second<<endl;
//     // 8 9 Ans
//     }

// int main(){
//     int first =6;
//     int *p =&first;
//     int *q=p;
//     (*q)++;
//     cout<<first<<endl;
//     //Ans = 7
// }

//  int main(){
//   int first=8;
//   int *p=&first;
//   cout<<(*p)++<<" ";
//   cout<<first<<endl;
//   //Ans=8 9
//   }
  
// int main(){
//     int *p=0;
//     int first=110;
//    *p=first;
//     cout<<*p<<endl;
//     return 0;
//     //give the error 
// }

// int main(){
//     int *p=0;
//     int first=9;
//     p=&first;
//     cout<<*p<<endl;
//     //Ans = 9
// }

// int main(){
//     int first=90;
//     int second =11;
//     int *third =&second;
//     first =*third;
//     cout<<first<<" "<<second<<endl;
//  // Ans 11 11
// }

// int main(){
//     float  f=12.5;
//     float p=21.5;
//     float*ptr = &f;
//     (*ptr)++;
//     *ptr=p;
//     cout<<*ptr<<" "<<f<<" "<<p<<endl;
//     //Ans  21.5 21.5 21.5
// }

// int main(){
//     int arr[5];
//     int *ptr;
//     cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
//     //Ans   20 4
// }
 
// int main(){
//     int arr[]={11,21,13,14};
//     cout<<*(arr)<<" "<<*(arr+1)<<endl;
//     //Ans 11 21 
// }

// int main(){
//     int arr[6]={11,12,31};
//     cout<<arr<<" "<<&arr<<endl;
//     // Ans 0x61fef8 0x61fef8 give the address of the arr
//     cout<<arr<<" "<<&arr+1<<endl;
//     // Ans 0x61fef8 0x61ff10 and arr[0] all are the same
// }

// int main(){
//     int arr[6]={11,21,13};
//     cout<<(arr+1)<<endl;
// // 0x61fefc
// }

// int main(){
//     int arr[6]={11,21,31};
//     int *p =arr;
//     cout<<p[2]<<endl;
//     // Ans 31
// }

// int main(){
//    int arr[]={11,12,13,14,15};
//     cout<< *arr <<" "<<*(arr+3); 
//     // 11 14
// }

// int main(){
//    int arr[]={11,21,31,41};
//    int *ptr=arr++;
//    // we can't update the arr in simbol table
//    cout<<*ptr<<endl;
// }

// int main(){
//     char ch= 'a';
//     char*ptr =&ch;
//     ch++;
//     cout<<*ptr<<endl;
// // ans b
// }

//  int main(){
//   char arr[]="abcde";
//   //char *p= &arr[0];
//  // cout<<p<<endl;
//   //Ans abcde
//  // arr start from the 1
//   char *p= &arr[4];
//   cout<<p<<endl;
//   //Ans cde

//  }

// int main(){
//     char arr[] = "abcde";
//     char*p =&arr[0];
//     p++;
//     cout<<p<<endl;
//     //Ans bcde
// }


// int main(){
//  char  str[]="suraj";
//  char *p =str;
//  cout<<str[0]<<" "<<p[0]<<endl;
//  //Ans  s s
// }

// void update(int *p){
//     *p=(*p)*2;
// }
// int main(){
//   int i =10;
//   update(&i);
//   cout<<i<<endl;
//   // Ans 20
// }

// int main(){
//     int first =110;
//     int *p =&first;
//     int **q=&p;
//     int second=(**q)++ +9;
//     cout<<first<<" "<<second<<endl;

//     //Ans 111 119
// }

// int main(){
// int first =100;
// int *p =&first;
// int **q=&p;
// int second =++(**q);
// int *r=*q;
// ++(*r);
// cout<<first<<" "<<second<<endl;
// //Ans 102 101
// }

void increment(int **p){
    ++(**p);
}

int main(){
    int num =110;
    int *ptr =&num;
    increment(&ptr);
    cout<<num<<endl;
}



