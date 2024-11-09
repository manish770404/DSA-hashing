#include <iostream>
#include <unordered_map>
using namespace std;
void display(unordered_map<int, int> umap)
{
    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}
int main()
{
    int arr[] = {5, 8, 7, 9, 6, 1, 5, 8, 7, 9, 6, 21, 14, 8, 98, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> umap;
    for (int i = 0; i <= n; i++)
    {
        umap[arr[i]]++;
    }
    display(umap);
    return 0;
}