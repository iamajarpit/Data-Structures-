#include<iostream>
using namespace std;
int sum( int a, int b){
int c= a + b;
return c;
}


int main(){
    int num1,num2;
    cout<<"first number is: "<<endl;
    cin>>num1;
    cout<<"second number is: "<<endl;
    cin>>num2;
    cout<<"the sum of two numbers is : "<<sum(num1,num2)<<endl;
return 0;
}
