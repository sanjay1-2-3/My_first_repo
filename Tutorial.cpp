#include<iostream>
#include<string>
using namespace std;

class Height
{
private:
    int feet;
    int inches;
public:
    void setdata(int f, int i)
    {
        feet = f;
        inches = i;
    }

    void showdata()
    {
        cout << "Height: feet = " << feet << " inches = " << inches << endl;
    }

    void operator = (Height &obj)
    {
        this->feet = obj.feet;
        this->inches = obj.inches;
    }
};

int main()
{
    Height boy1;
    Height boy2;
    boy1.setdata(10, 52);
    boy2.setdata(9, 36);
    boy1.showdata();
    boy2.showdata();

    boy1 = boy2;
    boy1.showdata();
    return 0;
}








































//Code for understanding I/O operators.
/*#include<iostream>
#include<string>
using namespace std;

class Time
{
private:
    int hr;
    int min;
    int sec;
public:
    Time()
    {
        hr = 0;
        min = 0;
        sec = 0;
    }

    void settime(int h, int m, int s)
    {
        hr = h;
        min = m;
        sec = s;
    }

    friend ostream &operator << (ostream &output, Time &t);

    friend istream &operator >> (istream &input, Time &p);
};
    ostream &operator << (ostream &output, Time &t)
    {
        output << "Hours : " << t.hr << " Minutes : " << t.min << " Seconds : " << t.sec << endl;
        return output;
    }

    istream &operator >> (istream &input, Time &p)
    {
        input >> p.hr >> p.min >> p.sec;
        return input;
    }

int main()
{
    Time T1;
    Time T2;
    Time T3;
    T1.settime(10, 45, 30);
    T2.settime(11, 51, 20);

    cout << T1 << endl;
    cout << T2 << endl;

    cout << "Enter the time T3 : " << endl;
    cin >> T3;
    cout >> T3 << endl;;

    return 0;
}*/