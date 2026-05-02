# 🎈Infix to Prefix and Postfix Converter Using Stack (C++)✨
This project is a simple C++ application that uses the Stack data structure to convert mathematical expressions from Infix notation into Postfix and Prefix notation.
The project also evaluates expressions using stack operations and operator precedence rules.

## 🚩Technologies Used
C++
Stack Data Structure
STL (Standard Template Library)


## ⛳Project Features
Convert infix expressions to postfix
Convert infix expressions to prefix
Evaluate mathematical expressions
Handle parentheses correctly
Apply operator precedence rules
Practice real applications of stacks

## Ⓜ Methods Description

1-Priority()
This method is responsible for determining the priority of mathematical operators.
For example:
Plain text
* and / have higher priority than + and -
The method helps the program decide:
whether to push an operator into the stack
or remove operators from the stack first
This is one of the most important parts of expression conversion.


2-Result()
The Result() method stores and returns the final converted expression.
It is used after processing operators and operands through the stack to generate:
the postfix expression
the prefix expression
or the final evaluated result

3-Infix_Postfix()
This method converts an infix expression into postfix notation.
Example
Infix Expression
Plain text
(A+B)*C
Postfix Expression
Plain text
AB+C*
How the Method Works
Read the expression character by character
Store operators inside the stack
Compare operator precedence using Priority()
Remove operators when necessary
Build the final postfix expression
This method demonstrates how stacks are used in compilers and calculators.

4-Evaluate_Infix_Prefix()
This method evaluates expressions after conversion.
It processes operators and operands using stack operations and returns the final answer.
Example Prefix Expression Plain text *+234
Result Plain text 20
Because:
Plain text (2 + 3) * 4 = 20 Concepts Covered
This project helps in understanding:
Stack operations
Expression conversion algorithms
Operator precedence
Expression evaluation
Parsing techniques
Basic compiler concepts
Future Improvements
Support multi-digit numbers
Add floating-point calculations
Detect invalid expressions
Create a graphical interface
Support variables and functions


# ✍🏻Eng-Hani Ahmed Abdullah Muhammad
