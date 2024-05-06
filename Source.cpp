#include<iostream>
#include<vector>
using namespace std;

void Caesarcipher(string m)
{
    const char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
                       'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
                       'u', 'v', 'w', 'x', 'y', 'z' };
    vector<char> encrypted;
    int shift = 2;
    for (int i = 0; i < m.size(); i++)
    {
        int newIndex = 0;
        for (int j = 0; j < 26; j++)
        {
            int charIndex = m[i] - 'a';
            newIndex = (charIndex + shift) % 26;
        }
        encrypted.push_back(alphabet[newIndex]);
    }
    for (int k = 0; k < encrypted.size(); k++)
    {
        cout << encrypted[k];
    }

    for (int s = 0; s < encrypted.size(); s++)
    {
        int charIndex = encrypted[s] - 'a';
        int newIndex = (charIndex - shift) % 26;
        cout << alphabet[newIndex];
    }
}

void main()
{
    string message;
    cout << "enter your message" << endl;
    cin>>message;
    Caesarcipher(message);

}