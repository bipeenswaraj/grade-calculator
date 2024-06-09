#include<iostream>
using namespace std;
int main(){
    float mark1,mark2,mark3,mark4,mark5;
    cout<<"Enter your marks : "<<endl;
    cout<<"Mark1"<<endl;
    cin>>mark1;
    cout<<"Mark2"<<endl;
    cin>>mark2;
    cout<<"Mark3"<<endl;
    cin>>mark3;
    cout<<"Mark4"<<endl;
    cin>>mark4;
    cout<<"Mark5"<<endl;
    cin>>mark5;
    float total = mark1+mark2+mark3+mark4+mark5;
    float p = (total / 5);
    cout<<"you got "<<p<<"percent"<<endl;
    if(p >= 90){
        cout<<"Grade A ";
    }
    else if(p >=80){
        cout<<"Grade B";
    }
    else if(p >= 70){
        cout<<"Grade C";
    }
    else if(p > 60){
        cout<<"Grade D";
    }
    else if(p > 50){
        cout<<" Grade E";
    }
    else{
        cout<<"Fail";
    }
    return 0;
}

