#include <stdio.h>
#include <string>

// folder stuff
bool mkpath( std::string path );
bool CreateSubfolder( char* cstringpath );

// networking stuff
int init_networking();
bool downloadFileToMemory(std::string path, std::string* buffer);			// appends file to buffer
bool downloadFileToDisk(std::string remote_path, std::string local_path);	// saves file to local_path

// callback for networking progress
// if set, will be invoked during the download
extern void (*networking_callback)(float);

// helper methods
const char* plural(int amount);
void cp(const char* from, const char* to);

