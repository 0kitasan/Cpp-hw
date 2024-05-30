#include <cstdlib>
#include <iostream>

using namespace std;

struct ListNode {
  int val;
  ListNode *next;
};

ListNode *reverseList(ListNode *head) {
  ListNode *prev = nullptr; // 初始化前一个节点为 null
  ListNode *curr = head;    // 当前节点初始化为头节点

  while (curr != nullptr) {
    ListNode *next = curr->next; // 暂存当前节点的下一个节点
    curr->next = prev; // 当前节点的下一个节点指向前一个节点
    prev = curr;       // 将前一个节点移到当前节点
    curr = next;       // 当前节点移到下一个节点
  }

  return prev; // 最终 prev 是新的头节点
}

ListNode *reverseList2(ListNode *head) {
  ListNode *prev, *curr, *it;
  prev = nullptr;
  curr = head;
  it = head->next;
  while (it != nullptr) {
    it = it->next;
    curr->next = prev;
    prev = curr;
  }
  return prev;
}

ListNode *createList() {
  int x;
  ListNode head;
  ListNode *p = &head;
  head.next = NULL;
  while (cin >> x) {
    p->next = new ListNode;
    p->next->val = x;
    p->next->next = NULL;
    p = p->next;
  }
  return head.next;
}

void disp(ListNode *p) {
  while (p) {
    cout << p->val << " -> ";
    p = p->next;
  }
  cout << "nullptr\n";
}

int main() {
  ListNode *L1 = createList();
  disp(L1);
  ListNode *L2 = reverseList(L1);
  disp(L2);
  disp(L1);
  return 0;
}

/*
任务描述
本关任务：编写一个能实现链表反转的程序。

编程要求
根据提示，在右侧编辑器补充代码，正确地实现反转链表的函数 reverseList 。

ListNode* reverseList(ListNode* head)
{  ...  }

reverseList
函数接受一个链表的头指针作为参数，返回一个链表指针。返回的链表与传入的链表刚好是逆序的。

main函数我们已经帮你写好。
它的功能是将输入的一串数字构造为单链表，然后测试你书写的
reverseList 函数。

本地测试时，请用 Ctrl Z（Windows 下） 结束 cin >> x 的输入。对于 类 Unix
的系统，请使用 Ctrl D。

测试说明
平台会对你编写的代码进行测试：

测试输入：1 2 3 4 5
预期输出：
1->2->3->4->5->nullptr
5->4->3->2->1->nullptr
*/