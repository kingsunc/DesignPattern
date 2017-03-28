#include "Context.h"
#include "Expression.h"

int main()
{
	// a-b+c
	Context context;
	context.addValue("a", 7);
	context.addValue("b", 8);
	context.addValue("c", 2);

	SubtractNonterminalExpression* pSubtract = new SubtractNonterminalExpression(new TerminalExpression(context.getValue("a")), new TerminalExpression(context.getValue("b")));

	cout << pSubtract->interpreter(context) << "\n";

	AddNonterminalExpression* pAdd = new AddNonterminalExpression(pSubtract, new TerminalExpression(context.getValue("c")));

	cout << pAdd->interpreter(context) << "\n";

	return 0;
}