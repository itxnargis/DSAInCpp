#include<iostream>
#include<vector>
using namespace std;

bool isAnagram(string str1, string str2){
    //create frequency array
    vector <int> freq(26, 0);

    // If lengths of str1 and str2 is not equal
    if(str1.length() != str2.length()){
        return false;
    }

    // storing freqency of characters in str1 and str2
    for(int i = 0; i < str1.length(); i++){
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    // check if frequency of every character is 0
    for(int i = 0; i < 26; i++){
        if(freq[i] != 0){ //not anagram
            return false;
        }
    }
    return true;

}

   int main(){
    string str1, str2;
    cout << "Enter first string: " << endl;
    cin >> str1;
    cout << "Enter second string: " << endl;
    cin >> str2;
    if(isAnagram(str1, str2)){
        cout << "Strings are anagrams " << endl;
    }
    else {
        cout << "Strings are not anagrams " << endl;
    }

   return 0;
}