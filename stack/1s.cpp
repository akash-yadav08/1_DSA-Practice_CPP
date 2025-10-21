#include<iostream>
#include<vector>
using namespace std;

void push(vector<int> &nums,int ele){
    nums.push_back(ele);
    cout<<"successfull push element"<<endl;  
}

void pop(vector<int> &nums){

    if(nums.empty()){
        cout<<"not pop bz already Empty stack"<<endl;
    }
    nums.pop_back();
    cout<<"successfull pop element"<<endl;  
}

void top(vector<int> &nums){
    if(nums.empty()){
        cout<<"not Top element bz Empty stack"<<endl;
    }
    
    cout<<"Top element: "<<nums.back()<<endl;  
}



void show(){
    cout<<"========================================"<<endl;
    cout<<" 1. Push element in stack"<<endl;
    cout<<" 2. Pop element in stack"<<endl;
    cout<<" 3. Top element in stack"<<endl;
    cout<<" 4. Show all element of stack"<<endl;
    cout<<" 5. Exit "<<endl;
    cout<<"========================================"<<endl;

}

int main(){
    int choice;
    vector<int> v;

    
    while(true){
        show();
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                int ele;
                cout<<"enter push element: ";
                cin>>ele;
                push(v,ele);
                break;
            case 2:
                pop(v);
                break;
            case 3:
                top(v);
                break;

            case 4:
                cout<<"All element of stack: ";
                for(int vv:v){
                    cout<<vv<<" ";
                }
                cout<<endl;
                break;

            case 5:
                cout<<"Exit successfull !"<<endl;
                return 0;
            default :
                cout<<"Invalid choice !"<<endl;

                
        }

    }
    
}