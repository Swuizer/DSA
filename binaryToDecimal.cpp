#include <iostream>
#include <math.h>
using namespace std;


int decimalToBinary(int n){
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n&1; 
        ans = (bit * pow(10,i)) + ans;
        n = n >> 1;
        i++;
    }
    return ans;
}

int main(){

    // int n;
    // cin>>n;

    // int result = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     result = result + (bit * pow(10, i) );
    //     cout<<"Cout "<<bit<<" "<<result<<endl;
    //     n = n >> 1;
    //     i++;
    // }
    
    // cout<<"Answer is "<<result<<endl;


    int n;
    cin >> n;

    if(n<0){
        // if number is negative
        n = n*(-1);
        cout<<"Data: "<<n<<endl;
        int ans = decimalToBinary(n);
        cout<<"Answer: "<<ans<<endl;
    // Find 2's compliment of the number
    // 1's comp
    int newAns = (~ans);
    cout <<"Result 1: "<< newAns << endl;
    // 2's comp
    newAns = newAns+1;
    cout <<"Result: "<< newAns << endl;

    } else {
        // if number is positive 
        int ans = decimalToBinary(n);
        cout << ans << endl;
    }


//     int n;
//     cin >> n;

//     int i = 0, ans = 0;

//     while (n != 0)
//     {
//         int digit = n % 10;

//         if(digit == 1){
//             ans = ans + pow(2, i);
//         }

//         n = n/10;
//         i++;
//     }

//     cout<<ans<<endl;
}