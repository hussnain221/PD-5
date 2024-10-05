#include<iostream>
#include<string>
using namespace std;
string projectTimeCalculation();

main()
{
    cout<< projectTimeCalculation();
}

string projectTimeCalculation()
{
    int hour,days,worker;
    cout<<"Enter the hours needed: ";
    cin>>hour;
    cout<<"Enter the days that the firm has: ";
    cin>>days;
    cout<<"Enter the number of all the workers: ";
    cin>>worker;
    int t_days=days*10;
    int w_days=t_days-(t_days*0.1);
    int p_hour=w_days*worker;

    if(p_hour>=hour)
    {
        int timeLeft=p_hour-hour;
        string str1=to_string(timeLeft);
        return "Yes! "+str1+" hours left." ;
    }

    if(p_hour<hour)
    {
        int timeLeft=hour-p_hour;
        string str2=to_string(timeLeft);
        return"Not Enough Time! "+str2+" hours needed.";
    }
}