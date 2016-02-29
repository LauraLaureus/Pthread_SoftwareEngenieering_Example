//
//  MainHeader.h
//  Example pthreads
//
//  Created by Laura del Pino Díaz on 29/2/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#ifndef MainHeader_h
#define MainHeader_h
#include <pthread.h>

extern pthread_mutex_t mutex;
extern int count;

#endif /* MainHeader_h */

#ifndef Modules
#include "Module1.hpp"
#include "Module2.hpp"
#endif
