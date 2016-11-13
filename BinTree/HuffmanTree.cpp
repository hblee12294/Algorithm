#define HuffTree BinTree<HuffChar>
typedef List<HuffTree *> HuffForest;

HuffTree *generateTree(HuffForest *forest)          // 构造Huffman树
{
	while (1 < forest->size())                      // 循环直到森林只有一棵树
	{
		HuffTree *T1 = minHChar(forest);
		HuffTree *T2 = minHChar(forest);
		Huffman *S = new HuffTree();               // 创建新树，合并T1和T2
		S->insertAsRoot(HuffChar('^', T1->root()->data.weight + T2->root()->data.weight));   // 根节点重构
		S->attachAsLC(S->root(), T1);   // T1和T2挂在新根上
		S->attachAsRC(S->root(), T2);
		forest->insertAsLast(S);  // 把新树插回森林里
	}
	return forest->first()->data;
}


HuffTree *minHChar(HuffForest *forest)        // 搜索最小超字符
{
	ListNodePosi(HuffTree *) p = forest->first();
	ListNodePosi(HuffTree *) minChar = p;
	int minWeight = p->data->root()->data.weight;
	while (forest->valid(p = p->succ))                // 遍历所有节点
		if (minWeight > p->data->root()->data.weight)
		{
			minWeight = p->data->root()->data.weight;
			minChar = p;
		}
	return forest->remove(minChar);
}



// ????????????????????????????????
#include "Hashtable.h"
typedef Hashtable<char, char *> HuffTable

static void generateCT(Bitmap *code, int length, HuffTable *table, BinNodePosi(HuffChar) v)
{
	if (IsLeaf(*v))
	{
		table->put(v->data.ch, code->bit2string(length));
		return;
	}
	if (HasLChild(*v))
	{
		code->clear(length);
		generateCT(code, length + 1, table, v->lChild);
	}
	if (HasRChild(*v))
	{
		code->set(length);
		generateCT(code, length + 1, table, v->rChild);
	}
}