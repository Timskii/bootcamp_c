int my_fibonacci(int n)
{
    if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( my_fibonacci(n-1) + my_fibonacci(n-2) );
}