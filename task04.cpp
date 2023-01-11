#include<iostream>
using namespace std;

int calculateFirm(int hour,int days,int worker);

int main()
{
    int hour,days,worker;

    cout<<"Enter the Needed hours: "<<endl;
    cin>>hour;

    cout<<"Enter the number of days: "<<endl;
    cin>>days;

    cout<<"Enter the number of workers: "<<endl;
    cin>>worker;

    int ans = calculateFirm(hour,days,worker);
        if(ans > 0)
    {
        cout<<"Yes! "<<ans <<" hours left";
    }
    
        if(ans < 0)
    {
        ans = ans * (-1);
        cout<<"NOT enough! "<<ans<<" hours needed.";
    }
}

int calculateFirm(int hour,int days,int worker)
{
    int a,b,c,d,e;

    a = days*10;
    b = a * worker;
    c = (b*10)/100;
    d = b - hour-c;
    return d;   
}