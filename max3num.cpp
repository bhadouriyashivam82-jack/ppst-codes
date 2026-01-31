//shivam singh bhadouriya 
//roll no.1153
//maximum of three number
#include<iostream>
using namespace std;

int main(){
    int a, b, c;
    cout<<"enter the value of a, b, c";
    cin>>a>>b>>c;
    if (a>b)
    {
      if (a>c)
      {
       cout<<"maximum number is "<<a;

      }
      else
       cout<<"maximum number is "<<c;

    }
    else if (b>c)
    {
      cout<<"maximum number is "<<b;
    }
    else
    cout<<"maximum number is "<<c;

    
    return 0;
}