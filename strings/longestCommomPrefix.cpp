#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

string longestCommonPrefix(vector <string> &str){
    //Sort the array of strings
    sort(str.begin(), str.end());

    string s1 = str[0];
    int i = 0;
    string s2 = str[str.size() - 1];
    int j = 0;

    string ans = "";

    while(i < s1.size() && j < s2.size()){
        if(s1[i] == s2[i]){
            ans += s1[i];
            i++;
            j++;
        }
        else{
            break;
        }
    }
    return ans;
}

string longestCommonPrefix(vector <string> &str){
    //Keeping first  string as const and comparing it with all other strings9
}

   int main(){
    int sizeOfStr;
    cout << "Enter number of strings: " << endl;
    cin >> sizeOfStr;
    cout << "Enter strings: " << endl;
    vector <string> str(sizeOfStr);
    for(int i = 0; i < sizeOfStr; i++){
        cin >> str[i];
    }
    cout << "Longest common prefix: " << longestCommonPrefix(str) << endl;

   return 0;
}