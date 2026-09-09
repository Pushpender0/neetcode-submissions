class MinStack {
public:

    long long mini = LLONG_MAX;
    stack<long long> st;
    MinStack()
    {
    }

    void push(long long val)
    {
        if (st.empty())
        {
            mini = val;
            st.push(val);
        }
        else
        {
            if (val < mini)
            {
                st.push(2LL * val - mini);
                mini = val;
            }
            else
                st.push(val);
        }
    }

    void pop()
    {
        if (st.empty())
            return;
        long long n = st.top();
        st.pop();
        if (n < mini)
            mini = (2 * mini) - n;
    }

    int top()
    {
        if (st.empty())
            return -1;
        long long n = st.top();
        if (n < mini)
            return mini;

        return n;
    }

    int getMin()
    {
        return mini;
    }
};
