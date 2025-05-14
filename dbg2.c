
int factorial(int x)
{
    int y=1;
    while(x>0)
    {
        y*=x;
        x--;
    }

    return y;
}

int main()
{
    int a=factorial(3);
    int b=factorial(3);
    int c=factorial(5);

    return 0;
}
