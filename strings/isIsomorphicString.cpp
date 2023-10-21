#include<iostream>
#include<vector>
using namespace std;

bool isIsomorphic(string str1, string str2){
    vector <int> v1(128, -1);
    vector <int> v2(128, -1);

    //If string length does not match
    if(str1.length() != str2.length()){
        return false;
    }

    //Checking if value of character at idx i match in both vectors
    for(int i = 0; i < str1.length(); i++){
       if(v1[str1[i]] != v2[str2[i]]) {
        return false;
       }

       //Storing string position in vectors for characters at idx i
       v1[str1[i]] = v2[str2[i]] = i;
    }
    return true;
}

   int main(){
    string str1, str2;
    cout << "Enter first string: " << endl;
    cin >> str1;
    cout << "Enter second string: " << endl;
    cin >> str2;
    if(isIsomorphic(str1, str2)){
        cout << "They are isomorphic " << endl;
    }
    else {
        cout << "They are not isomorphic" << endl;
    }


   return 0;
}