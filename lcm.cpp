#include <iostream>
#include <vector>

using namespace std;

vector<long long int> lcm(int A, int B){

    vector<long long int>result;

    //gcd
    int gcd;
    int a=A,b=B;
    while (a!=b){

        if (a>b)
        a = a-b;
        else
        b = b-a;
    }
    gcd = a;
    
    //lcm
    int lcm = (A*B)/gcd;

    result.emplace_back(lcm);
    result.emplace_back(gcd);

    return result;
        
    
}

int main(){
    int a, b;
    vector<long long int>res;

    cout << "ENTER NUMBERS: ";
    cin >> a >> b;

    res = lcm(a,b);

    for (auto it: res){
        cout << it << " ";
    }
}