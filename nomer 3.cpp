#include <iostream>
using namespace std;

int fpb(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return fpb(b, a % b);
    }
}

int main() {
    int bilangan1, bilangan2;
    cin >> bilangan1;
    cin >> bilangan2;

    int hasil_fpb = fpb(bilangan1, bilangan2);
    std::cout<<hasil_fpb<<std::endl;

    return 0;
}
