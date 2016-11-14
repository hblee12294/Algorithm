typedef enum { UNDETERMINED, TREE, CROSS, FORWARD, BACKWARD } Estatus;

template <typename Tr> struct Edge
{
	Te data;         // 数据
	int weight;      // 权重
	Estaus status;   // 以上五种状态
	Edge(Te const &d, int w) : data(d), weight(w),
							status(UNDETERMINED) {}
}