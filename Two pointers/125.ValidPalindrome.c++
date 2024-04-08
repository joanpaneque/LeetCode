string simplify(string str) {
    str.erase(remove_if(str.begin(), str.end(), [](unsigned char c) {
        return !isalpha(c) && !isdigit(c);
    }), str.end());
    transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return tolower(c);
    });
    
    return str;
}

class Solution {
public:
    bool isPalindrome(string s) {
        string a = simplify(s);
        cout << a;
        int l = a.length();
        bool p = true;
        for (int i = 0; i < l; i++) {
            int e = l-i-1;
            if (i > e) break;
            if (a[i] != a[e]) return false;
        }
        return true;
    }
};