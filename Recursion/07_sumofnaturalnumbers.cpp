#include<iostream>
using namespace std;
int sumOfAllNumbers(int n){
    if(n>0){
        return sumOfAllNumbers(n-1)+n;
    }
    return 0;
}

int main(){
    int x=8;
int y=sumOfAllNumbers(x);
cout<<y<<" ";
}