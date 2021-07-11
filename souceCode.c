#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 1000
void findFindPair(int *Arr,int size,int sum)
{
    int hash[max]={0};
    int index,temp;
    for(index=0;index<size;index++)
    {
        temp=sum-Arr[index];
        if(temp>=0 && hash[temp]==1)
        { 
            printf("Pair with given sum  %d is (%d,%d)",sum,Arr[index],temp);
            
        }
        hash[Arr[index]]=1;
    }
}
int main()
{
    int *Arr,size,sum;
    printf("Enter the size of the memory\n");
    scanf("%d",&size);
    //Allpcating Memory for the array
    Arr=(int*)malloc(sizeof(int)*size);
    printf("Enter the value of the sum");
    scanf("%d",&sum);
    printf("Enter the element of the Arrey");
    for(int index=0;index<size;index++)
    {
        scanf("%d",&Arr[index]);
    }
    findFindPair(Arr,size,sum);
}