#include <iostream>
using namespace std;

int main() {
int n, K;
int a=0;
int b=1;
    cin>>n;
    K=n;
    while (b<=K) {
    n=a;
    a=b;
    cout<<b<<endl;
    b=n+a;
    }

    return 0;
}
