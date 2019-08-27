#include<iostream.h>
#include<conio.h>
void main()
{
  int ar[5][2]={{1,2},{1,3},{1,4},{1,5},{1,6}};
  for(int i=0;i<5;i++)
  {for(int j=0;j<2;j++)
  {
  cout<<"ar["<<i<<"]["<<j<<"] ="<<ar[i][j]<<"\n";
  }
  }
  getch();
  }