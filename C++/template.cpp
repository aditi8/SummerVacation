#include<iostream>
#include<cstdio>
#include<cstring>
#include<ctime>
#include<cmath>



//other includes
#include<algorithm>
#include<climits>
#include<vector>
#include<queue>
#include<stack>
#include<bitset>
#include<set>
#include<deque>
#include<cstdlib>
#include<map>
#include <utility>

#define re



using namespace std;

#define FOR(a,b)        for(__typeof(b) i=(a);i<(b);i++)
#define ll long long


int getMin(int a,int b)
{
    return a>b?b:a;
}



bool isPrime(int n)
{
    for(int i=2;i<=Math.sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

void swap(double *a, int i , int j)
{
    double temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

void qsort(double *a, int left, int right)
{
    int i, last;

    if (left >= right)
        return;
    swap(a, left, (left + right) / 2);
    last = left;
    for (i = left + 1; i <= right; i++)
        if (a[i] < a[left])
            swap(a, ++last, i);
    swap(a, left, last);

    qsort(a, left, last - 1);
    qsort(a, last + 1, right);
}


void solve()
{


}


int main(int argc, char const *argv[])
{
#ifdef re
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("log.txt", "w", stderr);
#endif

    solve();

    #ifdef re
    printf("\n  Time Taken  %.31f sec\n",(double)clock()/(CLOCKS_PER_SEC));

    #endif
    return 0;
}
