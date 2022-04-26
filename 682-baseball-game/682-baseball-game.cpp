class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(string e : ops)
        {
            if(e == "C") st.pop();
            else if(e=="D") st.push(st.top() * 2);
            else if(e == "+")
            {
                int val1 = st.top();
                st.pop();
                int val2 = st.top();
                st.push(val1);
                st.push(val1+ val2);
            }
            else st.push(stoi(e));
        }
        int r(0);
        while(st.size())
        {
            r+= st.top();
            st.pop();
        }
        return r;
    }
};