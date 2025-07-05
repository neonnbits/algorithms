#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); // Disable sync between C and C++ I/O
    cin.tie(0);                  // Disable automatic flush of cout before cin

    string s;
    cin >> s;

    vector<string> words;
    string current_word = "";
    for (int i = 0; i < s.length();)
    {
        if (i + 2 < s.length() && s.substr(i, 3) == "WUB")
        {
            if (!current_word.empty())
            {
                words.push_back(current_word);
                current_word = "";
            }
            i += 3;
        }
        else
        {
            current_word += s[i];
            i += 1;
        }
    }

    if (!current_word.empty())
    {
        words.push_back(current_word);
    }

    for (size_t i = 0; i < words.size(); i++)
    {
        cout << words[i] << " ";
    }
    cout << endl;
    return 0;
}