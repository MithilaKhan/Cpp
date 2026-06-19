#include <bits/stdc++.h>
using namespace std;

class Student{
    public: 
    string name; 
    int roll; 
    int math; 
    int bio;

    Student(string name, int roll, int math, int bio){
        this->name=name;
        this->roll =roll;
        this->math=math;
        this->bio=bio;
    } 

    void total_mark(){
        cout << "Total marks of  " <<name << " = "<< math+bio <<endl;
    }
};

int main() 
{   
   
   Student rakib("mithila khan",8,75,80); 
    rakib.total_mark();


    return 0;
}