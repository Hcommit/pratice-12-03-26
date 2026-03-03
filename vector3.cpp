// find the number of elements in vector which is greater than a number x
#include<iostream>
#include<vector>
using namespace std;

int main(){
 
    int n;
    int count = 0;

    cout << "Enter the no of elements in array - ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter " << n << " elements in the array" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter value of x - ";
    cin >> x;

    for(int i = 0; i < n; i++){
        if(arr[i] > x){
            count++;
        }
    }

    cout << "There exist " << count 
         << " number of elements that are greater than " 
         << x << " in the array" << endl;

    cout << "They are - " << endl;

    for(int i = 0; i < n; i++){
        if(arr[i] > x){
            cout << arr[i] << " ";
        }
    }

    return 0;
}