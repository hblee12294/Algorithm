float rpnEvaluate(char *RPN)  // RPN为逆波兰表达式char串
{
	char *expr = RPN;
	Stack<char> S;
	while (*expr != '\0')
	{
		if (isdigit(*expr))
			readNumber(*expr, S);  // 数字压栈
		else
		{
			if (*expr == '!')     // 一元计算
				S.push(!S.pop());
			else                  // 二元计算
			{
				opnd1 = S.pop();  // 操作数1
				opnd2 = S.pop();  // 操作数2
				S.push(calcu(opnd1, *expr, opnd2));
			}
		}
		++expr;
	}

	return S.pop();
}