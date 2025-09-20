#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int low,int mid,int high){
    vector<int> temp;
  int left=low;
  int right=mid+1;

 while(left<=mid&&right<=high)
 {                                                                                  
    if(arr[left]<=arr[right]){
    temp.push_back(arr[left]);
    left++;}
    else{
        temp.push_back(arr[right]);
        right++;
    
     }

 }
 while(left<mid){
    temp.push_back(left);
    left++;
 }
 while (right<=high)
 {
   temp.push_back(right);
   right++;
 }
 for(int i=low;i<high;i++){
    arr[i]=temp[i-low];
 }
 
 
 
}

void merge_sort(vector<int>&arr,int low,int high){
          if(low>=high) return;
          int middle=(low+high)/2;
          merge_sort(arr,low,middle);
          merge_sort(arr,middle+1,high);
          merge(arr,low,middle,high);
}

int main() {
    // Your code here
    int n;cout<<"Enter the size of array"<<endl;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++){
        cout<<"Enter The "<<i<<" th element: "<<endl;
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;

    merge_sort(arr,low,high);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}