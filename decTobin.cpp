#include <iostream>
#define size 32
using namespace std;

void dectobin(int n){
    int i=0, b[size];
    while (n!=0){
        b[i] = n%2;
        n /=2;
        i++;
    }

    for (int t=i;t<size;t++){
        b[t] = 0;
    }

    for (int t=size-1;t>=0;t--){
        cout << b[t];
    }
    cout << endl;
}

int main(){
    int n;

    for (int i=1 ; i<20; i++){
        dectobin(i);
    }
}