#include <iostream>
using namespace std;
int main()
{
    int n,num=0,k=1;
    cout<<"Enter the Number of Rows : ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        num=num+i;
        num=num*10;
        k*=10;
    }
    num=num/10;
    k=k/10;
    for(int i=1;i<=n;i++)
    {
        cout<<num<<endl;
        num=(num%k)*10+num/k;
    }
    return 0;
}
