#include<iostream.h>
#include<conio.h>
int&max(int&,int&);
int main()
{
int a,b,p;
cout<<"enter A is:";
cin>>a;
cout<<"enter B is:";
cin>>b;
clrscr();
//normal call
p=max(a,b);
cout<<"NORMAL CALL->"<<endl;
cout<<"MAXIMUM:"<<p<<endl;
//left side call
max(a,b)=0;
cout<<"left side call->"<<endl;
cout<<"A="<<a<<endl;
getch();
return o;
}
int &max(int &x,int &y)
{
return(x>y?x:y);
}
