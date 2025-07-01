#include <iostream>
// This is a efficient algorithm
using namespace std;
int main() {
    long  n;
    long res =0;
    std::cin >> n;
    
    for(long i=1;i<=n;i++) {
        if (i%2 == 0){
            res += i;
            
        }
        else {
            res -= i;
            
        }
    }
    cout << res << endl;
    return 0;
}