#include <bits/stdc++.h>
using namespace std;

//charで受け取ったほうがよい
int main()
{
    string str;
    cin >> str;

    cout << (str.at(0) == 'a' || str.at(0) == 'i' || str.at(0) == 'u' || str.at(0) == 'e' || str.at(0) == 'o' ? "vowel" : "consonant") << endl;
}
