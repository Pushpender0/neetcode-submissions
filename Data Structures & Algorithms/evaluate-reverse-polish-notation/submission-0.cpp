class Solution {
public:
int opreate(int a, int b, string c)
{
    if (c == "+")
        return a + b;
    if (c == "-")
        return a - b;
    if (c == "*")
        return long(a) * long(b);
    if (c == "/")
        return a / b;
    return -1;
}
    int evalRPN(vector<string>& tokens) {
            stack<int> st;

    for (auto c : tokens)
    {
        if (c == "+" || c == "-" || c == "*" || c == "/")
        {
            // take out 2 val form stack
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            // oprate
            int result = opreate(a, b, c);
            //  result
            st.push(result);
        }
        else
            st.push(stoi(c));
    }
    return st.top();
    }
};
