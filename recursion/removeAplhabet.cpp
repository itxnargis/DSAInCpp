 /* Remove all the occurences of 'a' from string s = "abcax" */

 #include<iostream>
 #include<string>
 using namespace std;

    string removeChar(string &s, int index, int stringSize){
        if(index == stringSize){
            return "";
        }
        string current = "";
        current += s[index];

        return ((s[index] == 'a')? "" : current) + removeChar(s, index + 1, stringSize);
    }

    int main(){
        string s = "abcax";
        cout << "String before remove 'a': " << s << endl;
        int stringSize = 5;
        cout << "String after remove 'a': " << removeChar(s, 0, stringSize);

    return 0;
 }