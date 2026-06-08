#include <bits/stdc++.h>
using namespace std;
 
class Student{
    public: 
    int roll; 
    int cls; 
    double gpa; 

    Student(int r, int c, double g){
        roll=r; 
        cls=c; 
        gpa=g;
    }
};

int main()
{
   Student karim(12 , 5, 4.5); 
   Student rahim(10, 3, 4.4); 

   cout << karim.roll << " " << karim.cls << " " << karim.gpa << endl; 
   cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl; 

    return 0;
} 