#include<iostream>
using namespace std;
int power(int m,int n){
    if(n>0){
        return power(m,n)*m;
    }
    return 1;
}
int power1(){
    
}
int main(){
    int r=power(2,5);
    cout<<r;
}