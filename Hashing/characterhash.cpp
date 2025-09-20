#include<iostream>
using namespace std;
int main(){
    //for upper case
    /*string s;
    cout<<"enter String : ";
    cin>>s;
    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'A']+=1;

    }
    int q;
    cout<<"Number of inputts ";
    cin>>q;
    while (q--){
       char c;
       cout<<"enter Character";
       cin>>c;
       //fetch
       cout<<hash[c-'A']<<endl;

    }
    /*
    //LowerCase
    string s;
    cout<<"enter String : ";
    cin>>s;
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'A']+=1;

    }   
    int q;
    cout<<"Number of inputts ";
    cin>>q;
    while (q--){
       char c;
       cout<<"enter Character";
       cin>>c;
       cout<<hash[c-'A']<<endl;

    }
    */
   //fro all ASCII character we have to take all 256 number rather all is same

   string s;
   cout<<"enter String : ";
   cin>>s;
   int hash[256]={0};
   for(int i=0;i<s.size();i++){
    hash[s[i]]+=1;

   }
   int q;
   cout<<"Number of inputts ";
   cin>>q;
   while(q--){
    char c;
    cout<<"enter Character : ";
    cin>>c;
    cout<<hash[c]<<endl;
   }
    
}