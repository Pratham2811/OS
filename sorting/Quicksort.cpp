#include <bits/stdc++.h>
using namespace std;
 void rndom(vector<int> &arr,int low,int high){
    vector<int>small;
    vector<int>big;
    int temp=arr[high];
    for(int i=0;i<high-1;i++){
        if(arr[i]<=temp){
            small.push_back(arr[i]);

        }else{
            big.push_back(arr[i]);
        }
    }
    for(int i=0;i<high;i++){
        cout<<"New  Element"<<endl;
    cout<<small[i];
    }

 }
int main() {
    int n;
    cout<<"Enter The size Of array"<<endl;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cout<<"Enter Element"<<endl;
    cin>>arr[i];
    }
    int low=0;
    int high=n-1;
 rndom(arr,low,high);
    return 0;
}