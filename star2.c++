#include <bits/stdc++.h>
using namespace std;
void display(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            /* code */
            if (j <= n - i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
}
int main()git 
{
    int n;
    cin >> n;
    display(n);
}
