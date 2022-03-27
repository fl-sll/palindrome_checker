#include <iostream>
#include <string>

using namespace std;

template <typename T>
int palindrome(T s, int start, int end)
{
    if (end-start == 1 || start == end)
    {
        return 1;
    }
    else
    {
        if (s[start] == s[end])
        {
            return palindrome(s, start+1, end-1);
        }
        else
        {
            return 0;
        }
    }
}


int main(){
    string s;
    cout << "Enter a word: ";
    cin >> s;
    int n = s.length();
    if (palindrome<string>(s,0,n-1))
    {
        cout << "Word: " << s << " is a palindrome" << endl;
    }
    else
    {
        cout << "Word: " << s << " is not a palindrome" << endl;
    }
}