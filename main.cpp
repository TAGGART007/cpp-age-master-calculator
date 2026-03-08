#include <iostream>

using namespace std;

void agecal(int year,int mnth,int date,int currentyear,int currentmnth,int currentdate);
int main()
{
   int a,b;
   int agedifference;
   int age;
   int opr,lp=0;
   int defaultyear=2019,defaultmnth=7,defaultdate=23;
   int amnth,bmnth;
   int aday,bday;
   int useryear,usermnth,userdate;
   while(lp!=1)
   {
   cout<<"1.Calculate Ur Age\n2.Age Difference\n";
   cin>>opr;
   switch(opr)
   {
       case 1:
           cout<<"Enter Your Birth Year : ";
           cin>>useryear;
            cout<<"Enter Your Birth Month : ";
           cin>>usermnth;
            cout<<"Enter Your Birth Date : ";
           cin>>userdate;
           agecal(useryear,usermnth,userdate,defaultyear,defaultmnth,defaultdate);
           break;

       case 2:
        break;

   }
   }
    return 0;
}
void ageccc()
{

}
void agecal(int year,int mnth,int date,int currentyear,int currentmnth,int currentdate)
{
    int calyear,caldate,calmnth;
    calyear=currentyear-year;

    if(mnth<currentmnth)
    {
        calmnth=currentmnth-mnth;
    }
    else{
            if(mnth>=6)
            {
                calmnth=12-(mnth-currentmnth);
                calyear=calyear-1;
            }else{
                calmnth=mnth-currentmnth;
            }

    }
    if(date<currentdate)
    {
     caldate=currentdate-date;
    }
    else
    {
        int a;
        if(mnth%2==0)
        {
            a=30;
        }else{
            a=31;
        }
        caldate=a-(date-currentdate);
        calmnth=calmnth-1;
    }
    cout<<"Your Age is : "<<calyear<<endl;
    cout<<"Age Month is : "<<calmnth<<" Months"<<endl;
    cout<<"Age date is : "<<caldate<<" Days"<<endl;
    return;
}
void agedifcal(int ayr,int byr,int amnth,int bmnth ,int aday,int bday)
{
    return;
}
