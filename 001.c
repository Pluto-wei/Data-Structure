//打印从1到N的递归实现
#include<stdio.h>
void PrintN (int N)
{
    if(N){
        PrintN(N-1);
        printf("%d\n",N);        
    }
    return;
}

int main (){
    int N;
    scanf("%d",&N);
    PrintN(N);
    return 0;
}
