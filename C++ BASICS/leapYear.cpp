// given year a leap year or not
// with One-liner expression
#include <bits/stdc++.h>
using namespace std;
  
bool checkYear(int year)
{
      
    // Return true if the year is a multiple
    // 0f 4 and not multiple of 100.
    // OR year is multiple of 400.
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}
  
// Driver code
int main()
{
    int year;
    cin>>year;
    
    checkYear(year) ? cout << "Leap Year" : cout << "Not a Leap Year";
    return 0;
}