#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

   int main(){
    // string str = "Priya";
    // string str1("Verma");
    // cout << str << " " << str1 << endl;

    // string str;
    // //cin >> str;
    // getline(cin, str);
    // cout << str << endl;


    // print ASCII value of characters
    // char ch = 'a';
    // cout << int(ch) << endl;

    //reverse a string
    // string str = "hello";
    // reverse(str.begin(), str.end());
    // cout << str << endl;

    //print substring of a string
    // string str = "survive";
    // cout << str.substr(1,4) << endl;
    // cout << str.substr(1) << endl;

    //concatenate of strings
    // string s1 = "Priya";
    // string s2 = "Verma";
    // s1 += s2;
    // cout << s1 << endl;

    //concatenate char array
    // char s1[20] = "priya";
    // char s2[20] = "Verma";

    // strcat(s1, s2);
    // cout << s1 << endl;

    //Push back  char to string
    // string s1 = "abcd";
    // char ch = 'e';
    //  s1.push_back(ch);
    //  cout << s1 << endl;

    //size of string
    // string s1 = "abcde";
    // cout << s1.length() << endl;

    // char ch[20] = "abcde";
    // cout << strlen(ch) << endl;

    //convert integer to string
    int num = 123;
    string str = to_string(num);
    str +=  "4";
    cout << str << endl;
   return 0;
}