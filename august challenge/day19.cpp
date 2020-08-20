class Solution {
public:
    string toGoatLatin(string S) {
        stringstream iss(S),oss;
        string p;
        string a = "";
        string word;
        map<char,bool>vow;
        vow['a'] = vow['e'] = vow['i'] = vow['o'] = vow['u'] = true;
        while(iss >> word){
            a.push_back('a');
            p = word;
            if(!vow[tolower(word[0])])
                p = word.substr(1) + word[0];
            oss << ' ' << p << "ma" << a;
        }
        return oss.str().substr(1);
    }
};
