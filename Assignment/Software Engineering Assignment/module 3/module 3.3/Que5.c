/*WAP to take two Array input from user and sort them in ascending or
descending order as per user’s choice*/
#include<Stdio.h>
void main ()
{
    int arr[50],i,size,a,j;
    printf("Enter Size of your arr:");
    scanf("%d",&size);
    printf("Enter Your Arr:");
    for(i=0;i<size;i++)
    {
        scanf("%d\t",&arr[i]);
    }
    for(i=0;i<size;++i)
    {
        for(j=i+1;j<size;++j)
    {
        if(arr[i]>arr[j])
        {
            a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
        }
    }
    
}
printf("The number is ascending order is:");
    for(i=0;i<size;++i)
    {
        printf("%d\t",arr[i]);
    }
}