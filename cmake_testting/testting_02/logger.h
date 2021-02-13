/**
 * \file    logger.h
 * 
 * \section Detailed description
 * -# Output debug information about the target string
 * 
*/
#ifndef __logger_h__
#define __logger_h__

class logger
{
public:
    logger();
    ~logger();

public:
    /**
     * \fn      puts
     * \brief   Output debug information about the target string \n \a format: 
     * [build_model] >  * [function_name] of [line] : [external_string]
     * 
    */
    void puts(const char *) const;
};

#endif // !__logger_h__