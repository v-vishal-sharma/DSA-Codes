#include <iostream>

using namespace std;

long long int facto(int n){
    long long int fact=1;
    for (int i=2; i<=n; i++){
        fact = fact*i;
    }
    return fact;
}

int fact(int n){
    int quo5=0;
    int num5=n;

    while (num5/5!=0){
        quo5 = quo5 + num5/5;
        num5=num5/5;
        cout << "quo5: " <<quo5<<endl;
    }
    return quo5;
}

int main(){
    int n, result;
    long long int factorial;
    cout << "enter number: ";
    cin >> n;

    result = fact(n);

    factorial = facto(n);
    cout << "factorial of "<<n<<" is: "<<factorial<<endl;

    cout << "number of trailing zeroes: " << result <<endl;
}