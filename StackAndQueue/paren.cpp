bool paren(const char exp[], int lo, int hi)
{
	Stack<char> S;
	while (exo[++i])
		if ('(' == exp[i])                     // 左括号直接入栈
			S.push(exp[i]);
		else
			S.empty() ? return false: S.pop();  // 当用括号存在匹配时，i指针向前一步，同时栈相应消去
	return S.empty();                           // 一个左括号，这样一对儿就配对成功
}