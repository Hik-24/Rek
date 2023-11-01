#include <iostream>
using namespace std;

int F(int n) {
    if (n <= 1) {
        return n;
    } else {
        return F(n - 1) + F(n - 2);
    }
}

int main() {
    int n;
    cin >> n;

    int result = F(n);
    cout<<result<<endl;

    return 0;
}
