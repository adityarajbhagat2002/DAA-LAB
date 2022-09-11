#include <bits/stdc++.h>

using namespace std;

struct dataNode
{
    int freq;
    char ch;
};

struct node
{
    char ch;
    int freq;
    string code;
    node *left, *right;
};

void dfs(node *root, string code, vector<node *> &v)
{
    if (root == NULL)
        return;
    if (root->left == NULL && root->right == NULL)
    {
        root->code = code;
        v.push_back(root);
        return;
    }
    dfs(root->left, code + "0", v);
    dfs(root->right, code + "1", v);
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n;
    scanf("%d", &n);
    dataNode *data = new dataNode[n];
    for (int i = 0; i < n; i++)
        cin >> data[i].ch >> data[i].freq;
    sort(data, data + n, [](dataNode a, dataNode b)
    { return a.freq < b.freq; });
    node *leaf1 = new node;
    leaf1->ch = data[0].ch;
    leaf1->freq = data[0].freq;
    leaf1->left = leaf1->right = NULL;
    node *leaf2 = new node;
    leaf2->ch = data[1].ch;
    leaf2->freq = data[1].freq;
    leaf2->left = leaf2->right = NULL;
    node *root = new node;
    root->ch = '\0';
    root->freq = leaf1->freq + leaf2->freq;
    root->left = leaf1;
    root->right = leaf2;
    for (int i = 2; i < n; i++)
    {
        node *leaf = new node;
        leaf->ch = data[i].ch;
        leaf->freq = data[i].freq;
        leaf->left = leaf->right = NULL;
        node *newRoot = new node;
        newRoot->ch = '\0';
        newRoot->freq = root->freq + leaf->freq;
        newRoot->left = root;
        newRoot->right = leaf;
        root = newRoot;
    }
    vector<node *> v;
    dfs(root, "", v);
    for (int i = 0; i < v.size(); i++)
        cout << v[i]->ch << " " << v[i]->code << endl;
    return 0;
}