#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int val;
    cin >> val;

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == val)
        {
            flag = 1;
        }
    }

    if (flag == 1)
    {
        cout << "Found\n";
    }
    else{
        cout << "Not found\n";
    } 

    return 0;
}