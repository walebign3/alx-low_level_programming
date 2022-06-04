#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void class_fun(unsigned char *e_ident);
void data_fun(unsigned char *e_ident);
void version_fun(unsigned char *e_ident);
void abi_fun(unsigned char *e_ident);
void os_abi_fun(unsigned char *e_ident);
void type_fun(unsigned int e_type, unsigned char *e_ident);
void entry_point_add_fun(unsigned long int e_entry, unsigned char *e_ident);

#endif
