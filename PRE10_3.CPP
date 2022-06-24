#include<iostream.h>
#include<conio.h>
class aum
{
private:
	int sum;
public:
	aum(int a,int b){
	sum=a+b;
	}
	void show(){
	cout<<"the answer of sum is"<<sum<<endl;
	}
};
int main()
{
int x,y;
clrscr();
cout<<"enter the value of x:"<<endl;
cin>>x;
cout<<"enter the value of y:"<<endl;
cin>>y;
aum s(x,y);
s.show();
getch();
return 0;
}

