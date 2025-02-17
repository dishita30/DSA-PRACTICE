#include <omp.h>
#include <iostream>

int main() {
    // Loop Work-Sharing Example
    #pragma omp parallel for
    for (int i = 0; i < 10; ++i) {
        int thread_id = omp_get_thread_num();
        std::cout << "Thread " << thread_id << " is executing iteration " << i << " of the loop.\n";
    }

    // Sections Work-Sharing Example
    #pragma omp parallel sections
    {
        #pragma omp section
        {
            int thread_id = omp_get_thread_num();
            std::cout << "Thread " << thread_id << " is executing the first section.\n";
        }

        #pragma omp section
        {
            int thread_id = omp_get_thread_num();
            std::cout << "Thread " << thread_id << " is executing the second section.\n";
        }

        #pragma omp section
        {
            int thread_id = omp_get_thread_num();
            std::cout << "Thread " << thread_id << " is executing the third section.\n";
        }
    }

    return 0;
}
