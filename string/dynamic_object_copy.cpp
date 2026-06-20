#include <bits/stdc++.h>
using namespace std; 

class Cricketer{
    public: 
    string country; 
    int jersey;  

    Cricketer(string country, int jersey){
        this->country=country; 
        this->jersey=jersey;
    }
};
int main(){ 
  Cricketer* sakib =  new Cricketer("Bangladesh",10);  
  Cricketer* musfiq = new Cricketer("Bangladesh",12); 

  *musfiq=*sakib; 
  delete sakib; 

  cout << musfiq->country << " " << musfiq->jersey <<endl;

}