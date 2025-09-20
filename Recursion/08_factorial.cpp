#include<iostream>
int fatorial(int n){
    if(n>0){
      return n*fatorial(n-1);
    
    }
   return 1;

}
int main(){
    int r=fatorial(7);
    std::cout<<r;
}