#include<iostream>
using namespace std;

int add(int num1, int num2){
    int sum= num1+num2;
    // return sum;
}

int add(int num1, int num2, int num3){
    int sum = num1+num2+num3;
    return sum;

}

float add(float num1, float num2){
    float sum = num1+num2;
    return sum;
}

int multi(int, int);  // It's an example of fuctions prototype

int main(){
    
    int a=4;
    int b =5;
    float c=4.6;
    float d=3.6;
    
    cout<<multi(c,d)<<endl;
    
    return 0;
}

int multi(int num1, int num2){
    int mul = num1*num2;
    return mul;
}