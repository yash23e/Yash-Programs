#include<iostream>
using namespace std;

class Array
{
  private:
  int *Arr;
  int ilength;

  public:
      Array(int Size)
     {

    ilength=Size;
    Arr=new int[ilength]; 
    }
    ~Array()
    {
        delete[]Arr;
    }
    void Accept()
    {
        int iCnt =0;
        cout<<"Enter the element :"<<"\n";
        for(iCnt=0; iCnt<ilength:iCnt++)
        {
            cin>>Arr[iCnt];
        }
    }
    void Display()
    {
     int iCnt =0;
        cout<<"Enter the element :"<<"\n";
        for(iCnt=0; iCnt<ilength:iCnt++)
        {
            cout<<"Arr[iCnt]"<<
        }
    }
};

int main()
{
   
Array aobj(5);
Array aobj2(12);

    return 0;
}

