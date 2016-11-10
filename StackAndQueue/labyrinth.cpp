typedef enum {AVAILABLE, ROUTE, BACKWARD, WALL} status;
typedef enum {UNKNOWN, EAST, SOUTH, WEST, NORTH, NO_WAY} ESWN;

class Cell
{
public:
	int x, y;
	Status status;
	ESWN incoming, outgoing;
}

inline ESWN nextESWN(ESWN eswn) { return ESWN (eswn+1);}

bool labyrinth(Cell Laby[MAX][MAX], Cell *s, Cell *t)
{
	Stack<Cell *> path;
	s->incoming = UNKNOWN;
	s->status = ROUTE;
	path.push(s);
	do
	{
		Cell *c = path.top();
		if (c == t)
			return true;
		while (NO_WAY > (c->outgoing = nextESWN(c->outgoing)))
			if (AVAILABLE == neighbor(c)->status) break;
		if (NO_WAY <= c-> outgoing)
		{
			c->status = BACKWARD;
			c = path.pop();
		}
		else
		{
			path.push(c = advance(c));
			c->outgoing = UNKNOWN;
			c->status = ROUTE;
		}
	} while (!path.empty())
	
	return false;
}