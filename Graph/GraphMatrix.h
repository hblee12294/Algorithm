template <typename Tv, typename Te>
class GraphMatrix : public Graph<Tv, Te>
{
private:
	Vector<Vector<Tv> *> V;         // 顶点集
	Vector<Vector<Te> *> E;         // 边集
public:
	GraphMatrix() { n = e = 0; }     // constructor
	~GraphMatrix()
	{
		for (int j = 0; j < n; ++j)
			for (int k = 0; k < n; ++k)
				delete E[j][k];          // delete Matrix
	}
	/*----------interfaces-----------*/
}