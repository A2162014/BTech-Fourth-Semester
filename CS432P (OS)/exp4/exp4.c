#include <dirent.h> 
#include <stdio.h> 
#include <stddef.h> 
#include <sys/types.h> 

void print_directory_contents(const char *dir_name) 
{ 
    DIR *d; 
    struct dirent *dir; 
  
    d = opendir(dir_name); 
    if (d == NULL) { 
        printf("Error: Could not open directory %s\n", dir_name); 
        return; 
    } 
  
    while ((dir = readdir(d)) != NULL) 
    { 
        switch (dir->d_type) { 
            case DT_REG: 
                printf("regular file: %s\n", dir->d_name); 
                break; 
            case DT_DIR: 
                printf("directory: %s\n", dir->d_name); 
                break; 
            default: 
                printf("unknown file type: %s\n", dir->d_name); 
                break; 
        } 
    } 
  
    if (closedir(d) < 0) 
        printf("Error: Could not close directory %s\n", dir_name); 
} 

int main() 
{ 
    const char *dir_name = "."; 
    print_directory_contents(dir_name); 
    return 0; 
} 
