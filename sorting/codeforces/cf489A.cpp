#include <bits/stdc++.h>
using namespace std;

int main() {
    // Your code here
    int n;cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
  vector<pair<int,int>> answer;
    for(int i=0;i<n-1;i++){
      
        int index=i;
        for(int j=i+1;j<n;j++){
            
                if(arr[j]<arr[index]){
                    
                    index=j;
                }
                
            
        }
        if(index!=i){
        swap(arr[i],arr[index]);
        answer.push_back({i,index});
        }
    }
    cout<<answer.size()<<" "<<endl;
    for(auto p: answer){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}