#include <bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int low = 1;
    int high = n;
    int ans;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid * mid <= n)
        {
            ans = mid;
            low = mid + 1;
        }
        else if (mid * mid > n)
        {
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }
    cout<<ans<<"\n";

    return 0;
}