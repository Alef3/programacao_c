#include <stdio.h>
int main()
{
  int entrada[] = {1,2,3,4,5,6,7,3,4,5};
  int saida[10];
  int i=0,j=0,repetiu=0;
  
  while(i < 10)
  {
    for(j=i+1; j < 10; j++)
    {
      if(entrada[i]==entrada[j])
      {
        repetiu++;
      }
    }

    if (repetiu==0)
    {
      saida[i]=entrada[i];
      printf("%d ", entrada[i]);
      i++;
    }
    else if(repetiu > 0)
    {
      i++;
    }
    repetiu=0;
  }
  
}
