#include<stdio.h>
#include<dirent.h>
void main()
{
 DIR*d;
 struct difrent*de;
 d=opendir(".");
 while (de=readdir(d))
 printf("%s\n",de->d_name);
 closedir(d);
 }
