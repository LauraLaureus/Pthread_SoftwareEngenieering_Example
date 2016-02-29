# Pthread_SoftwareEngenieering_Example
Software Engieneering example for Pthread Concurrency Library

This is an example of modularization using pthreads.

Main Goals:

Share mutex and counter variable.

Keep every module apart from others.

MainHeader contains pthread library which is needed for every module, the definition of mutex and counter variable.
In order to init mutex and counter variable in main.cpp the definition is preceed of extern clause. (This means the memory adress is defined in linkage step). MainHeader also contains the include of the module headers, this implies the modules' cpp only has to include MainHeader. 
