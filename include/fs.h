#ifndef FS_H
#define FS_H

#define MAX_FILES 16
#define FILE_DATA_SIZE 128

struct file {
    char name[32];
    char data[FILE_DATA_SIZE];
};

extern struct file files[MAX_FILES];
extern int file_count;

void strcpy(char *dest, const char *src);
int strcmp(const char *a, const char *b);
int find_file(const char *name);

#endif
