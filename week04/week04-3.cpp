#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(99);
    a.push_back(88);
    a.push_back(77);

    for (int num : a) cout << num << ' ';
    cout << "\n";

    vector<int> a2(5, 7);
    for (int num : a2) cout << num << ' ';
    cout << "\n";

    vector<int> a3 = {9, 8, 7, 1, 2, 3, 6, 5, 4, 0};
    for (int num : a3) cout << num << ' ';
    cout << "\n";
}
