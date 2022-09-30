#include <stdio.h>
int top=-1,size,i,value,choice;
void enqueue(int arr[])
{
    if(top ==size-1)
        printf("\nqueue is full");
    else
    {
        printf("Enter the value to be pushed:");
        scanf("%d",&value);
        arr[++top]=value;
    }
}
void dequeue(int arr[])
{
    if(top==-1)
        printf("\nQueue is already empty");
    else
    {
        printf("Popped element is :%d",arr[0]);
        for(i=0;i<top;i++)
        {
            arr[i]=arr[i+1];
        }
        top--;
    }
}
void print(int arr[])
{
    if(top==-1)
        printf("\nQUEUE IS EMPTY");
    else
        {
            printf("\nElements in QUEUE are:");
            for(i=0;i<top;i++)
            {
                printf("%d ",arr[i]);
            }
        }
}
void main()
{
    printf("Enter size of array:");
    scanf("%d",&size);
    int arr[size];
      while(choice !=4)
    {
    printf("\nChoose any one :\n1.push\n 2.pop\n 3.print\n 4.Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
        switch(choice)
        {
        case 1:{
               enqueue(arr);
                break; }
        case 2:{
                dequeue(arr);
                break;}
        case 3:{
            print(arr);
                break;}
        case 4:{
            printf("ExIT POINT");
                break;}
        default:{
            printf("wrong press");
                break;}
        };
    }
}
