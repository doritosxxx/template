#include <bits/stdc++.h>

#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()

using namespace std;

namespace ${
    const string tab =  "    ";
    const string numbers = "0123456789";
    const string letters = "abcdefghijklmnopqrstuvwxyz";
    const string vowels = "euioa";
    const string numbersletters = "0123456789abcdefghijklmnopqrstuvwxyz";
    long long INF = INT_MAX;
    void fastio(){
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }
    long long gcd(long long a, long long b){
        while(b){
            a%=b;
            swap(a, b);
        }
        return a;
    }

    template<typename T>
    T min(vector<T> &c){
        if(!c.size())throw new exception();
        T _r = c.front();
        for(size_t i=1; i<c.size(); i++)
            _r = std::min(_r, c[i]);
        return _r;
    }
    template<typename T>
    T max(vector<T> &c){
        if(!c.size())throw new exception();
        T _r = c.front();
        for(size_t i=1; i<c.size(); i++)
            _r = std::max(_r, c[i]);
        return _r;
    }
    string toBasis(long long num, int basis){
        string _r = "";
        while(num){
            _r+=numbersletters[num%basis];
            num/=basis;
        }
        reverse(all(_r));
        return _r;
    }


};

namespace stlout{
    template<typename T>
    ostream &operator<<(ostream &o, vector<T> &c){
        for(int i=0; i<c.size(); i++){
            o << c[i];
            if(i != c.size()-1) o << " ";
        }
        return o;
    }

    template<typename T>
    ostream &operator<<(ostream &o, set<T> &c){
        auto it = c.begin();
        if(c.size()) o << *(it++);
        for(;it != c.end(); it++)
            o << " " << *it;
        return o;
    }
    template<typename T>

    ostream &operator<<(ostream &o, unordered_set<T> &c){
        auto it = c.begin();
        if(c.size()) o << *(it++);
        for(;it != c.end(); it++)
            o << " " << *it;
        return o;
    }

    template<typename _key,typename _value>
    ostream &operator<<(ostream &o, unordered_map<_key, _value> &c){
        o << "unordered_map(" << c.size() << "): {\n";
        for(auto it: c)
            o << $::tab << it.first << " => " << it.second << endl;
        return o << "}";
    }

    template<typename _key,typename _value>
    ostream &operator<<(ostream &o, map<_key, _value> &c){
        o << "map(" << c.size() << "): {\n";
        for(auto it: c)
            o << $::tab << it.first << " => " << it.second << endl;
        return o << "}";
    }

}

using namespace stlout;

int main()
{
    cout << $::toBasis(255, 16);

    return 0;
}
