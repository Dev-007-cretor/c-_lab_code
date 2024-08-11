
#include<iostream>

using namespace std;

class time
{

    int hours;
    int mint;
    int sec;

    public:

    int setdata(int h,int m,int s)
    {

        hours=h;
        mint=m;
        sec=s;

    }

    void print ()
    {

        cout<<hours<<mint<<sec<<endl;
    }

    int sum(time,time,time)

    {
        hours=t1.hours+t2.hours+t3.hours;

        min=t1.min+t2.min+t3.min;

        sec=t1.sec+t2.sec+t3.sec;

    }
};

int main()
{

    time t1,t2,t3,t4;

    ti.setdata(3,4,5);
    t2.setdata(2,5,6);
    t3.setdata(1,4,2);
    t4.sum(t1,t2,t3);
}
