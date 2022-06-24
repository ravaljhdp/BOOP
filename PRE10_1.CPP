#include<iostream.h>
#include<conio.h>
float pi=3.14;
class a
{
private:
float rr,yu;
public:
a(int r){
rr=pi*pi*r;
cout<<"area  of circle:"<<rr<<endl;
}
a(int c,int d,int f){
yu=c*d*f;
cout<<"area of ractangle:"<<yu<<endl;
}
};
int main()
{
int r,c,d,f;
clrscr();
cout<<"enter radious:";
cin>>r;
	a(r);
cout<<"enter lenght:";
cin>>c;
cout<<"enter breath:";
cin>>d;
cout<<"enter hight:";
cin>>f;
	a(c,d,f);
getch();
return 0;
}
