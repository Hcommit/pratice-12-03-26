//given an array in sorted order , print an arrray that is square of original array sorted in order;
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of elements in the array - ";
    cin >> n;

    vector<int> A(n);
    vector<int> B(n);

    cout << "Enter " << n << " elements in the array: ";
    for(int k = 0; k < n; k++){
        cin >> A[k];
    }

    for(int i = 0; i < n; i++){
        B[i]= A[i]*A[i];
    }
    int temp;

    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(B[j]>B[j+1]){
                temp=B[j];
                B[j]=B[j+1];
                B[j+1]=temp;
            }
        }
    }
    cout<<"Original array - "<<endl;
    for(int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }

    cout<<"sorted array - "<<endl;
    for(int i=0;i<n;i++){
        cout<<B[i]<<" ";
    }

}
