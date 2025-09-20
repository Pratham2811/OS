#include<iostream>
using namespace std;
int sumOfAllNnumbers(int n){
    if(n>0){
        return sumOfAllNnumbers(n-1)+n;

    }
    return 0;
}


//static variable

int fun(int n){
    static int x=0;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    return 0;
}
int main(){
    int x=10 ;
    int r=sumOfAllNnumbers(x);
    cout<<r<<endl;
    int y=fun(x);
    cout<<y;
}