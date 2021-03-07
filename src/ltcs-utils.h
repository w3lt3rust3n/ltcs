#ifndef LTCSUTILS_HEADER
#define LTCSUTILS_HEADER

#include <iostream>
#include <stdio.h>
#include <string.h> 
#include <errno.h> 
#include <string>
#include <vector>
#include <fstream>

class LtcsUtils
{
public:
    LtcsUtils();
    ~LtcsUtils();
    void ltcs_create_custom_cheatsheet();
    void ltcs_save_commandline();
    
private:
    
};

#endif
