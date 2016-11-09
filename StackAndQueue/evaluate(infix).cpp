float evaluate(char *S)
{
	Stack<float> opnd;  // 操作数栈
	Stack<char> optr;  // 运算符栈
	optr.push('\0');  // 哨兵
	while (!optr.empty())
	{
		if (isdigit(*S))    // 判断是否是多位数
			readNumber(S, opnd);  // 尽可能多位的数入栈
		else
			switch(orderBetween(optr.top(), *S))  // 查运算符优先级表
			{
				case '<': optr.push(*S); ++S; break;   // 低级运算符存在栈里
				case '=': optr.pop(); ++S; break;      // 相等优先级只有括号和哨兵，其逻辑等同于paren()函数
				case '>':
				{
					char op = optr.pop();
					if ('!' == op)                             // 一元运算
						opnd.push(calcu(op, opnd.pop()));
					else                                       // 二元运算
					{
						float popnd2 = opnd.pop();
						float popnd1 = opnd.pop();
						opnd.push(calcu(popnd1, op, popnd2));
					}
					break;
				}
			}
	}

	return opnd.pop();
}