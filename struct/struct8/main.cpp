#include <iostream>
using namespace std;

struct Node {
  int coeff, order;
  Node *nxt;
};

Node *add_poly(Node *a, Node *b) {
  Node *it_a = a;
  Node *it_b = b;
  Node *res;
  /*
  a=3x^3-1
  b=x^5-3x^2-1
  */
  while (it_a->order != -1 && it_a != nullptr && it_b->order != -1 &&
         it_b != nullptr) {
    if (a->order > b->order) {
      res->coeff = it_a->coeff;
      res->order = it_a->order;
      it_a = it_a->nxt;
    } else if (a->order < b->order) {
      res->coeff = it_b->coeff;
      res->order = it_b->order;
      it_b = it_b->nxt;
    } else {
      int sum = it_a->coeff + it_b->coeff;
      if (sum != 0) {
        res->coeff = sum;
        res->order = it_b->order; // 都一样
        it_a = it_a->nxt;
        it_b = it_b->nxt;
      }
    }
    res->nxt = add_poly(it_a, it_b);
  }
}

int main() {
  Node *a = nullptr, *pa = nullptr, *b = nullptr, *pb = nullptr;
  int coef, orde;
  cin >> coef >> orde;
  while (orde >= 0) {
    Node *na = new Node;
    na->order = orde;
    na->coeff = coef;
    na->nxt = nullptr;
    if (pa)
      pa->nxt = na;
    pa = na;
    if (a == nullptr)
      a = pa;
    cin >> coef >> orde;
  }
  cin >> coef >> orde;
  while (orde >= 0) {
    Node *nb = new Node;
    nb->order = orde;
    nb->coeff = coef;
    nb->nxt = nullptr;
    if (pb)
      pb->nxt = nb;
    pb = nb;
    if (b == nullptr)
      b = pb;
    cin >> coef >> orde;
  }

  Node *c = add_poly(a, b);

  while (c) {
    cout << c->coeff << ' ' << c->order << endl;
    c = c->nxt;
  }

  // 要不要补上a,b,c三个链表的删除？
  return 0;
}

/*
任务描述
本关任务：编写一个能利用链表实现整系数多项式加法的程序。

编程要求
根据提示，在右侧编辑器补充代码，利用链表实现整系数多项式的加法Node*
add_poly(Node* a, Node* b)。多项式a和b用链表表示，链表定义如下：

struct Node {
  int order, coeff; // 次数 和 系数
  Node* nxt; // 指向后一项的指针
}

多项式a和b保证每一项系数coeff都是整数，保证每一项次数order >=
0。输入order=-1表示输入结束。保证从链表的头到尾，次数递减，详见 sample case。

结果多项式的表示和a,b的规则一样，从最高次项到最低次项，不要包含系数为0的项。
但是如果结果多项式等于0（即有且仅有常数项0）则需要包含该项。计算过程中涉及的整数加法不会溢出。

测试说明
平台会对你编写的代码进行测试：

测试输入：
3 2 -1 0 0 -1
1 5 -3 2 -1 0 0 -1
输入说明：
第一个多项式为3x^2-1
第二个多项式为x^5-3x^2-1
预期输出：
1 5
-2 0
输出说明：
结果多项式为x^5-2

*/