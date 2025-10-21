#include<iostream>
#include<vector>
using namespace std;

vector<int> printfunction(vector<int> &nums){

    nums.push_back(20);
    
    for(int n:nums){
        cout<<n<<" ";
    }
    return nums;
};


int main(){
    int size;
    cout<<"size of vector: ";
    cin>>size;
    vector<int> v;

    cout<<"enter element of vector: ";
    for(int i=0;i<size;i++){
        int n;
        cin>>n;
        v.push_back(n);
    }

    printfunction(v);
    cout<<endl;
    for(int mm:v){
        cout<<mm<<" ";
    }
    return 0;
}