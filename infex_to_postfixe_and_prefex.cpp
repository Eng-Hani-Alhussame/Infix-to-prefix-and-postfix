#include <iostream>
#include <stack>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
float  Result(float op1, char ch, float op2) {
    if (ch == '^') { return pow(op1, op2); }
    else if (ch == '*') {
        return op1 * op2;
    }
    else if (ch == '/') {
        return op1 / op2;
    }
    else if (ch == '%') {
        return int (op1)  %  int(op2);
    }
    else if (ch == '+') {
        return op1 + op2;
    }
    else if (ch == '-') {
        return op1 - op2;
    }
}
float priporty(char ch) {
    if (ch == '^') { return 3; }
    else if (ch == '*' || ch == '/' || ch == '%') { return 2; }
    else if (ch == '+' || ch == '-') { return 1; }
    else { return 0; }
}
string infex_postfixe(string exp)
{
    stack<float>st;
    string output = "";
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == ' ') {
            continue;
        }
        else if (isdigit(exp[i]) || isalpha(exp[i])) {
            string num = "";
            while (i < exp.length() && isdigit(exp[i])) {
                num += exp[i];
                i++;
            }i--;
            output += num + " ";
        }
        else if (exp[i] == '(') {
            st.push(exp[i]);
        }
        else if (exp[i] == ')') {
            while (st.top() != '(') {
                output += st.top();
                st.pop();
            } st.pop();
        }
        else {

            while (!st.empty() && priporty(exp[i]) <= priporty(st.top())) {

                output += st.top();
                st.pop();
            }st.push(exp[i]);
       
        }
    }while (!st.empty()) {
        output += st.top();
        st.pop();
    }
    return output;
}  
float Evaluation(string post) {
    stack<float>s;
    for (int i = 0; i < post.length(); i++) {
        if (post[i] == ' ') {
            continue;
        }
        else if (isdigit(post[i]) || isalpha(post[i])) {
            string num = "";
            while (i < post.length() && isdigit(post[i])) {
                num += post[i];
                i++;
            }i--;
            s.push(stof(num));
        }
        else {
            float op2 = s.top();
            s.pop();
            float op1 = s.top();
            s.pop();
            float value = Result(op1, post[i], op2);
            s.push(value);
        }
    }return s.top();
}
string infex_to_prefixe(string pre) {
    reverse(pre.begin(), pre.end());
    for (int i = 0; i < pre.length(); i++) {
        if (pre[i] == '(') pre[i] = ')';
        else if (pre[i] == ')') pre[i] = '(';
    }
    string rev_pre = infex_postfixe(pre);
    reverse(rev_pre.begin(), rev_pre.end());
    return rev_pre;

}
int main()
{
    string expersion = "(33*41)+7";
    string R = infex_postfixe(expersion);
    cout << " postfixe" << infex_postfixe(expersion) << endl;
    cout <<" Sum  "<< Evaluation(R) << endl;
    string S = infex_postfixe(expersion);
    cout <<" prefix"<< infex_to_prefixe(S);
}

