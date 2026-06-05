#include<iostream>
using namespace std;
int main()
{ 
    int x= 5; 
    char y='A';  
    int num = 70;
    double z=3.1416; 

    // std::cout<< x << " " << y << " " << z << std::endl ;   // using namespace std;  before using it  
    cout<< x << " " << y << " " << z << endl ;  

    //Typecasting 
    cout<< (int)y << endl;  //ASCII value of A 
    cout << (char)num << endl ;

    return 0;
}