#include <bits/stdc++.h>
#define lli long long int
#define MAX(A,B) A>B?A:B
#define MIN(A,B) A<B?A:B
#define gcd(A,B) __gcd(A,B)
#define lcm(A,B) A/(__gcd(A,B))*B
#define MP make_pair
#define PB push_back
#define EPS 1e-9
#define ld long double
#define modulo 998244353
using namespace std;

typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<int,double> pid;

int arr[203000];
int ptr=0;

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        int x;
        scanf("%d",&x);
        arr[ptr] = (x%2);
        ptr++;
        if (ptr>1)
        {
            if (arr[ptr-1]==arr[ptr-2])
            {
                arr[ptr-2] = -1;
                arr[ptr-1] = -1;
                ptr -= 2;
            }
        }
    }
    if (ptr<=1)
        printf("YES");
    else
        printf("NO");
}
