    #include<stdio.h>
void main ()
{
    int i,j,K=0;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<i;++j,++K)
      
        {
            printf("%c", K+'a');
        }
        printf("\n");
    }
}
    
  