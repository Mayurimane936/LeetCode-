class Solution {
public:
    string reverseByType(string s) {
    vector<char> letters, specials;

    for (char ch : s) {
        if (ch >= 'a' && ch <= 'z') {
            letters.push_back(ch);
        } else {
            specials.push_back(ch);
        }
    }

    reverse(letters.begin(), letters.end());
    reverse(specials.begin(), specials.end());

    int l = 0, sp = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = letters[l++];
        } else {
            s[i] = specials[sp++];
        }
    }

    return s;
    }
};