class Solution {
public:
    int minPartitions(string n) {
        int no = INT_MIN;
        for(int i=0; i<n.length(); i++) {
            no = max(no, n[i]-'0');
        }
        return no;
    }
};