#include <iostream> 

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N;
    cin >> N;
    for (int i = 0;i < N;i++)
    {
        for (int j = 0;j <= i;j++)
            cout << '*';
        cout << endl;
    }

    return 0;
}