//王道 线性表-链表章节
//包含 知识点与课后习题
#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef struct Node{
    int data;
    struct Node* next;
}LNode,*LinkList;
//
//下面这个是带“虚拟头节点”的链表初始化，头指针指向一个虚拟头节点
bool InitList(LinkList &L){
    L=(LNode*)malloc(sizeof(LNode));
    L->next=NULL;
    return true;
}
//求表长：
int Length(LinkList L){
int len=0;
LNode* p=L;
while(p->next!=NULL){
    len++;
    p=p->next;
}
return len;

}

//按序号查找结点：
LNode *GetElem(LinkList L,int i){
LNode *p=L;
int j=0;
while(p->next!=NULL&&j<i){
    p=p->next;
    j++;
}
return p;
 //返回的是第i个节点
//链表的索引从一开始（0是虚拟头节点）

}

//按值查找节点




