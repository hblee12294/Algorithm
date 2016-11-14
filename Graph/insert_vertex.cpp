int insert(Tv const &vertex)   // 插入顶点
{
	E.insert(Vector<Edge<Te> *>());  // 创建对应的边
	for (int j = 0; j < n; ++j)
		E[n].insert(NULL);
	++n;
	for (int j = 0; j < n; ++j)
		E[j].insert(NULL);
	return V.insert(new Vertex<Tv>(vertex)); // 返回编号
}