#include<iostream>
using namespace std;

void printnum(int n){
    if(n==1){
        cout <<"1\n";
        return;
    }
    cout<<n<<" ";
    printnum(n-1);

}

int main(){
    printnum(20);
    return 0;
}
