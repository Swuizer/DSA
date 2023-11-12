#include <iostream>
using namespace std;

int main(){
    int size, arr[100], sum = 0;
    cout<<"Enter your array size"<<endl;
    cin>>size;
    cout<<"Enter your array element"<<endl;
    for(int i = 0; i < size; i++){
        cin>>arr[i];
        sum = sum + arr[i];
    }
    cout<<"Total array sum: "<<sum<<endl;
    return 0;
}