#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    // traverse over the string to find >= 7 consecutive players
    int count = 0;
    for (size_t i = 0; i < s.length(); i++)
    {
        if (i > 0 && s[i] != s[i - 1])
            count = 1;
        else
            count++;
        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}