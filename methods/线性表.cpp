/*
线性表： 若是顺序存储： 顺寻标
； 若是链式存储： 链表（单链表、双链表、循环链表）（指针实现）
                      （静态链表 数组实现）

基本操作：InitList() 
CreateList() 
DestroyList()
ListEmpty() 
Length() 
GetElem() 
LocateElem() 
ListDelete() 





*/
//静态分配：
#include <bits/stdc++.h>
using namespace std;
#define MaxSize 100 
typedef struct {
    int data[MaxSize];  //顺序表的元素
    int length;
} SqList;

//初始化
//静态初始化：因为声明时已经分配了空间，所以不需要再分配空间了，直接将长度置为0即可
void InitList1(SqList &L) {
 
    L.length = 0;
}



//动态分配
#define InitSize 100
typedef struct {
    int *data;  //顺序表的元素
    int length;
    int maxsize; //当前分配的存储容量，以sizeof(int)为单位
} SqList2;

// SqList2 L;  L.data = new int[InitSize];  //动态分配
//初始化
void InitList2(SqList2 &L) {
    L.data = new int[InitSize];  //分配空间
    L.length = 0;  //初始长度为0
    L.maxsize = InitSize; //初始分配容量 定下存储容量
}

//插入操作， 在地i个位置插入元素e，时间是O(n)，因为需要移动元素

bool ListInsert(SqList &L, int i, int e) {
    if (i < 1 || i > L.length + 1) { //插入位置不合法
        return false;
    }
    if (L.length >= MaxSize) { //顺序表已满
        return false;
    }
    for (int j = L.length; j >= i; j--) { //将第i个元素及之后的元素后移
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e; //插入元素
    L.length++; //长度加1
    return true;
}
//删除操作，在第i个位置删除元素，时间是O(n)，后面的元素前移
bool ListDelete(SqList &L, int i,int &e) {
    if (i < 1 || i > L.length) { //删除位置不合法
        return false;
    }
    e = L.data[i - 1]; //取出被删除元素的值
    for (int j = i; j < L.length; j++) { //将第i个元素之后的元素前移
        L.data[j - 1] = L.data[j];
    }
    L.length--; //长度减1
    return true;
}
//按值查找，返回位序
int LocateElem(SqList &L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1; //返回位序
        }
    }
    return 0; //未找到
}