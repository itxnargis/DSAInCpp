#include<iostream>
#include<vector>
using namespace std;

int sqrt(int &value){
    int low = 1;
    int high = value;
    int ans = -1;

    while(low <= high){
       int mid = low + (high - low)/ 2;

        if(mid * mid <= value){
           ans = mid;
           low = mid + 1;
        }
        else {
             high = mid - 1;
        }
    }
    return ans;
}

   int main(){
    int value;
    cout << "Enter value: ";
    cin >> value;
    cout << "Sqrt of " << value << " is: " << sqrt(value);
   return 0;
}