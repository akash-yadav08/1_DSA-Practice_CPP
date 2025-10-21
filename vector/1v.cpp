#include<iostream>
#include<vector>
using namespace std;

int main (){

     vector<int> v = {1,2,3,4,};
     for(int num:v){
        cout<<num<<" ";
     }
     cout<<endl;

     cout<<"size: "<<v.size()<<endl;
     
     
// insert element through puch_back() fuction

      cout<<"push_back";
     v.push_back(5);
      for(int num:v){
        cout<<num<<" ";
     }
     cout<<endl;

 
// last element delete through pop_back() fuction;

     cout<<"pop_back";
     v.pop_back();
     for(int num:v){
        cout<<num<<" ";  
     }
     cout<<endl;


// use front() function to print first value

     cout<<"front value: "<<v.front()<<endl;

// use back() function to print last value value

     cout<<"back value: "<<v.back()<<endl;

// use at() function to print any value through intex

     cout<<"any value get: "<<v.at(3)<<endl;

    

     
     return 0;
}
