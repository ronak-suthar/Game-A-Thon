# Game - A - Thon : Introduction to Git And Github

## Name : Ronak Suthar

### Problem Statement 1 :Given Two Integers Write a Function to Return Their Sum
TestCase 1: Input : 5 10 , Ouput : 15

``` 
int add(int a,int b){
    return a+b;
}
```

### Problem Statement 2 : Write Program for Given Participant Name Display Welcome Message of Game-A-Thon

TestCase 2: Input : Ronak , Output : Welcome to IEEE YCCE SB Game-A-Thon : Ronak

```
#include<stdio.h>

int main(void){
    char name[20];

    printf("Enter Your Name : ");
    scanf("%s",name);

    printf("Welcome to IEEE YCCE SB Game-A-Thon : %s\n",name);

    return 0;
}
```
