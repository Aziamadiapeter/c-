#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter your mark ";
cin>>num;
cout<<"\n You entered, "<<num<<endl;

if(num >=80)
{
cout<<"You got A grade";	
}
else if(num >=75)
{
cout<<"You got B+ grade";	
}
else if(num >=70)
{
cout<<"You got B grade";	
}
else if(num >=65)
{
cout<<"You got C+ grade";	
}
else if(num >=60)
{
cout<<"You got C grade";	
}
else if(num >=55)
{
cout<<"You got D+ grade";	
}

else if(num >=50)
{
cout<<"You got D grade";	
}
else if(num >=45)
{
cout<<"You got E grade";	
}
else if(num <=40)
{
cout<<"You got F grade";	
}



return 0;
}
