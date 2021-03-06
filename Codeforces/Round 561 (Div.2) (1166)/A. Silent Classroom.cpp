#include <bits/stdc++.h>
#pragma GCC optimize ("O3")
#pragma GCC optimize ("Ofast")
#define ll long long
#define MAX(A,B) ((A)>(B)?(A):(B))
#define MIN(A,B) ((A)<(B)?(A):(B))
#define gcd(A,B) (__gcd(A,B))
#define lcm(A,B) A/(__gcd(A,B))*B
#define MP make_pair
#define PB push_back
#define EPS 1e-9
#define ld long double
#define mod 1000000007LL
#define all(x) x.begin(), x.end()
#define usecppio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

typedef pair<int,int> pii;
typedef pair<int,string> pis;
typedef pair<int,double> pid;

int occ[26];
int comb2(int n)
{
    return MAX(n*(n-1)/2,0);
}

int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i<n; i++)
    {
        char str[120];
        scanf("%s",str);
        occ[str[0]-'a']++;
    }
    int ans = 0;
    for (int i = 0; i<26; i++)
    {
        ans+=(comb2(occ[i]/2));
        ans+=(comb2(occ[i]-occ[i]/2));
    }
    printf("%d",ans);
}
