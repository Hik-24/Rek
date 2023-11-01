#include<iostream>
using namespace std;

void segitiga(int n){
   if(n>0){
    segitiga(n-1);
     for(int i=1; i<=n; i++){
        cout<<"*";
     }
     cout<<endl;
    }
}

int main(){
   int n;
   cin>>n;
   segitiga(n);
}
