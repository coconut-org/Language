#ifndef __TREENODE_H__
#define __TREENODE_H__

#include <iostream>
#include <string>

struct TreeNode
{
  // An object of type TreeNode represents one node
  // in a binary tree of strings.
  std::string item; // The data in this node.
  TreeNode *left;   // Pointer to left subtree.
  TreeNode *right;  // Pointer to right subtree.
  TreeNode(const std::string &str = "")
  {
    // Constructor, defined for convenience.
    // Make a node containing the specified string.
    item = str;
    left = NULL;
    right = NULL;
  }
}; // end struct TreeNode

#endif // __TREENODE_H__