#include <iostream>
using namespace std;
int main(){
  int num1;
  cout<<"Enter 1st number : ";
  cin>>num1;
  char op;
  cout<<"Enter the operator : ";
  cin>>op;
  int num2;
  cout<<"Enter 2nd number : ";
  cin>>num2;
  switch(op){
    case'+':
    cout<<"Result : " <<num1+num2<<endl;
    break;
    case'-':
    cout<<"Result : " << num1-num2<<endl;
    break;
    case'*':
    cout<<"Result : " << num1*num2<<endl;
    break;
    case'/':
    cout<<"Result : " << num1/num2<<endl;
    break;
    default:
    cout<<"invalid operator"<<endl;
  }
}