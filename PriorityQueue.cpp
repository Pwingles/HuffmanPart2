#include "PriorityQueue.h"
#include "TreeNode.h"
#include <vector>
#include <iostream>

// Constructor: takes an initial vector of nodes
PriorityQueue::PriorityQueue(std::vector<TreeNode*> nodes) {
    // TODO: sort nodes and store in items_
}


// Return the number of elements in the queue
std::size_t PriorityQueue::size() const noexcept {
    // TODO
    return 0;
}

// Return true if the queue is empty
bool PriorityQueue::empty() const noexcept {
    // TODO
    return true;
}

// Return the minimum element (items_.back()) or nullptr if empty
TreeNode* PriorityQueue::findMin() const noexcept {
    // TODO
    return nullptr;
}

// Remove and return the minimum element
TreeNode* PriorityQueue::extractMin() noexcept {
    // TODO
    return nullptr;
}

// Remove the minimum element if it exists
void PriorityQueue::deleteMin() noexcept {
    // TODO
}

// Insert a node while keeping the vector sorted
void PriorityQueue::insert(TreeNode* node) {
    // TODO
}

// Print the contents of the queue for debugging
void PriorityQueue::print(std::ostream& os) const {
    // TODO
}

// Static comparator: determines ordering (freq desc, key_word asc)
bool PriorityQueue::higherPriority(const TreeNode* a, const TreeNode* b) noexcept {
    // TODO
    return false;
}

// Optional check to verify the vector is sorted (for debugging)
bool PriorityQueue::isSorted() const {
    // TODO
    return true;
}
