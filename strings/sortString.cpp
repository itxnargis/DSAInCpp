/* Given a strings str, sort the given string
    * Connstraints: The string will contain only alphabetical characters from a - z
    * Input: "starr"
    *Output: "arrst"
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

string countSort(string &str) {
    // Firstly create frequency array
    vector<int> freq(26, 0); // 26 -> size of frequency array, 0 -> initialize

    // Storing the frequency of every character in the string
    for (int i = 0; i < str.size(); i++) {
        int index = str[i] - 'a';
        freq[index]++;
    }

    // Create our sorted string
    string sortedStr;
    for (int i = 0; i < 26; i++) {
        while (freq[i]--) {
            sortedStr += i + 'a';
        }
    }
    return sortedStr;
}

int main() {
    string str;
    cout << "Enter string: " << endl;
    cin >> str;
    cout << "Sorted string: " << countSort(str) << endl;

    return 0;
}
