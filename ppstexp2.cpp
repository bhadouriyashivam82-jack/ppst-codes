//shivam singh bhadouriya
//roll no.1153
//fibonacci series
#include<iostream>
using namespace std;

int main(){
    int n,z;
    int x=0;
    int y=1;
    cout<<"enter the value of n ";
    cin>>n;
    for (int i = 0; i <= n; i++)
    {
        z=y+x;
        x=y;
        y=z;
    }
    cout<<z;
    return 0;
}

//shivam singh bhadouriya
//roll no.1153
//prime number
#include<iostream>
using namespace std;

int main(){
    int i,n;
    //n must be equal to or greater than 2;
    cout<<"enter the any number ";
    cin>>n;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<" n is not the prime number";
            break;
    }
        else
            cout<<"n is the prime number";
    }
    return 0;
}
//shivam singh bhadouriya
//roll no.1153
//sum of n number
#include<iostream>
using namespace std;

int main(){
    int n;
    int sum=0;
    cout<<"enter the number n ";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        sum=i+sum;
        }
    cout<<sum;
    return 0;
}
//shivam singh bhadouriya
//roll no.1153
//palindrome number
#include<iostream>
using namespace std;

int main(){
    int n,rem,b,u;
    int num=0;
    cout<<"enter the number n ";
    cin>>n;
    b=n;
    int s=0;
    while (b!=0)
    {
        b/=10;
        s=s+1;   
    }
    u=n;
    for ( int i = 0; i<s; i++)
    {
        rem=u%10;
        num=(num*10)+rem;
        u/=10;
    }
    if (n==num)
    {
        cout<<"number is palindrome";
    }
    else
    cout<<"number is not palindrome";
    return 0;
}

//shivam singh bhadouriya
//roll no.1153
//factorial
#include<iostream>
using namespace std;

int main(){
    int i=1;
    int fac=1;
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    for ( i =1; i<=n; i++)
    {
        fac=fac*i;
    }
    cout<<fac;
    return 0;
}
//shivam singh bhadouriya 
//roll no.1153
//Diamond series 
#include<iostream>
using namespace std;

int main()
{
    int i,j;
    for (int i = 1; i <6; i++)
    {
        for (int j = 1; j<6-i; j++)
        {
        cout<<" ";
        }
        for (int  j = 1; j <=2*i-1; j++)
        {
          cout<<"*";

        }
        cout << endl;
        
    }
    for (int i = 4; i>0; i--)
    {
        for (int j = 1; j<6-i; j++)
        {
        cout<<" ";
        }
        for (int  j = 1; j <=2*i-1; j++)
        {
          cout<<"*";

        }
        cout << endl;

    }    

    
    return 0;
}