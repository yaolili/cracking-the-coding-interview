class Solution {public:    // O(n) time    void reverseWords(string &s) {        vector<string> words;        string cur = "";        for (int i = 0; i < s.size(); ++i) {            if (s[i] != ' ') {                cur += s[i];            } else {                // a new word is generated                if (cur.size() != 0) words.push_back(cur);                cur = "";            }        }        // the last word        if (cur.size() != 0) words.push_back(cur);        s = "";        for (int i = words.size() - 1; i >= 0; --i) {            s += words[i];            if(i != 0) s += " ";        }    }};