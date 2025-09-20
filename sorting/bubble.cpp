#include<bits/stdc++.h>
using namespace std;

void bubble_sort (vector<int>arr,int n){

    
    bool swapflag=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapflag=true;
            }
        }
        if(!swapflag){
            cout<<"Array is Sorted in ascending order";
            break;
        }
    }
    for (int i=0;i<n;i++){
        cout<<"element "<< i <<"th "<<arr[i]<<endl;
    }
}
int main(){
int n;
cout<<"size Of an array"<<endl;
cin>>n;

    vector<int> array(n);
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
     
    bubble_sort(array, n);

    }