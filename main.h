#ifndef _MAIN_H_
#define _MAIN_H_

#include <iostream>
#include <set>
#include <exception>

class _{
    public:
    _(int n) {
        i=n;
        if (si.count(n)) {
            std::cout << "?" << n;
            throw std::exception();
        }
        si.insert(n);
        std::cout<<'+'<<n<<" ";
    }
    ~_() {
        std::cout<<(i==0?"":"-"+std::to_string(i)+" ");
    }
    _() {
        std::setbuf(stdout,nullptr);std::cout<<"_ ";
    }
    void operator()(char ch) {
        if (sc.count(ch)) {
            std::cout << "?" << ch;
            throw std::exception();
        }
        sc.insert(ch);
        std::cout<<ch<<" ";
    }
    void operator()(int n) {
        if (si.count(n)) {
            std::cout << "?" << n;
            throw std::exception();
        }
        si.insert(n);
        std::cout<<n<<" ";
    }
    private:
    int i = 0;
    static std::set<int> si;
    static std::set<char> sc;
}__;
std::set<int>  _::si;
std::set<char> _::sc;

#endif
