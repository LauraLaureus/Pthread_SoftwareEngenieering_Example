//
//  Module1.cpp
//  Example pthreads
//
//  Created by Laura del Pino Díaz on 29/2/16.
//  Copyright © 2016 Laura del Pino Díaz. All rights reserved.
//

#include "MainHeader.h"


void* module1_init(void* args){
    
    while (true) {
        pthread_mutex_lock(&mutex);
        count +=1;
        printf("Module 1: count value %d\n",count);
        pthread_mutex_unlock(&mutex);
    }
   
    pthread_exit(NULL);
    
}