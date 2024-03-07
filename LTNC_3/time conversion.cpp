#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    char aa[10];
    for(int i=0;i<8;i++)
    {
        aa[i] = s[i];
    }
    if(s[8] == 'P')
    {
        if(s[0] == '0' && s[1] == '1')
        {
            aa[0] = '1';
            aa[1] = '3';
        }
        else if(s[0] == '0' && s[1] == '2')
        {
            aa[0] = '1';
            aa[1] = '4';
        }
        else if(s[0] == '0' && s[1] == '3')
        {
            aa[0] = '1';
            aa[1] = '5';
        }
        else if(s[0] == '0' && s[1] == '4')
        {
            aa[0] = '1';
            aa[1] = '6';
        }
        else if(s[0] == '0' && s[1] == '5')
        {
            aa[0] = '1';
            aa[1] = '7';
        }
        else if(s[0] == '0' && s[1] == '6')
        {
            aa[0] = '1';
            aa[1] = '8';
        }
        else if(s[0] == '0' && s[1] == '7')
        {
            aa[0] = '1';
            aa[1] = '9';
        }
        else if(s[0] == '0' && s[1] == '8')
        {
            aa[0] = '2';
            aa[1] = '0';
        }
        else if(s[0] == '0' && s[1] == '9')
        {
            aa[0] = '2';
            aa[1] = '1';
        }
        else if(s[0] == '1' && s[1] == '0')
        {
            aa[0] = '2';
            aa[1] = '2';
        }
        else if(s[0] == '1' && s[1] == '1')
        {
            aa[0] = '2';
            aa[1] = '3';
        }
    }
    else if(s[8] == 'A')
    {
        if(s[0] == '1'&& s[1] == '2')
        {
            aa[0] = '0';
            aa[1] = '0';
        }
    }
    aa[8] = '\0';
    return aa;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
