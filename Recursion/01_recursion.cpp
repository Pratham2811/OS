#include<iostream>
using namespace std;
 void fun(int n){
    if (n>0){
        cout<< "The value of n when Tail Recursion is used: "<<n<<endl;
        fun(n-1);
    }
 }
   void func1(int n){
    if(n>0){
        func1(n-1);
        cout<<"The value of n when Head recursion is used: "<<n<<endl;
    }
   }

 int main(){
    int x=3;
    fun(x);
    func1(x);
 }