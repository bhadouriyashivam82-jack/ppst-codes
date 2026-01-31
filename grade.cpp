//shivam singh bhadouriya 
//roll no. 1153
//Grade according to marks
/*#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<<"enter the marks of student" ;
    cin>>marks;
    if (marks<=100&&marks>80)
    {
        cout<<"grade A";
    }
    else if (marks<=80&&marks>60)
    {
        cout<<"grade B";
    }
    else
    cout<<"grade C";

    
    return 0;
}*/
#include<iostream>
#include<cmath>
using namespace std;

int main(){
  float a, p,r,n,t,comp;
 
  cout<<"enter the principal value p";
  cin>>p;
  cout<<"enter the value of rate r ";
  cin>>r;
  cout<<"enter the value of time t";
  cin>>t;
  cout<<"enter the value of compunding frequency n";
  cin>>n;
 a=p*pow((1+r/n),n*t);
  comp=a-p;
  cout<<comp;

  return 0;
}