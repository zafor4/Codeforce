#include <bits/stdc++.h>
using namespace std;
int main()
{
    char str[100] = "GeeksforGeeks";
    char  str2[100];
    int k=0;
    for (int i = 0; i < strlen(str); i++)
    {
        int flag = 0;
        for (int j = 0; j < strlen(str); j++)
        {
            // checking if two characters are equal
            if (str[i] == str[j] and i != j)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            // cout << str[i];
            str2[k]=str[i];
            k++;
            
    }
    for (int i=0;i<strlen(str2);i++){
        cout<<str2[i];
    }
    return 0;
}