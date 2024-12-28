#include<iostream>
using namespace std;

int main(){
    int num, limit;
    cout<<"Enter a number for multiplication Table: ";
    cin>>num;
    cout<<"Till which number should the table be printed?: ";
    cin>>limit;
    //for loop
    for(int i = 0 ;i <= limit ;i++){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
    }
    cout<<"-------------------------------"<<endl;
    //while loop
    int i = 0;
    while(i <= limit){
        cout<<num<<" X "<<i<<" = "<<num*i<<endl;
        i++;
    }
    //cmon do-while loop's the same as while 
    return 0;
}