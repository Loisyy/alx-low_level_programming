0x18-dynamic_libraries
A dynamic library is a separate file containing precompiled code that is linked to the program at either load time or runtime.
The executable file contains references to the dynamic library, but the library itself is not included in the executable.
Dynamic libraries are loaded into memory when the program starts or when they are explicitly loaded during runtime.
Multiple programs can share the same dynamic library, reducing memory usage and disk space.
Dynamic libraries have the file extension .so on Unix-like systems and .dll on Windows.
