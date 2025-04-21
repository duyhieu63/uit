
#include <bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:

  	void preOrder(Node *root) {

      	if( root == NULL )
          	return;

      	std::cout << root->data << " ";

      	preOrder(root->left);
      	preOrder(root->right);
	}

/* you only have to complete the function given below.
Node is defined as

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {
        Node*add=new Node(data);
        if(!root)
            return add;
        Node*iter=root;
        Node*before=NULL;
        while(iter)
        {
            if(iter->data>data)
                iter=iter->left;
            else
                iter=iter->right;
        }
        if(before->data>data)
            before->left=add;
        else
            before->right=add;
        return root;
    }
};

int main() {

    Solution myTree;
    Node* root = NULL;

    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }

    myTree.preOrder(root);

    return 0;
}
