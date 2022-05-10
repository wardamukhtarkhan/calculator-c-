#include <iostream>
using namespace std;

int main() {
  int first , second,result;
   
   cout << "Enter two integrs:";
   cin>>first>>second;
   
   result=first+second;
   cout<<"sum is"<<result<<endl;
   
   result=first-second;
   cout<<"subtraction is "<<result<<endl;
   
   result=first*second;
   cout<<"multiplicatin is "<<result<<endl;
   
   result=first%second;
   cout<<"module is "<<result<<endl;
   
   result=first/second;
   cout<<"division is "<<result;
   
}