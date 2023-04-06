#include <iostream.h>
#include <conio.h>
void main()
{
	int a[10],sum=0,avg=0;
	clrscr();
	for(int i = 0;i<10;i++)
	{
		cout<<"Enter The Elements Of Array [ "<<i+1<<"]"<<endl;
		cin>>a[i];
	}
	for(i = 0;i<10;i++)
	{
		sum += a[i];
	}
	avg = sum/10;
	cout<<"Sum: "<<sum<<endl;
	cout<<"Average: "<<avg;
	getch();
}