#include <stdlib.h>   // malloc
#include <stddef.h>   // NULL，或直接用 <stdlib.h>

int totalFruit1(int* fruits, int fruitsSize) {
    //定义单链表
    typedef struct Lnode{
        int data;
        int sum_fruits;
        struct Lnode *next;
    }Lnode, *LinkList;

    //带头结点的单链表初始化
    Lnode *L = (Lnode *)malloc(sizeof(Lnode));
    L -> next = NULL;

    //遍历fruits数组，建立查找表
    for (int i = 0; i < fruitsSize; i++){
        Lnode *p = L;
        while (p != NULL && p -> data != fruits[i]){
            p -> next;
        }
        if (p == NULL){
            Lnode *new = (Lnode *)malloc(sizeof(Lnode));
            new -> data = fruits[i];
            new -> sum_fruits = 0;
            new -> next = L -> next;
            p -> next = new;
        }
        else {
            p -> sum_fruits ++;
        }
    }
    //查找表建立好了，找出表中最大元素sum_fruits
    int Max = 0;
    int Max2 =0;
    int Fsort1 = 0;
    int Fsort2 = 0;
    Lnode *p = L;
    while (p != NULL){
        p -> next;
        if (p -> sum_fruits > Max){
            Max = p-> sum_fruits;
            Fsort1 = p -> data;
        }
    }
    Lnode *p = L;
    while (p != NULL){
        p -> next;
        if (p -> sum_fruits > Max2 && p -> sum_fruits < Max){
            Max2 = p-> sum_fruits;
            Fsort2 = p -> data;
        }
    }
    int AllFruits = 0;
    for (int i = 0; i < fruitsSize; i++){
        if (fruits[i] == Fsort1 || fruits[i] == Fsort2){
            AllFruits ++;
        }
    }
    return AllFruits;
}

//ai修复版本
int totalFruit(int* fruits, int fruitsSize) {
    if (fruitsSize == 0) return 0;

    /* ---------- 1. 用单链表做频次哈希表 ---------- */
    typedef struct Node {
        int kind;      // 水果种类
        int cnt;       // 出现次数
        struct Node *next;
    } Node;

    Node *head = NULL;   // 头指针（不带头结点）

    /* ---------- 2. 遍历数组，建表 ---------- */
    for (int i = 0; i < fruitsSize; ++i) {
        Node *p = head;
        while (p && p->kind != fruits[i]) p = p->next;

        if (p) {                 // 已存在，计数++
            p->cnt++;
        } else {                 // 新建节点，头插法
            Node *n = (Node*)malloc(sizeof(Node));
            n->kind = fruits[i];
            n->cnt  = 1;
            n->next = head;
            head = n;
        }
    }

    /* ---------- 3. 找 top-2 出现次数 ---------- */
    int max1 = 0, max2 = 0;
    for (Node *p = head; p; p = p->next) {
        if (p->cnt > max1) {
            max2 = max1;
            max1 = p->cnt;
        } else if (p->cnt > max2) {
            max2 = p->cnt;
        }
    }

    /* ---------- 4. 释放链表内存（可选） ---------- */
    Node *p = head;
    while (p) { Node *tmp = p; p = p->next; free(tmp); }

    return max1 + max2;
}