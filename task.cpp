#include <future>
#include <thread>
#include <chrono>
#include <iostream>
#include <stdlib.h>
#include "helloworld.h"
#include "loop.h"
using namespace std;

int main(){
    string fname;
 
    cout << "Enter the filename to run: 1)file1.c 2)file2.c\n";
    cin >> fname;
 
    using namespace std::chrono_literals;
    
   // auto future;
    if(fname == "file1.c"){
        auto future = std::async(std::launch::async, [] {
        print();
        return 1;
        });
        
        auto status = future.wait_for(3s);

        // Print status.
        if (status == std::future_status::ready) {
            std::cout << "Code run successfully" << std::endl;
        } else {
            std::cout << "Time Limit Exceeded.." << std::endl;
            exit(0);
        }
        
    }
    
    else if(fname == "file2.c"){
        auto future = std::async(std::launch::async, [] {
        loop();
        return 1;
        });
        
        auto status = future.wait_for(3s);

        // Print status.
        if (status == std::future_status::ready) {
            std::cout << "Code run successfully" << std::endl;
        } else {
            std::cout << "Time Limit Exceeded.." << std::endl;
            exit(0);
        }
    }
    
    else
        printf("Enter a valid filename\n");
    
    
    
    
    return 0;
}
