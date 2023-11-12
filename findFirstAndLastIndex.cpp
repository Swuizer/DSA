#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        // Go TO Right Part
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int binaryEnd(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        // Go TO Right Part
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){
    int even[6] =  {2, 8, 8, 8, 8, 12 };
    // int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(even, 6, 8);
    cout<<"Index of 8 is "<<index<<endl;

    int end = binaryEnd(even, 6, 8);
    cout<<"Index of 8 is "<<end<<endl;

    return 0;
}