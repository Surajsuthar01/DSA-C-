// 2d array's
// rotate the array 90 degree question is complete so complete it
#include<iostream>
#include <climits>
#include <vector>
using namespace std;

// int main(){
//    // int arr[3][3];
    
//     int arr[3][3]={{5,3,2,},{9,7,5},{1,3,9}};
 

//     // cout<<"Enter the matrix"<<endl;
//     // for(int i=0;i<3;i++){
//     //     for(int j=0;j<3;j++){
//     //         cin>>arr[i][j];
//     //     }
//     // }

//     cout<<"you Enter the matrix :"<<endl;

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }

// }

// search element in matrix

//  bool ispresent(int arr[3][3],int find ,int i,int j){
//        for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==find){
//                 return 1;
//             }
//         }
//        }
//        return 0;
//     }

// int main(){
//     int arr[3][3];
//     cout<<"Enter the element :"<<endl;

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Matrix is :"<<endl;

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }

//     cout<<"Enter the element for search :"<<endl;
//     int find;
//     cin>>find;
//     if(ispresent (arr,find,3,3)){
//         cout<<"Element found"<<endl; 
//     } else{
//         cout<<"Element not found "<<endl;
//     }

// }

//  row wise sum of the row and return maximum element
// and index of the row


// int rowsum(int arr[3][3],int i, int j){
   
//     for(int i=0;i<3;i++){
//        int sum =0;  
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         } 
//       cout<<"The sum of the  Row : "<<sum<<endl;
//     }
   
// }
// int colsum(int arr[][3],int i,int j){
//     for(int j=0;j<3;j++){
//     int sum =0;
//         for(int i=0;i<3;i++){
//             sum+=arr[i][j];
//         }
//         cout<<"The sum of the  Col : "<<sum<<endl;
//     }
// }

// int largestrowsum(int arr[][3],int i,int j){
//     int maxi = INT_MIN;
//     int rowindex=-1;
//     for(int i=0;i<3;i++){
//         int sum =0;
//         for(int j=0;j<3;j++){
//             sum+=arr[i][j];
//         }
//         if(sum > maxi){
//             maxi= sum;
//             rowindex= i;
//         }
//     }
//     cout<<"The maximum element is : ";
//     cout<<maxi<<endl;
//    cout<<"Maximum element at row index :"<<rowindex<<endl;
// }
// int largestcolsum(int arr[][3],int i,int j){
//     int maxi =INT_MIN;
//     int colindex =-1;
//     for(int j=0;j<3;j++){
//      int sum = 0;
//       for(int i=0;i<3;i++){
//         sum+=arr[i][j];
//       }
//         if(sum > maxi){
//             maxi=sum;
//             colindex =j;
//       }
//     }
//     cout<<"The maximum element in col : "<<maxi<<endl;
//     cout<<"The maximum element in col at index : "<<colindex<<endl;
    
// }
// int main(){
//     int arr[3][3];
//     cout<<"Enter the element"<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cin>>arr[i][j];
//         }
//     }
//     cout<<"Matrix is : "<<endl;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<" ";
//         } cout<<endl;
//     }

//    // cout<<rowsum(arr,3,3)<<endl;
//    rowsum(arr,3,3);
//    colsum(arr,3,3);
//    largestrowsum(arr,3,3);
//    largestcolsum(arr,3,3);     
// }

// print like the wave 

// vector<int> waveprint(vector<vector<int>> arr,int nrows,int mcols){
//    vector<int>ans;
//     for(int col=0;col<mcols;col++){
//         if(col&1){
//             //odd index bottom to up
//             for(int row = nrows-1; row>=0;row--){
//                ans.push_back(arr[row][col]);
//             }
//         }
//         else{
//             //0 or even index top to bottom
//             for(int row=0;row<nrows;row++){

//                 ans.push_back(arr[row][col]);
//             }
//         }

//     }
//     return ans;
// }

// int main(){
//     int rows,cols;
//     cout<<"rows :"<<endl;
//     cin>>rows;
//     cout<<"cols ; "<<endl;
//     cin>>cols;

//     vector<vector<int>>matrix(rows, vector<int>(cols));
//     // cout << "Enter matrix elements row by row:" << endl;
//     // for(int i = 0; i < rows; i++) {
//     //     for(int j = 0; j < cols; j++) {
//     //         cout << "Enter element at position (" << i << "," << j << "): ";
//     //         cin >> matrix[i][j];
//     //     }
//     // }

//      for(int i=0;i<rows;i++){
//         for(int j=0;j<cols;j++){
//             cin>>matrix[i][j];
//         }
//      }
//     cout << "\nOriginal Matrix:" << endl;
//     for(int i = 0; i < rows; i++) {
//         for(int j = 0; j < cols; j++) {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }
//     vector<int> result = waveprint(matrix, rows, cols);
    
//     // Print the result
//     cout << "\nWave print of the matrix: ";
//     for(int num : result) {
//         cout << num << " ";
//     }
//     cout << endl;
    
//     return 0;
// }
// sprial print of the 2-D matrix

// vector<int> spiralOrder(vector<vector<int>>& matrix) {
//     vector<int> ans;
    
//     // Handle empty matrix case
//     if(matrix.empty()) return ans;
    
//     int row = matrix.size();
//     int col = matrix[0].size();
//     int count = 0;
//     int total = row * col;
    
//     // Initialize boundaries
//     int startingRow = 0;
//     int startingCol = 0;
//     int endingRow = row - 1;
//     int endingCol = col - 1;
    
//     while(count < total) {
//         // Print starting row (left to right)
//         for(int index = startingCol; count < total && index <= endingCol; index++) {
//             ans.push_back(matrix[startingRow][index]);
//             count++;
//         }
//         startingRow++;
        
//         // Print ending column (top to bottom)
//         for(int index = startingRow; count < total && index <= endingRow; index++) {
//             ans.push_back(matrix[index][endingCol]);
//             count++;
//         }
//         endingCol--;
        
//         // Print ending row (right to left)
//         for(int index = endingCol; count < total && index >= startingCol; index--) {
//             ans.push_back(matrix[endingRow][index]);
//             count++;
//         }
//         endingRow--;
        
//         // Print starting column (bottom to top)
//         for(int index = endingRow; count < total && index >= startingRow; index--) {
//             ans.push_back(matrix[index][startingCol]);
//             count++;
//         }
//         startingCol++;
//     }
//     return ans;
// }
// int main() {
//     // Test case 1: 3x3 matrix
//     vector<vector<int>> matrix1 = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
    
//     vector<int> result1 = spiralOrder(matrix1);
//     cout << "Spiral Order (3x3): ";
//     for(int num : result1) {
//         cout << num << " ";
//     }
//     cout << endl;
// }

// o(m*n)

// vector<int> spiralorder(vector<vector<int>>&matrix){
//    vector<int> ans; 
//    if(matrix.empty())return ans;
//    int row=matrix.size();
//    int col=matrix[0].size();
//    int count =0;
//    int total=row*col;

//    //initailizing the boundaries
//    int startingrow=0;
//    int startingcol=0;
//    int endingrow=row-1;
//    int endingcol=col-1;
   
//    while(count <total){
//     // print starting row
//     for(int index =startingcol;count <total && index <=endingcol;index++){
//         ans.push_back(matrix[startingrow][index]);
//         count++;
//     }startingrow++;
    
//     //printing the ending col
//     for(int index = startingrow;count <total&& index<=endingrow;index++){
//         ans.push_back(matrix[index][endingcol]);
//         count++;
//     }
//     endingcol--;

//    // printing the ending row
//    for(int index=endingcol;count<total && index>=startingcol;index--){
//      ans.push_back(matrix[endingrow][index]);
//      count++;
//    }
//    endingrow--;
   
//    //printing the starting col 
//    for(int index=endingrow; count <total && index >= startingrow;index--){ 
//      ans.push_back(matrix[index][startingcol]);
//      count++;
//    }
//    startingcol++;
  
// } return ans;
// }
// int main(){
//     vector<vector<int>>matrix={
//         {1,2,3},
//         {4,5,6},
//         {7,8,9}
//     };
//     vector<int>result = spiralorder(matrix);
//     cout<<"The spiral matrix ";
//     for(int num : result){
//         cout<<num<<" ";
//     }
//     cout<<endl;

// }

// binary search in 2d array (matrix)
// time complexity O(log(row*col))

// bool searchmatrix(vector<vector<int>>&matrix,int target){
//     int row=matrix.size();
//     int col=matrix[0].size();
    
//     int start =0;
//     int end=row*col-1;
    
//     while(start <=end){
//       int mid= start+(end-start)/2;  
//         int element =matrix[mid/col][mid%col];
//         if(element == target){
//             return 1;
//         }
//         if(element < target){
//             start=mid+1;
//         }
//         else{
//             end=mid-1;
//         }
//          mid=start+(end-start)/2;

//     }
//     return 0;
// }
// int main(){
//     vector<vector<int>> matrix {
//         {1,2,3},
//         {4,5,6},
//         {7,8,9},
//     };

//     int target= 8;
//     cout<<searchmatrix(matrix,target)<<endl;
//     cout<<(searchmatrix(matrix,target) ? "found ": "not found")<<endl;

//         if(searchmatrix(matrix,target)){
//             cout<<"element found"<<endl;
//         } else{
//             cout<<"element not found"<<endl;
//         }
// }


bool searchmatrix(vector<vector<int>> & matrix,int target){
    int row=matrix.size();
    int col=matrix[0].size();

    int rowindex =0;
    int colindex=col-1;

    while(rowindex <row && colindex >=0){
        int element =matrix[rowindex][colindex];
        if(element == target){
            return 1;
        }
        if(element < target){
            rowindex++;
        } else{
            colindex--;
        }
    }
    return 0;
}
    int main(){
        vector<vector<int>> matrix={
                    {1,4,8},
                    {3,9,15},
                    {27,68,99},
        };
        int target =909;
        cout<<(searchmatrix(matrix,target) ? "found ": "not found")<<endl;
    }







