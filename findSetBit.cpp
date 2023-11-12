#include <iostream>
using namespace std;

int main(){
    int a = 2, b = 15, c;

    // c = a & 1;
    int val, val2, count = 0;
    while (a != 0 || b != 0)
    {
        val = a & 1;
        val2 = b & 1;
        if(val){
            count++;
        }
        if(val2){
            count++;
        }
        a = a >> 1;
        b = b >> 1;
    }
    
    cout<<"Value: "<<count<<endl; 
}