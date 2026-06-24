#include<bits/stdc++.h> 
using namespace std; 
int main(){
    vector<int> v={1,3,6,8,10};  
    vector<int> v2; 
    vector<int> v3={1,5,3,5,6,5};
    v2=v;   

    // for(int i=0; i<v2.size(); i++){     
    //     cout << v2[i] << " ";
    // }  
    
    v2.insert(v2.begin()+3,23);  //inserts 23 at index 3

    v2.pop_back();  //removes last element  

    v2.push_back(100);  //adds element at the end   

    v2.erase(v2.begin()+2); //remove index 2 value and  replace idx 2 with idx 3op
    v2.erase(v2.begin()+2,v2.begin()+5);  //remove 2 idx to 4 idx 

    

    for(int x:v2){  //when don't need index
        cout << x << " ";
    } 
    cout << endl;

    replace(v3.begin(),v3.end(), 5 , 7); 
    replace(v3.begin(),v3.end()-1, 5 , 7); // if i want to don't replace last element then end-1 

    for(int x:v3){  //when don't need index
        cout << x << " ";
    } 
    cout << endl; 

    auto it = find(v3.begin(), v3.end(),500); 
    if(it == v3.end()){
        cout << "Not found";
    }else{
        cout << "Found";
    }

    return 0; }

