//
// Created by Kevin Rodriguez on 10/15/25.
//

#include "BinSearchTree.h"
#include "TreeNode.h"
#include <string>
#include <vector>
#include <utility>
#include <optional>
#include <string_view>
#include <iostream>

// ================================
// Constructor / Destructor
// ================================
BinSearchTree::~BinSearchTree() {
    destroy(root_);
    root_ = nullptr;
}





// ================================
// Public member functions
// ================================

void BinSearchTree::insert(const std::string& word) {
    // root_ is always the top of the tree
    root_ = insertHelper(root_, word);
}






void BinSearchTree::bulkInsert(const std::vector<std::string>& words) {
    // Loop over each word and insert it into the tree
    for (const std::string& word : words) {
        insert(word);
    }
}






bool BinSearchTree::contains(std::string_view word) const noexcept {
    // TODO
    return false;
}

std::optional<int> BinSearchTree::countOf(std::string_view word) const noexcept {
    // TODO
    return std::nullopt;
}

void BinSearchTree::inorderCollect(std::vector<std::pair<std::string, int>>& out) const {
    // TODO
}

std::size_t BinSearchTree::size() const noexcept {
    // TODO
    return 0;
}

unsigned BinSearchTree::height() const noexcept {
    // TODO
    return 0;
}






// ================================
// Private static helper functions
// =================================

void BinSearchTree::destroy(TreeNode* node) noexcept {
    if (node == nullptr) {
        return;
    }
    destroy(node->left);
    destroy(node->right);
    delete node;
}

TreeNode* BinSearchTree::insertHelper(TreeNode* node, const std::string& word) {

    if (node == nullptr) {
        return new TreeNode(word); // Create new node
    }

    // Compare the word with current node, if less, go left
    if (word < node->word) {
        node->left = insertHelper(node->left, word);
    }
    // Go right if greater
    else if (word > node->word) {
        node->right = insertHelper(node->right, word);
    }
    else { // If it is equal add to the count
        node->count++;
    }

    return node;
}

const TreeNode* BinSearchTree::findNode(const TreeNode* node, std::string_view word) noexcept {
    // TODO
    return nullptr;
}

void BinSearchTree::inorderHelper(const TreeNode* node,
                                  std::vector<std::pair<std::string, int>>& out) {
    // TODO
}

std::size_t BinSearchTree::sizeHelper(const TreeNode* node) noexcept {
    // TODO
    return 0;
}

unsigned BinSearchTree::heightHelper(const TreeNode* node) noexcept {
    // TODO
    return 0;
}
