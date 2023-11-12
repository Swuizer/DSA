#include <iostream>
using namespace std;


int getMin(int num[], int n){
    int min = INT8_MAX;
    // cout<<"Maximum Limit "<<min<<endl;

    for(int i = 0; i < n; i++){
        if(num[i] < min){
            min = num[i];
        }
    }
    return min;
}

int getMax(int num[], int n){
    // int max = INT8_MIN;
    int maximum = INT8_MIN;
    // cout<<"Maximum Limit "<<max<<endl;

    for(int i = 0; i < n; i++){

        maximum = max(maximum, num[i]);

        // if(num[i] > max){
        //     max = num[i];
        // }
    }
    return max;
}

int main(){
    int size;
    cin>>size;

    int num[100];

    // taking input in array
    for(int i = 0; i < size; i++){
        cin>>num[i];
    }

    cout<<"Maximum Value: "<<getMax(num, size)<<endl;
    cout<<"Minimum Value: "<<getMin(num, size)<<endl;

    return 0;
}