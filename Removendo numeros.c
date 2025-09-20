#include <stdio.h>
int main()
{
  int entrada[] = {1,2,3,4,5,6,7,3,4,5};
  int saida[10];
  int i,j,unico=0,dif=0;
  
  for(i=0 ; i < 10; i++)
  {
    for(j=0; j < 10; j++)
    {
      if(entrada[i]==entrada[j])
      {
        unico++;
      }
    }

    if (unico==1)
    {
      saida[i]=entrada[i];
      printf("%d ", entrada[i]);
    }
    else
    {
      for(int r=0; r < i; r++)
      {
        if(saida[r]!=entrada[i])
        {
          dif++;
        }
      }
      if(dif==i)
      {
        saida[i]=entrada[i];
        printf("%d ", entrada[i]);
      }
      dif=0;
    }
    unico=0;
    
  }
  for (int s = 0; s < 10; s++)
  {
    //printf("%d ", saida[s]);
  }
  
}
