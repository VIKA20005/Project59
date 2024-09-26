#include "GPU.h"
#ifndef GPU_H
#define GPU_H

class GPU
{
private:
    char* name;
    int memorySize; 

public:
    GPU(const char* name, int memorySize);
    ~GPU();

    const char* getName() const;
    int getMemorySize() const;

    void setName(const char* name);
    void setMemorySize(int memorySize);
};

#endif 
