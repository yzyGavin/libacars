/*
 *  This file is a part of libacars
 *
 *  Copyright (c) 2018-2019 Tomasz Lemiech <szpajder@gmail.com>
 */
#ifndef LA_UTIL_H
#define LA_UTIL_H 1
#include <stdint.h>
#include <stddef.h>		// size_t
#include <stdlib.h>		// free()
#include <time.h>		// struct tm

typedef struct {
	int id;
	void *val;
} la_dict;

void *la_xcalloc(size_t nmemb, size_t size, const char *file, const int line, const char *func);
void *la_xrealloc(void *ptr, size_t size, const char *file, const int line, const char *func);

#define LA_XCALLOC(nmemb, size) la_xcalloc((nmemb), (size), __FILE__, __LINE__, __func__)
#define LA_XREALLOC(ptr, size) la_xrealloc((ptr), (size), __FILE__, __LINE__, __func__)
#define LA_XFREE(ptr) do { free(ptr); ptr = NULL; } while(0)

void *la_dict_search(const la_dict *list, int id);
size_t la_slurp_hexstring(char *string, uint8_t **buf);
char *la_hexdump(uint8_t *data, size_t len);
int la_strntouint16_t(char const *txt, int const charcnt);
size_t chomped_strlen(char const *s);
char *la_simple_strptime(char const *s, struct tm *t);

#endif // !LA_UTIL_H
