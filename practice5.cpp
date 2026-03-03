// sort array into 0s and 1s
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array - ";
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);
    int zero = 0;

    cout<<"enter "<<n<<" elements in the array"
    for(int i = 0; i < n; i++){
        cin >> A[i];
        if(A[i] == 0){
            zero++;
        }
    }

    // Fill zeros first
    for(int k = 0; k < zero; k++){
        B[k] = 0;
    }

    // Fill ones after zeros
    for(int j = zero; j < n; j++){
        B[j] = 1;
    }

    cout << "Resultant Array - " << endl;
    for(int i = 0; i < n; i++){
        cout << B[i] << " ";
    }

    return 0;
}