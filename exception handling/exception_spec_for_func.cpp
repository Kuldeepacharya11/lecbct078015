
#include<iostream>
using namespace std;

class DAYERR{};
class MONTHERR{};
class YEARERR{};
class Date
{
private:
   int day,month,year;

public:
   void read_date() throw(DAYERR,MONTHERR);
   void show_date();

};

void Date::read_date() throw(DAYERR,MONTHERR)
{
    cout<<"enter day:";
    cin>>day;
    if (day>31)
       throw DAYERR();
    cout<<"enter month:";
    cin>>month;
    if(month>12)
      throw MONTHERR();
    cout<<"enter year:";
    cin>>year;
    if (year<0)
    throw YEARERR();


}
void Date::show_date()
{
    cout<<"date of birth is "<<day<<"/"<<month<<"/"<<year;
}

int main()
{
    Date d1;
    try
    {
        cout<<"enter your date of birth"<<endl;
        d1.read_date();
        d1.show_date();
    }
    catch(DAYERR)
    {
        cout<<"Exception: day cannot be greater than 31";
    }
    catch(MONTHERR)
    {
        cout<<"Exception: month cannot be grater than 12";
    }
    catch(YEARERR)
    {
        cout<<"Exception: year cannot be negative";
    }

return 0;
}