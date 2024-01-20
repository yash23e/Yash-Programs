#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
  int fd = 0;
   char Arr[]="PRE PLACEMENT ACTIVITY";
   int Ret = 0;
  fd = open("Marvellous.txt",O_RDWR | O_APPEND);

Ret=write(fd,Arr,10);  //(kashat lihayach ,kay liahayach, kiti lihayach)

printf("%d  byte gets written in the file\n",Ret);
close(fd);

    return 0;
}