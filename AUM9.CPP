#include<iostream.h>
#include<conio.h>
class myclass
{
friend class secondclass;
public:
myclass()
{
secrate=0;
}
void printmember()
{
cout<<secrate<<endl;
}
private:
int secrate;
};
class secondclass
{
public:
void change(myclass& abc,int x)
{
abc.secrate=x;
}
};
int main()
{
myclass my_class;
secondclass sec_class;
my_class.printmember();
sec_class.change(my_class,5);
my_class.printmember();
getch();
return 0;
}

