#include <iostream>
using namespace std;
int dodaj(int *p,int *n)
{
    int wartosc;
    cin>>wartosc;
    p[*n]=wartosc;
    *n+=1;
}
int wstaw(int *p,int *n)
{
    int x;
    do
    {
        cin>>x;
    }while(x>=*n);
    int wartosc;
    cin>>wartosc;
    p[x]=wartosc;
}
void wyswietl (int *p,int *n)
{
    cout<<endl;
    for (int i=0;i<*n;i++)
    {
        cout<<p[i]<<endl;
    }
    cout<<endl;
}
void usun(int *p,int *n)
{
    int x;
    do
    {
     cin>>x;
    }while(x>*n);
    for (int i=x;i<*n;i++)
    {
        p[i]=p[i+1];
    }
    *n-=1;
}
int main()
{
    int x;
    int *p=NULL;
    int n=0;
    int *pn=&n;
    bool prawda=true;
    p= new int[n];
    while (prawda==true){
    cout<<"1. Dodaj element"<<endl<<"2. Wstaw"<<endl<<"3. Wyswietl"<<endl<<"4. Usun"<<endl<<"5. Zamknij"<<endl;
    cin>>x;
    switch (x)
    {
    case 1:
        {dodaj(p,pn);
        break;}
    case 2:
        {wstaw(p,pn);
        break;}
    case 3:
        {wyswietl(p,pn);
        break;}
    case 4:
        {usun(p,pn);
        break;}
    case 5:
        prawda=false;
    }}
    return 0;
}
