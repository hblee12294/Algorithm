typedef enum { UNDISCOVERED, DISCOVERED, VISITED } Vstatus;

template <typename Tv> struct Vertex
{
	Tv data;                   
	int inDegree, outDegree;   // 出入度
	Vstatus status;            // 以上三种状态
	int dTime, fTime;          // ？
	int parent;                // 父节点
	int priority;              // 优先级
	Vertex(Tv const &d) : data(d), inDegree(0), outDegree(0),
						status(UNDISCOVERED), dTime(-1), fTime(-1),
						parent(-1), priority(INT_MAX) {}
}