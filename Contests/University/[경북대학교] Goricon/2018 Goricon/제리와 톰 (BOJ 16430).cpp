#include <bits/stdc++.h>
#define lli long long int
#define MAX(A,B) A>B? A:B
#define MIN(A,B) A<B? A:B
#define gcd(A,B) __gcd(A,B)
#define lcm(A,B) A/__gcd(A,B)*B
#define MP make_pair
#define PB push_back
#define EPS 1e-9
using namespace std;

typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<int,double> pid;


int main()
{
    int a, b;
    scanf("%d %d",&a,&b);
    printf("%d %d",(b-a)/gcd(b-a,b),b/gcd(b-a,b));
}