#include <iostream>
#include <string>

int isValidDate(int d,int m,int y);

int MonthOffset(int m)
{
    if (m==1)
    {
        return 0;
    }
    if (m==2)
    {
        return 3;
    }
    if (m==3)
    {
        return 2;
    }
    if (m==4)
    {
        return 5;
    }
    if (m==5)
    {
        return 0;
    }
    if (m==6)
    {
        return 3;
    }
    if (m==7)
    {
        return 5;
    }
    if (m==8)
    {
        return 1;
    }
    if (m==9)
    {
        return 4;
    }
    if (m==10)
    {
        return 6;
    }
    if (m==11);
    {
        return 2;
    }
    
    return 4;
}

int DayofWeek(int d, int m,int y)
{
    if (m<3)
    {
        y=y-1;
    }
    
    return (y+(y/4)-(y/100)+(y/400)+MonthOffset(m)+d)%7;
}

std::string DayName(int a)
{
    if (a==0)
    {
        return "Sunday";
    }
    if (a==1)
    {
        return "Monday";
    }
    if (a==2)
    {
        return "Tuesday";
    }
    if (a==3)
    {
        return "Wednesday";
    }
    if (a==4)
    {
        return "Thrusday";
    }
    if (a==5)
    {
        return "Friday";
    }
    if (a==6)
    {
        return "Saturday";
    }
    if (a==7)
    {
        return "Sunday";
    }
}

int main()
{
  int day, month, year;
  std::cout<<"Enter Year: \n";
  std::cin>>year;
  std::cout<<"Enter Month: \n";
  std::cin>>month;
  std::cout<<"Enter Date: \n";
  std::cin>>day;

  if (isValidDate(day,month,year)==1)
  {
    std::cout<<"Invalid Date \n";
  }
  else
  {
    MonthOffset(month);
    std::string name=DayName(DayofWeek(day,month,year));
    std::cout<<"It is "<<name;
  }
}