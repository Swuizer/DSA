#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    // cout<<"Enter two number"<<endl;
    // cin>>a;
    // cin>>b;
    // a = cin.get();
    // if(a>b){
    //     cout<<"A is Bigger"<<endl;
    // }else if(b>a){
    //     // cout<<"B is Bigger"<<endl;
    //     cout<<a<<endl;
    // }

    // a = 2;
    // b = a+1;
    // if((a=3)==b){ 
    //     cout<<a;
    // }else{
    //     cout<<a+1;
    // }

    int n;
    cin>>n;
    
    // int i = 1;

    // while(i<=n){
    //     int j = i;
    //     while (j<=n)
    //     {
    //         cout<<i;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // while(i<=n){
    //     int j = 1;
    //     while (j<=n)
    //     {
    //         cout<<n-j+1;
    //         j = j + 1;
    //         // j = n-j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }


    // int i = 1;
    // while(i<=n){
    //     int j = 1;
    //     int val = i;
    //     while (j<=i)
    //     {
    //         // cout<<n-j+1;
    //         // cout<<"* ";
    //         // cout<<val;
    //         cout<<val;
    //         val = val + 1;
    //         j = j + 1;
    //         // j = n-j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // Importent Pattern

    // int i = 1;
    // while(i<=n){
    //     int j = i;
    //     while (j<2*i)
    //     {
    //         cout<<j;
    //         j = j + 1;
    //         // j = n-j+1;
    //     }
    //     cout<<endl;
    //     i = i+1;
    // }

    // int i = 1;

    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout<<(i-j+1);
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }
    
    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         char ch = 'A' + j - 1;
    //         cout<< ch;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = 1;
    // char ch = 'A';
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= n)
    //     {
    //         cout<< ch;
    //         ch = ch + 1;
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = i;
    //     // int j = 1;
    //     while (j <= n + i - 1)
    //     // while (j <= n)
    //     {
    //         // char ch = 'A' + i + j - 2;
    //         // cout<<ch;
    //         cout<< char('A' + j - 1)<<" ";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout<< char('A' + i - 1)<<" ";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = 1;
    // while (i <= n)
    // {
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         cout<< char('A' + i + j - 2)<<" ";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;
    // }

    // int i = n;
    // while (i > 0)
    // {
    //     int j = i;
    //     while (j <= n)
    //     {
    //         cout<< char('A' + j - 1)<<" ";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i - 1;
    // }

    
    // int i = 1;
    // while(i <= n){

    //     // space print
    //     int space = n - i;
    //     while(space){
    //         cout<<" ";
    //         space = space - 1;
    //     }

    //     // stars print
    //     int j = 1;
    //     while(j <= i){
    //         cout<<"* ";
    //         j = j + 1;
    //     }
    //     cout<<endl;
    //     i = i + 1;

    // }

    // int row = 1;
    // while (row <= n)
    // {
    //     // Print Space
    //     int space = n - row;
    //     while(space){
    //         cout<<"  ";
    //         space = space - 1;
    //     }

    //     // Print 1st triangle
    //     int j = 1;
    //     while (j <= row)
    //     {
    //         cout<<j<<" ";
    //         j = j + 1;
    //     }
        

    //     // print 2nd triangle
    //     int start = row - 1;
    //     while (start)
    //     {
    //         cout<<start<<" ";
    //         start = start - 1;
    //     }
        

    //     cout<<endl;
    //     row = row + 1;
    // }
    

    int i = 1;
    while (i <= n)
    {
        // First Triangle
        int j = 1;
        while (j <= n - i + 1)
        {
            cout<<j<<" ";
            j++;
        }
        
        // Second Triangle
        int k = i-1;
        while (k)
        {
            cout<<"* ";
            k--;
        }

        // Third Triangle
        int p = i-1;
        while (p)
        {
            cout<<"* ";
            p--;
        }
        

        // Fourth Triangle
        int s = n - i + 1;
        while (s)
        {
            cout<<s<<" ";
            s--;
        }

        cout<<endl;
        i = i + 1;
    }

}