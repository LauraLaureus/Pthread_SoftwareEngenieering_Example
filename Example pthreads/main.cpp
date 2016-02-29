//
//  main.cpp
//  Example pthreads
//
//  Created by Laura del Pino Díaz on 29/2/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include <iostream>
#include "MainHeader.h"

pthread_t mod1,mod2;
//pthread_attr_t attr;
int count = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

int main(int argc, const char * argv[]) {

    pthread_create(&mod1,NULL, module1_init, NULL);
    pthread_detach(mod1);
    
    pthread_create(&mod2, NULL, module2_init, NULL);
    pthread_detach(mod2);

    pthread_exit(NULL);
    
}
