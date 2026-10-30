//Date validator: Read day, month, year. Write bool isLeap(int), int daysInMonth(int month, int year), and bool isValidDate(int d, int m, int y).
// Print whether the date is valid. Handle February in leap years and months with 30 vs 31 days.
#include <iostream>

void isLeap(int year)
{
    if ((year%4==0 && year%100 !=0) || (year%400==0) )
    {
        std::cout<<year<<" is a leap year \n";
    }
    else
    {
        std::cout<<year<<" is not a leap year \n";
    }
}

int daysInMonth(int month, int year)
{
    if (month<=7)
    {
        if(month%2==0 && month!=2)
        {
            return 1;
        }
        else if (month==2)
        {
            if((year%4==0 && year%100 !=0) || (year%400==0))
            {
                return 2;
            }
            else
            {
                return 3;
            }
        }
        else
        {
            return 4;
        }
    }
    else
    {
        if (month%2==0)
        {

            return 4;
        }
        else
        {
            return 1;
        }
    }
}

int isValidDate(int d,int m,int y)
{
    if((d>31 || m>12) && (d,m,y)>0)
    {
        return 1;
    }
    else if(d>30 && daysInMonth(m,y)==1)
    {
        return 1;
    }
    else if(d>28 && daysInMonth(m,y)==3)
    {
        return 1;
    }
    else if(d>29 && daysInMonth(m,y)==2)
    {
        return 1;
    }
    else
    {
        return 0;
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
    isLeap(year);
    if(daysInMonth(month,year)==2)
    {
        std::cout<<"This month has 29 days \n";
    }
    else if(daysInMonth(month,year)==3)
    {
        std::cout<<"This month has 28 days \n";
    }
    else if(daysInMonth(month,year)==1)
    {
        std::cout<<"This month has 30 days \n";
    }
    else
    {
        std::cout<<"This month has 31 days \n";
    }
  }
    return 0;
}