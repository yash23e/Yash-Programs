#include<iostream>
#include<stdbool.h>
using namespace std;

bool ChkBit(unsigned int iNo)
{
    
    unsigned int iMask =448;
    unsigned int iResult = 0;

    iResult = iNo & iMask;
    if(iNo==iMask)
    {
      return true;
    }
    else
    {
      return false;
    }

}

int main()
{
  unsigned int iValue = 0;
  bool bRet = false;

 cout<<"Enter number:"<<endl;
 cin>>iValue;

  bRet=ChkBit(iValue);
  if(bRet==true)
  {
    cout<<"7th , 8th and 9th bit is ON"<<endl;
  }
  else
  {
    cout<<"All bit is OFF"<<endl;
  }

     
    return 0;
} 