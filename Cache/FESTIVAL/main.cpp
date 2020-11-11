#include <iostream>
#include <vector>
#define INF 100001
#define MIN(a, b) ( a < b ? a : b )
using namespace std;

double solve(vector<int> day, int l)
{
    int len = day.size();
    vector<double> sum_day = vector<double>(len, 0);

    sum_day[0] = day[0];
    for(int i = 1; i < len; i++)
        sum_day[i] = day[i] + sum_day[i - 1]; 

    double min_value = INF;
    for(int i = l - 1; i < len; i++)
    {
        double index = i + 1;
        min_value = MIN(min_value, sum_day[i] / index);
        for(int j = index; j < len; j++)
            min_value = MIN(min_value, (sum_day[j] - sum_day[j - (int) index]) / index);
    }

    return min_value;
}

int main()
{
    int t, n, l;

    cin>>t;
    cout << fixed;
    cout.precision(11);
    while(t--)
    {
        cin >> n >> l;

        vector<int> day = vector<int>(n,0);
        for(int i = 0; i < n; i++)
            cin >> day[i];


        cout << solve(day, l) << '\n';
    }

    cin >> t;

    return 0;
}