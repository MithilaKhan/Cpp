#include<iostream>  
#include<iomanip>
using namespace std; 

int main() 
{ 
    double x =3.141595;  

    // printf("%0.3lf",x);   //c it working like that 

    cout << fixed << setprecision(3) << x;

    return 0;
}