#include<iostream>
#include<stdbool.h>
using namespace std;

bool ChkBit(unsigned int iNo)
{
    
    unsigned int iMask =0x80000001;
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
    cout<<" Both is ON"<<endl;
  }
  else
  {
    cout<<"Both is OFF"<<endl;
  }

     
    return 0;
} 