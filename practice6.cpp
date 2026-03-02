// sort array into even and odd
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array - ";
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);
    int even = 0;

    cout << "Enter " << n << " elements in the array: ";
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] % 2 == 0){
            even++;   // count even numbers
        }
    }

    // Fill even numbers first
    int e = 0, o = even;
    for(int i = 0; i < n; i++){
        if(A[i] % 2 == 0){
            B[e] = A[i];
            e++;
        } else {
            B[o] = A[i];
            o++;
        }
    }

    cout << "Resultant Array - " << endl;
    for(int i = 0; i < n; i++){
        cout << B[i] << " ";
    }

    return 0;
}
