void place4Queens()
{
	int solu[4];
	for (solu[0] = 0; solu[0] < 4; ++solu[0])
		if (!collide(solu, 0))
			for (solu[1] = 0; solu[1] < 4; ++solu[1])
				if (!collide(solu, 1))
					for (solu[2] = 0; solu[2] < 4; ++solu[2])
						if (!collide(solu, 2))
							for (solu[3] = 0; solu[3] < 4; ++solu[3])
								if (!collide(solu, 3))
								{
									++nSolu;
									displaySolution(solu, 4);
								}
}