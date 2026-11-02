#include <iostream>
#include <string>

int format(int hour)
{
    if(hour>12)
    {
       // hour=hour-12;
        return hour-12;
    }
    if(hour==0)
    {
        //hour=12;
        return 12;
    }

    return hour;
}

std::string suffix(int hour)
{
    if(hour>=12)
    {
        return "PM";
    }
    else
    {
        return "AM";
    }
}

int main()
{
    int minute,hour;
    std::cout<<"ENTER TIME IN 24 HOUR FORMAT \n";
    std::cout<<"Enter Minutes: \n";
    std::cin>>minute;
    std::cout<<"Enter Hours: \n";
    std::cin>>hour;
    if(hour>=0 && minute>=0 && hour<=23 && minute<=59)
    {
        std::cout<<"TIME IN 12 HOUR FORMAT: \n";
        std::cout<<format(hour)<<":";
        if(minute<10)
        {
            std::cout<<"0";
        }
        std::cout<<minute<<" "<<suffix(hour)<<"\n";
    }
    else
    {
        std::cout<<"INVALID INPUTS";
    }

    return 0;
}