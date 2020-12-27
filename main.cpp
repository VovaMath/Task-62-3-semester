#include <iostream>
#include <cstdlib>
#include <set>

using namespace std;

int main()
{
    set<int> S;
    int N;
    cin >> N;
    int a[N];
    for (int i = 0; i < N; i++) {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < N; i++)  {
        if (S.find(a[i]) != S.end()) cout << "YES" << endl;
        else                         cout << "NO" << endl;
        S.insert(a[i]);
    }
    return 0;
}
