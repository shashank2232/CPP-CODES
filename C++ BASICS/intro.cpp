#include <iostream>
using namespace std;
int main()
{
//   string str;
//   cout<<"May I know your name?"<<endl;
//   cin>>str;
//   cout<<"Hello Mr. "<<str<<endl;

  string str;
  cout<<"May I know your name?"<<endl;
  getline(cin,str);                              // to get input the entire line
  cout<<"Hello Mr. "<<str<<endl;
  return 0;
}