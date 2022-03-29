#include <iostream>
#include <string>

using namespace std;

int palindrome(string s, int start, int end)
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

int palindrome_iterate(string s)
{
    int a = 0;
    for (int i = 0; i < (s.length()/2); i++)
    {
        if (s[i] == s[s.length() - 1 - i])
        {
            a++;
        }
    }
    if (a == (s.length() / 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(){
    string s;
    cout << "Enter a word: ";
    cin >> s;
    int n = s.length();
    if (palindrome(s,0,n-1))
    {
        cout << "Word: " << s << " is a palindrome using recursion" << endl;
    }
    else
    {
        cout << "Word: " << s << " is not a palindrome using recursion" << endl;
    }
    if (palindrome_iterate(s))
    {
        cout << "Word: " << s << " is a palindrome using iteration" << endl;
    }
    else
    {
        cout << "Wprd: " << s << " is not a palindrome using iteration" << endl;
    }
}