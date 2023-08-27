#include<iostream>
#include<string>
using namespace std;

int Count(string str)
{
	int upper = 0, lower = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			upper++;
		else if (str[i] >= 'a' && str[i] <= 'z')
			lower++;
	}
	if  (lower>=upper){
        return 1;
    }
    else {
        return -1;
    }
}
int main(){
    string s;
    cin>>s;
    if (Count(s)==1){
        for (int i=0;i<s.length();i++){
            if (s[i]>='A' && s[i]<='Z'){
                s[i]=s[i]+32;
            }
        }

    }
    else if (Count(s)==-1) {
        for (int i=0;i<s.length();i++){
            if (s[i]>='a'&& s[i]<='z'){
                s[i]=s[i]-32;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}