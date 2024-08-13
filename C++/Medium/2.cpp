#include <algorithm>
#include <cctype> //https://en.cppreference.com/w/cpp/header/cctype
#include <cmath>
#include <cstdio> //https://github.com/mfussenegger/nvim-dap/issues/1061#issuecomment-1773218073
#include <cstring>
#include <iostream>
#include <map>
#include <numeric>
#include <random>
#include <set>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void printNode(ListNode *node) {
  while (node) {
    std::cout << node->val;
    node = node->next;
  }
  std::cout << std::endl;
}

ListNode* addTwoNumbers(ListNode *l1, ListNode *l2) {
  ListNode *l3 = new ListNode(0);
  ListNode *temp = l3;
  int lnum, rnum, sum, carry = 0, digit;

  while (l1 || l2 || carry != 0) {
    lnum = (l1) ? l1->val : 0;
    rnum = (l2) ? l2->val : 0;
    sum = lnum + rnum + carry;
    carry = sum / 10;
    digit = sum % 10;

    ListNode *newNode = new ListNode(digit);
    temp->next = newNode;
    temp = temp->next;

    l1 = (l1) ? l1->next : nullptr;
    l2 = (l2) ? l2->next : nullptr;
  }
  return l3->next;
}

int main() {
  setvbuf(stdout, nullptr, _IONBF, 0); // For debugging the buffer correctly)
  ListNode *l1 = new ListNode(3);
  ListNode *l2 = new ListNode(4, l1);
  ListNode *l3 = new ListNode(2, l2);

  ListNode *r1 = new ListNode(4);
  ListNode *r2 = new ListNode(6, r1);
  ListNode *r3 = new ListNode(5, r2);

  auto test = addTwoNumbers(l3, r3);
  printNode(test);

  return 1;
}
