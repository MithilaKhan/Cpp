#include <bits/stdc++.h>
using namespace std;

int main() 
{ 
    string s="I am Mithila"; 
    s.resize(20); // extra field it show as null . if write s.resize(20,'*'); then instead of null it show star
    cout << s << endl;
    return 0;
}