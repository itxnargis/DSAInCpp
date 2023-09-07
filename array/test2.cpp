/*Find the second largest element in the given array*/

#include<iostream>
#include<set>
#include<vector>
#include<algorithm>
using namespace std;

   int main(){

    vector <int> v(6);
    cout << "Enter elements: " << endl;
    for(int i = 0; i < 6; i++){
        cin >> v[i];
    }
   set<int>s(v.end(), v.begin());
   v.clear();
   for(auto it : s)
   v.push_back(it);
  int n = v.size();

  cout << v[n - 2];


   return 0;
}