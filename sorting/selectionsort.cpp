#include <bits/stdc++.h>
using namespace std;
 void selection_sort(vector<int> &arr ,int n){
for(int i=0;i<=n-2;i++){
    int minimum=i;
    for(int j=i;j<n;j++){
        
        if(arr[j]<arr[minimum]){
            minimum=j;
        }
    }
    swap(arr[i],arr[minimum]);
}

 }
int main() {
    int n;cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        /* code */
    }
    selection_sort(arr,n);
    cout<<"Sorted Array";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<", "<<endl;
    }
    return 0;
}