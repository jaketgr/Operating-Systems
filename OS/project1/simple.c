#include<math.h>
#include<stdio.h>
int main()
{
int numArray[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
double sum = 0.0, avg;

for (int i = 0; i < 10; i++)
{
sum += sqrt(numArray[i]);
}
for (int i = 0; i < 10; i++) 
{
    avg = sum/10.0;
}
printf("Average of array square roots: %lf", avg);
return 0;
}
