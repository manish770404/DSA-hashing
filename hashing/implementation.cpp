#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void display(unordered_map<string, int> umap)
{
    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

void display2(unordered_map<string, int> umap)
{
    for (auto itr = umap.begin(); itr != umap.end(); itr++)
        cout << itr->first << " " << itr->second << endl;
}

void search(unordered_map<string, int> umap, string key)
{
    if (umap.find(key) != umap.end())
    {
        auto temp = umap.find(key);
        cout << "key is:" << temp->first << endl;
        cout << "value is:" << temp->second << endl;
    }
    else
    {
        cout << "key not found!. Try again." << endl;
    }
}
void insertinumap(unordered_map<string, int> &umap, const string &key, int val)
{
    umap[key] = val;
}

void erasefromumap(unordered_map<string, int> &umap, const string &key)
{
    umap.erase(key);
}
int main()
{
    unordered_map<string, int> umap;
    umap["manish"] = 87;
    umap["manav"] = 57;
    umap["harish"] = 57;
    umap["devesh"] = 27;
    umap["harsh"] = 69;
    for (auto x : umap)
    {
        cout << x.first << "  roll no is  : " << x.second << endl;
    }
    cout << endl;

    search(umap, "maish");
    insertinumap(umap, "nikhil", 94);
    insertinumap(umap, "prakash", 101);
    display(umap);
    umap.insert(make_pair("jatin", 55));
    display(umap);

    return 0;
}