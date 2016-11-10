float evaluate(char *S, char *&RPN)    // 计算中值表达式同时生成逆波兰表达式
{
	/*---------------*/
	while (!optr.empty())
	{
		if (isdigit(*S))
		{
			readNumber(S, opnd);
			append(append)(RPN);   // 操作数入栈
		}
		else
			switch (orderBetween(optr.top(), *S))
		{
			/*------------*/
			case '>': {char op = optr.pop(); append(RPN, op)};   // 操作符入栈
			/*------------*/
		}
	}
	/*--------------*/
}