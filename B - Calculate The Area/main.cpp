#include <iostream>

using namespace std;

bool chk_prime(int num)
{
    bool check = false;
    if(num == 2 || num == 3 || num == 5 || num == 7 || num == 11 || num == 13 || num == 17 || num == 19 || num == 23 || num == 29 || num == 31 || num == 37 || num == 41 || num == 43 || num == 47 || num == 53 || num == 59 || num == 61 || num == 67 || num == 71 || num == 73 || num == 79 || num == 83 || num == 89 || num == 97)
    {
        check = true;
    }
    else if(num == 101 || num == 103 || num == 107 || num == 109 || num == 113 || num == 127 || num == 131 || num == 137 || num == 139 || num == 149 || num == 151 || num == 157 || num == 163 || num == 167 || num == 173 || num == 179 || num == 181 || num == 191 || num == 193 || num == 197 || num == 199)
    {
        check = true;
    }
    return check;
}

int main()
{
    int n = 0;
    int w = 0;
    cin>>n;
    if(n == 1)
    {
        cout<<"1 "<<"1";
    }
    else if(chk_prime(n) == true)
    {
        cout<<"1 "<<n;
    }
    else
    {
        int i = 2;
        for(; i < 10 ; i++)
        {
            w = n/i;
            if(w*i == n)
            {
                cout<<i<<" "<<w;
                break;
            }
        }
    }

    return 0;
}
