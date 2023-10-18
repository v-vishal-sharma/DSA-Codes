#include <iostream>
#include <vector>

using namespace std;

vector<int> sieve(int N){

    vector<int> res;
    vector<bool> digits(N+1, true);




    // for (int i=0; i<=N; i++){
   

    //     digits.emplace_back(true);
    // }

    // digits[0] =false; 
    // digits[1] =false; 

    

    // for (int i=4, j=6, k=10; i,j,k<=N; i=i+2, j=j+3, k=k+5){
        
    //      digits[i] = false;
    //      digits[j] = false;
    //      digits[k] = false;
        
    // }

    // for (int i=0; i<=N; i++){
    //     if (digits[i] == true){
    //         res.emplace_back(i);
    //     }
    // }

    //optimised and better code

    for (int i=2; i<=N; i++){
        if (digits[i]){
            res.emplace_back(i);
           
            for (int j=i*i; j<=N; j=j+i){
                digits[j]=false;
            }
        }
    }
   

    // for (int i=2; i<=N; i++){
    //     if (digits[i]){
    //         res.emplace_back(i);
    //     }
    // }


    return res;
    
}

int main(){
    vector<int> res;
    int n;

    cout << "Enter number: "<< endl;
    cin >> n;

    res = sieve(n);

    for (auto &it: res){
        cout << it << " ";
    }


}