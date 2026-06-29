class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        int n = pushed.size();
        int m = popped.size();
        int j = 0;
        for(int i=0; i<n && j<m; i++){
            cout << "Push " << pushed[i] << endl;
            st.push(pushed[i]);

            while (!st.empty() && j < m && st.top() == popped[j]) {
                cout << "Pop " << st.top() << endl;
                st.pop();
                j++;
            }
        }

       while (!st.empty() && j < m && st.top() == popped[j]) {
            cout << "Poppingggg " << st.top() << endl;
            st.pop();
            j++;
        }
       return st.size() == 0;
    }
};