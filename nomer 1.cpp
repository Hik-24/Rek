#include <iostream>
using namespace std;

long H(long n){
    if(n == 0){
        return n;
    }else if(n > 0) {
        return 2 * H(n-1) + 1;
    }else {
        return 1;
    }
}


int main(){
    long n;
    cin >> n;
    cout<<H(n)<<endl;
}
