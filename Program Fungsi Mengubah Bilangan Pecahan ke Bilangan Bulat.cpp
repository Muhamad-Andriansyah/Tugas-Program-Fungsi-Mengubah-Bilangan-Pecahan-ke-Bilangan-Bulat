#include<iostream>
using namespace std;
typedef struct pecahan{
    int pb;
    int py;
};
int main (int argc, char *argv[])
{
    pecahan p1,p2;
    cout<<"*******************************"<<endl;
    cout<<"MENGUBAH BILANGAN PECAHAN MENJADI BILANGAN BULAT"<<endl;
    cout<<"*******************************"<<endl;
    cout<<"Masukan pembilang =";
    cin>>p1.py;
    cout<<"Masukan penyebut =";
    cin>>p1.py;
    cout<<"\t        "<<p1.pb<<endl;
    cout<<"\tp1 =       -"<<endl;
    cout<<"\t            "<<p1.py<<endl;
    if ("/")
    {
        cout<<" Hasilnya ="<<(p1.pb)/(p1.py)<<endl;
    }
    return 0;
}
