
nt main()
{
    int n,result,mul=1;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    result=fact(n,mul);
    printf("Factorial of %d is %d" ,n,result);
    getch();
}
int fact(n,mul)
{
    if(n>=1)
    {
        mul=n*mul;
        n--;
        fact(n,mul);
    }
    else
        return mul;

}
