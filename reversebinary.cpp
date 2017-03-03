#include<iostream>

using namespace std;

long reversedNumber(long p)
{
  long result=0;
  while(p>0)
  {
    result<<=1;
    result|=p&1;
    p>>=1;

  }
  return result;
}
int main()
{
int gap=0,p=0;
long N;
cin>>N;

cout<<reversedNumber(N)<<endl;
return 0;
}
