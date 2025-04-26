class Solution {
    bool isvowel(char x){
    if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u'||x=='A'||x=='E'||x=='I'||x=='O'||x=='U'){
        return true;
    }else{
        return false ;
    }
}
public:
    string reverseVowels(string s) {
        int n = s.length();
        int i = 0; int j=n-1;
        while(i<j) {
            if(isvowel(s[i]) && isvowel(s[j])){
            swap(s[i],s[j]);
            i++;
            j--;
        }
        if(!isvowel(s[i])){
            i++;
        }
        if(!isvowel(s[j])){
           j--;
            }
        }
        return s;
    }
};