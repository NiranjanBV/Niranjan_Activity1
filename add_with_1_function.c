//Write a program to add two user input numbers using one function.
int main()
{
    int a , b, c;
    printf("enter 1st number");
   scanf(" %d",&a);
   printf("enter 2nd number");
   scanf("%d",&b);
   c = add(a,b);
   printf(" Sum of %dand%d is %d",a,b,c);
   return 0;
}
int add(int a , int b)
{
    int sum;
    sum = a + b;
    return sum ;
}
