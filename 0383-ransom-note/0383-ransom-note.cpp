class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int n = magazine.length();
        map<char, int> mp;
        for(int i=0; i<n; i++) {
            mp[magazine[i]]++;
        }

        for(int i=0; i<ransomNote.length(); i++) {
            if(mp[ransomNote[i]]==0) {
                return false;
            }
            mp[ransomNote[i]]--;
        }
        return true;
    }
};