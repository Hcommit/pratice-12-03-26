#include<iostream>
#include<vector>
using namespace std;
int main(){
    int nums,n;
    cout<<"Enter size of vector array - ";
    cin>>n;
    vector<int>v;

    cout<<"Enter "<<n << " elements of vector array - ";
    for(int i=0;i<n;i++){
        cin>>nums;
        v.push_back(nums);
    }
    cout<<endl;
    cout<<"vector ARRAY --"<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}