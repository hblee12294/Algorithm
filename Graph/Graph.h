template <typename Tv, typename Te>
class Graph
{
private:
	void reset()
	{
		for (int i = 0; i < n; ++i)           // vertexes
		{
			status(i) UNDISCOVERED;
			dTime(i) = fTime(i) = -1;
			parent(i) = -1;
			priority(i) = INT_MAX;
			for (int j = 0; j < n, ++j)       // edges
				if (exist(i, j))
					status(i, j) = UNDETERMINED;
		}
	}
public:
	/*-----------other interfaces-----------------*/
}