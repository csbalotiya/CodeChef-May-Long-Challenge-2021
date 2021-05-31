#include <bits/stdc++.h>

#define lli long long int


using namespace std;
int main(){
    lli t;
    cin >> t;
    while (t--)
    {
        int un = 0;

        char arr[3][3];
        int x = 0, o = 0;
        bool is1 = 0;
        int is2 = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == 'X')
                    x++;
                else if (arr[i][j] == 'O')
                    o++;
                else
                    un++;
            }
        }
        int flag = 1;
        if (x < o || abs(x - o) > 1)
            flag = 0;

        else
        {

            int cntx = 0, cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[0][i] == 'X')
                    cntx++;
                else if (arr[0][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[1][i] == 'X')
                    cntx++;
                else if (arr[1][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[2][i] == 'X')
                    cntx++;
                else if (arr[2][i] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][0] == 'X')
                    cntx++;
                else if (arr[i][0] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1  =true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][1] == 'X')
                    cntx++;
                else if (arr[i][1] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                if (arr[i][2] == 'X')
                    cntx++;
                else if (arr[i][2] == 'O')
                    cnto++;
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;
            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == j)
                    {
                        if (arr[i][j] == 'X')
                            cntx++;
                        else if (arr[i][j] == 'O')
                            cnto++;
                    }
                }
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
            cntx = 0;
            cnto = 0;

            for (int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    if (i == 2 - j)
                    {
                        if (arr[i][j] == 'X')
                            cntx++;
                        else if (arr[i][j] == 'O')
                            cnto++;
                    }
                }
            }
            if (cntx == 3 || cnto == 3)
            {
                if (cntx == 3)
                    is1 = true;
                else if (cnto == 3)
                    is2 = true;
            }
        }
        if (flag == 0)
            cout << 3 << endl;
        else if ((is1 && is2))
        {
            cout << 3 << endl;
        }
        else if (flag)
        {
            if (is1)
            {
                if (x == o)
                    cout << 3 << endl;
                else
                    cout << 1 << endl;
            }
            else if (is2)
            {
                if (o < x)
                    cout << 3 << endl;
                else
                    cout << 1 << endl;
            }
            else if (un == 0)
                cout << 1 << endl;
            else
                cout << 2 << endl;
        }
    }
    return 0;
}
