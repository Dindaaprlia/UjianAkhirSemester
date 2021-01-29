#include <iostream>

using namespace std;

int main()
{
    int angka;
    cout<<"bilangan ganjil genap"<<endl;
    cout<<"masukan batas maksimal angka;";  
    cin>>angka;
    cout<<"bilangan genap"<<endl; 
    for(int i=1; i<=angka; i++)
    {
        if(i%2==0)
        cout<<i<<"-";
    }
    cout<<" "<<endl;
    cout<<"bilangan ganjil"<<endl;
    for(int i=1; i<=angka; i++)
    {
        if (i%2!=0)
            cout<<i<<" - ";
    }
}
