#include <iostream>
#include <thread>
#include <vector>
#include <set>
#include <exception>
#include "main.h"

namespace basics {
    _ t(1);
    namespace threading {
        _ t(2);
        void func() 
        {
            __('b');
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }

        void main() 
        {
            std::thread var1(func);
            __('a');
#if 0
            a.detach();
#else
            var1.join(); 
#endif
        }
        _ u(5);
    }
    namespace memory {
        class A {
            public:
            A() {
                __(9);
            }
            ~A() {
                __(10);
            }

        };
        void main() 
        {
            //A o1;
            std::shared_ptr<A> o1;
            //std::shared_ptr<A> o2 = std::make_shared<A>(o1);
        }
    }
}

namespace advance {
    _ t(7);
    namespace threading {
        _ t(4);
        void func() 
        {
            __('c');
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        void main()
        {
            std::thread var1(func);
            var1.join();

        }
    }
}

int main (int argc, char *argv[])
{
    __('*');
    //basics::threading::main();
    basics::memory::main();

    //advance::threading::main();
    return 0;
}
