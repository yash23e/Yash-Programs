#include<iostream>
#include<stdbool.h>
using namespace std;

bool ChkBit(unsigned int iNo)
{
    
    unsigned int iMask = 262160;
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
    cout<<"5th and 18th bit is ON"<<endl;
  }
  else
  {
    cout<<"Both bit is OFF"<<endl;
  }

     
    return 0;
} 