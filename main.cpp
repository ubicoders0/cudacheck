#include <opencv2/core.hpp>
#include <opencv2/core/cuda.hpp>
#include <iostream>

int main()
{
    int numCudaDevices = cv::cuda::getCudaEnabledDeviceCount();

    if (numCudaDevices > 0)
    {
        std::cout << "CUDA is enabled. Number of CUDA devices: " << numCudaDevices << std::endl;
    }
    else
    {
        std::cout << "CUDA is not enabled." << std::endl;
    }

    return 0;
}