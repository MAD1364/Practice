struct bstSetNode {
    int val; // int compartment for set elements to be stored in
    bstSetNode* left; // pointer to left sub-tree
    bstSetNode* right; // pointer to right sub-tree

    bstSetNode(int x) : val(x), left(nullptr), right(nullptr) {} // struct constructor to construct a bstSetNode
};