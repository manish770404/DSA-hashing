#include <iostream>
#include <map>
#include<vector>
using namespace std;

struct Node
{
    int key;
    Node *left;
    Node *right;

    Node(int val)
    {
        key = val;
        left = right = NULL;
    }
};
void getverticalorder(Node* root,int hd,map<int,vector<int>> &mp)
{
    if(root==NULL)
    {
        return;
    }
    mp[hd].push_back(root->key);
    getverticalorder(root->left,hd-1,mp);
    getverticalorder(root->right,hd+1,mp);
}



int main()
{
    Node* root =new Node(10);
    root->left=new Node(7);
    root->right=new Node(4);
    root->left->left=new Node(3);
     root->left->right=new Node(11);
    root->right->left=new Node(14);
    root->right->right=new Node(6);

    map<int,vector<int>> mp;

    int hd=0;
    getverticalorder(root,0,mp);

    for(auto x: mp)
    {
        for(int i=0;i<(x.second).size();i++)
        {
            cout<<(x.second)[i]<<" ";

        }
        cout<<endl;
    }
}