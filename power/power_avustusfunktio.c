//power_paaohjelman apustusfunktio
long power(int x, int n)
{
  if(n==0) { return 1; }
  else { return x*power(x,n-1);  }
}
