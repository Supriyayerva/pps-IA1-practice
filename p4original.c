#include<stdio.h>
int input_array_size()
{
  int n;
  printf("Enter the number of terms: ");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n])
{
  for(int i=0; i<n; i++)
  {
    printf("Enter a number: ");
    scanf("%d", &a[i]);
  }
}

int sum_n_arrays(int n, int a[n])
{
  int sum=0;
  for(int i=0; i<n; i++)
  {
    sum= sum + a[i];
  }
  return sum;
}

void output(int n, int a[n], int sum)
{
for(int i=0; i<n-1; i++)
{
  printf("%d+", a[i]);
}
  printf("%d is %d", a[n-1], sum);
}

int main()
{
    int n, sum;
    n = input_array_size();
    int a[n];
    input_array(n, a);
    sum = sum_n_arrays(n, a);
    output(n, a, sum);
    return 0;
}
