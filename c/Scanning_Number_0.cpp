#include <iostream>
#include <string>

#define FOO(x) ((x) < 10 ? (x+x) : (x-x))
using namespace std;

string solution(string &, int);

int main()
{
    string S = "25-sdjnof--------------------wE932-s----dsi89J";

    int K = 3;

    S = solution(S, K);
    cout << S << endl;

    cout << FOO(7) << endl; //Observe that these macro calls cause the
                            //code block specified in the macro to
                            //execute
    cout << FOO(14) << endl;
    return 0;
}

string solution(string &S, int K)
{
    string new_str = "",
           temp;

    int k = 0,
        s_len = S.length();

    for (int i = s_len - 1; i >= 0; i--)
    {
        if (S[i] != '-')
        {
            if (isalpha(S[i]))
            {
                temp = toupper(S[i]);
                new_str = temp + new_str;
            }
            else
                new_str = S[i] + new_str;
            k++;
        }

        if (i > 0&& k == K)
        {
            new_str = '-' + new_str;
            k = 0;
        }
    }

    return new_str;
}