#include<conio.h>
#include<iostream.h>
struct student
{
  int r_no;
  char name[20];
  int age;
  char br[20];
};
int main()
{
  student s;
  clrscr();
  cout<<"enter studet details"<<endl;
  cout<<"enter r_no:";
  cin>>s.r_no;
  cout<<"enter name:";
  cin>>s.name;
  cout<<"enter age:";
  cin>>s.age;
  cout<<"enter br:";
  cin>>s.br;
  cout<<"display student details"<<endl;
  cout<<"r_no"<<s.r_no<<endl;
  cout<<"name"<<s.name<<endl;
  cout<<"age"<<s.age<<endl;
  cout<<"br"<<s.br<<endl;
  getch();
  return 0;
}
