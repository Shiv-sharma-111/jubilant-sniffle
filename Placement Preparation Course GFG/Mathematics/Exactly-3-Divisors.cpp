int exactly3Divisors(int N)
{
int count;
int res=0;
for(int i=1;i<=N;i++)
{
count=0;

for(int j=1;j<=i;j++)
{
if(i%j==0)
count++;
}
if(count==3)
res++;
}
return res;

}
