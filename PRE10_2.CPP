#include<iostream.h>
#include<conio.h>
int c=0;
class em
{
public:
em(){
c++;
cout<<"the number of constroctor created object:"<<c<<endl;
}
};
int main()
{
clrscr();
em a,b,c,d,f;
getch();
return 0;
}