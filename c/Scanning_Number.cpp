#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string solution(string &, int);

int main()
{
    string S = "25-sdjnofwE932-s----dsi89J";
    int K = 3; //# characters in each group

    cout << "Solution: " << solution(S, K);

    return 0;
}

string solution(string &S, int K)
{
    string temp = "",
           new_str = "";

    int first = 0; //# of chars in first group
    int dashes = 0; //# of dashes
    int j = 0;

    for (int i = 0; i < S.length(); i++)
    {
        if (S[i] != '-')
        {
            if (isalpha(S[i]))
                temp += toupper(S[i]);
            else
                temp += S[i];
        }
    }

    first = temp.length() % K;

    if (first != 0)
    {
        while (j < first)
        {
            new_str += temp[j];
            j++;
        }
        new_str += '-';
    }

    j = 0;
    for (int k = first; k < temp.length(); k++)
    {
        new_str += temp[k];
        j++;

        if (j == K && k < temp.length() - 1)
        {
            new_str += '-';
            j = 0;
        }
    }

    return new_str;
}