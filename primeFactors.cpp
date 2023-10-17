#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//failed cuz not all prime numbers included
// vector<int> pFactor(int N){

//     // cout << "Inside function" << endl;

//     int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
//     int size = sizeof(prime)/sizeof(prime[0]);

//     vector<int> result;
//     int index=0;
//     while (N>1){
//         // cout << "Inside While" << endl;
//         if (N%prime[index]==0){
//             // cout << "Inside if" << endl;

//             if (find(result.begin(), result.end(), prime[index]) ==result.end()){
//                 result.emplace_back(prime[index]);
//             }

//             // cout << "N: " << N << endl;
//             N = N/prime[index];
//             // cout << "N: " << N << endl;
//             index = 0;
//         }
//         else {
//             // cout << "Inside else" << endl;
//             index++;
//         }
//     }

//     return result;
// }

vector<int> pFactor(int N){
    vector<int> res;

    return res;

}

int main(){
    int n;
    vector<int> result;

    cout << "Enter a number: ";
    cin >> n;

    result = pFactor(n);

    for (auto &it: result){
        cout << it << " ";
    }

    cout << endl;
    return 0;
}