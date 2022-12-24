#include <iostream> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int target;
    int stick_length = 64;
    int cnt = 0;
    cin >> target;
    while (target)
    {
        if (target % 2 == 1)
            cnt++;
        target /= 2;
    }
    cout << cnt;
    return 0;
}
