class Customer
{
public:
	int window;
	unsigned int time;
}

int nWin;  // number of windows
int serveTime;  // time of service

void simulate(int nWin, int servTime)
{
	queue<Customer> *window = new Queue<Customer>[nWin];  // create n windows
	for (int now = 0; now < serveTime; ++now)
	{
		Custome c;   // every unit time, there comes a new customer
		c.time = 1 + rand() % 50;
		c.window = bestWindow(windows, nWin); // find the best shortest queue in front of the windows
		window[c.window].enqueue(c);    // join the queue
		for (int i = 0; i < nWin; ++i)  // check each queue
			if (!window[i].empty())
				if (--window[i].front().time <= 0) // if the head of customer finish
					window[i].dequeue();           // he/she will leave the queue from the head
	}

	delete [] windows;
}