#include <iostream>

using namespace std;

int gcd (int A, int B){
    int gcd, res;
    int big, small;
    
    big = max(A,B);
    small = min(A,B);

    // cout << "before loop big and small: " << big << " " << small << endl;

    while (res!=0){
        res = big%small;
        // cout << "res: " << res << endl;
        if (res==0){
            gcd = small;
            break;
        }
        // cout << "gcd: " << gcd << endl;
        big = small;
        // cout << "big: " << big << endl;
        small = res;
        // cout << "small: " << small << endl;
    }

    return gcd;
}

int main(){
    int res, a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    res = gcd(a,b);

    cout << "GCD is: " << res;

    return 0;
}