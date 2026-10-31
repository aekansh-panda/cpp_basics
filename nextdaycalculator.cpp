//Next day calculator: Using the functions from problem 1, read a valid date and print the date of the next day. 
//Handle month rollover (31 Jan → 1 Feb) and year rollover (31 Dec → 1 Jan)

#include <iostream>

int isLeap(int year);
int daysInMonth(int month, int year);
int isValidDate(int d,int m,int y);
//these functions are called from datavalidator.cpp

void nextDay(int day,int month,int year)
{
    if(isValidDate(day,month,year)==0)
  {
    if(day==31)
    {
        if(month==12)
        {
            day=1;
            month=1;
            year++;
        }
        else
        {
            day=1;
            month++;
        }
    }
    else if(day==30 && daysInMonth(month,year)==1)
    {
        day=1;
        month++;
    }
    else if(day==28 && month==2)
    {
        if(isLeap(year)==1)
        {
            day++;
        }
        else
        {
            day=1;
            month++;
        }
    }
    else
    {
        day++;
    }
      std::cout<<"The next date is \n";
      std::cout<<day<<"/"<<month<<"/"<<year;
  }
  else
  {
    std::cout<<"Invalid date. \n";
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
  
  nextDay(day,month,year);
  //std::cout<<"The next date is \n";
  //std::cout<<day<<"/"<<month<<"/"<<year;
  /**When you call nextDay(day, month, year), C++ copies the values into the function’s parameters. 
   * Inside nextDay, day++ changes only the copy. When the function ends, the copy is thrown away,
   *  and main still holds the original day, month, year. So main prints 15/2/2000 unchanged. simple fix=print inside the function */
   //g++ -Wall -Wextra -std=c++17 nextdaycalculator.cpp datavalidator.cpp -o program
   //.\program
   /**The lesson to take away

When output doesn’t match the code you wrote, suspect the build first:

Save all files (Ctrl+K, then S).
Compile with the full command and read any errors or warnings.
Run the new exe. */
  return 0;
}
