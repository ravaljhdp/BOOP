#include<iostream.h>
#include<conio.h>
class base
{
public:
int base_i;
void disp_b()
{
cout<<"base class base_i:"<<base_i<<endl;

}};
class derived
{
public:
int derivedb;
void disp_d()
{
cout<<"derived class derivedb:"<<derivedb<<endl;
}
};

class test:public derived,public base
{
public:
int test_i;
void disp_t()
{
cout<<"derived class derivedb:"<<derivedb<<endl;
cout<<"from base class:"<<base_i<<endl;
cout<<"from base_i"<<test_i<<endl;
}
};
int main()
{
base a;
derived b;
test c;
clrscr();
a.base_i=5;

b.derivedb=5;

c.base_i=30;
c.derivedb=20;
c.test_i=25;

a.disp_b();


b.disp_d();
c.disp_b();
c.disp_d();
c.disp_t();
return 0;
}
