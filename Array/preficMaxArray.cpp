#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr={2,1,3,5,4,5,7,6};
    vector<int> ans;
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<=i+1;j++){
            ans.push_back(max(arr[i],arr[j]));
        }
    }
for (int i = 0; i < ans.size(); i++)
{
    cout<<ans[i]<<endl;
}
}