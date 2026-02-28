class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        map<char, int> mp = {
            {'a', 0},
            {'b', 1},
            {'c', 2},
            {'d', 3},
            {'e', 4},
            {'f', 5},
            {'g', 6},
            {'h', 7},
            {'i', 8},
            {'j', 9}
        };
        
        string first = "";
        string second = "";
        string target = "";

       for(int i = 0; i < firstWord.length(); i++) {
            int count = mp[firstWord[i]];
            string s = to_string(count);

            cout << " " << s << endl;
            first = first+s;
        }
        for(int i=0; i<secondWord.length(); i++) {
            int count = mp[secondWord[i]];
            string s = to_string(count);

            second = second+s;
        }
        for(int i=0; i<targetWord.length(); i++) {
            int count = mp[targetWord[i]];
            string s = to_string(count);

            target = target+s;
        }
        cout<<"first "<<first<<" "<<second<<" "<<target<<endl;
        int ans = stoi(first) + stoi(second);
        return ans == stoi(target);
    }
};