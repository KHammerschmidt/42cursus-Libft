<h1 align="center">
  <img  width="90" src="https://user-images.githubusercontent.com/19689770/129336866-169b0dc7-ea41-47d4-b50a-d466508031af.png">
  
	🧰 libft
 </img>
	<sub><sub>Project status</sub></sub></br>
	<sub><a href="https://github.com/JaeSeoKim/badge42"><img src="https://badge42.vercel.app/api/v2/cl9mxvq9700780hl4msqc8saj/project/2202131" 	alt="khammers's 42 Libft Score" /></a> </sub></br>
	
</h1>
</br>

<p align="center">
	<b>Development repo of my very own standard library</b><br>
	Start date: 15/july/2021 </br>
</p>

<p align="center">
	<img alt="Github code size in bytes" src="https://img.shields.io/github/languages/code-size/KHammerschmidt/Libft?color=light%20green&label=code%20size%20in%20bytes"/>
	<img alt="Number of lines in code" src="https://img.shields.io/tokei/lines/github/KHammerschmidt/42cursus-Libft?color=blueviolet"/>
	<img alt="Github repo size" src="https://img.shields.io/github/repo-size/KHammerschmidt/Libft?color=turquoise"/>
	<img alt="Languages used in repo" src="https://img.shields.io/github/languages/count/KHammerschmidt/Libft?color=red&label=languages%20used%20in%20repo"/>
	<img alt="Top used progamming language" src="https://img.shields.io/github/languages/top/KHammerschmidt/libft?color=purple"/>	
</p>

<h3 align="center">
	<a href="-about">About</a>
	<span> · </span>
	<a href="-list-of-functions">List of functions</a>
	<span> · </span>
	<a href="#-usage">Usage</a>
</h3>

---

## 💡 About the project
> The aim of this project is to re-code my own library with standard functions of the C library ```libc``` as well as some utility functions for memory and string manipulation. The bonus functions cover list manipulation.[^1]
</br>

**Requirements**

All functions must have the same prototypes and implement the same behaviours as the originals. They must comply with the way they are defined in their man. All functions shall begin with the 'ft_' prefix.

</br>

**Key learning points**
  - Handling different variable types and memory allocation
  - Passing on various types of input and typecasting void pointers
  - Setting up a Makefile to compile my library
  - Familiarise myself with linked lists

</br>

## 📄 Functions

### ▫️**Libc functions**
##### Character type testing
* [`ft_isalpha`](./src/ft_isalpha.c) - tests for alphabetic character
* [`ft_isdigit`](./src/ft_isdigit.c) - tests for decimal-digit character
* [`ft_isalnum`](./src/ft_isalnum) - tests for alphanumeric character
* [`ft_isascii`](./src/ft_isascii) - tests for ASCII character
* [`ft_isprint`](./src/ft_isprint) - tests for printable characters
##### Printing utils
* [`ft_toupper`](./src/ft_toupper.c) - converts lower case to upper case
* [`ft_tolower`](./src/ft_tolower.c) - converts upper case to lower case
* [`ft_putchar_fd`](./src/ft_putchar_fd.c) - writes one character to given file descriptor
* [`ft_putstr_fd`](./src/ft_putstr_fd.c) - writes a string to the given file descriptor
* [`ft_putendl_fd`](./src/ft_putendl_fd.c) - writes a string and newline to the given file descriptor 
* [`ft_putnbr_fd`](./src/ft_putnbr_fd.c) - writes an integer to the given file descriptor
##### Memory area manipulation
* [`ft_memset`](./src/ft_memset.c) - writes a byte to a byte string
* [`ft_memmove`](./src/ft_memmove.c) - copies bytes from string to another
* [`ft_memcpy`](./src/ft_memcpy.c) - copies bytes from src to dst memory area
* [`ft_memchr`](./src/ft_memchr.c) - locates first occurence of byte in byte string
* [`ft_memcmp`](./src/ft_memcmp.c) - compares two byte strings
##### Memory allocation
* [`ft_bzero`](./src/ft_bzero.c) - writes zeroed butes to a string 
* [`ft_calloc`](./src/ft_calloc.c) - allocates memory and fills it with zeroed 
##### String manipulation
* [`ft_strlen`](./src/ft_strlen) - returns the length of a string
* [`ft_strlcpy`](./src/ft_strlcpy.c) - size-bound string copying
* [`ft_strlcat`](./src/ft_strlcat.c) - appends string src to string dst 
* [`ft_strchr`](./src/ft_strchr.c) - locates first occurence of a character in string
* [`ft_strrchr`](./src/ft_strrchr.c) - locates last occurence of a character in string
* [`ft_strncmp`](./src/ft_strncmp.c) - compares lexicographically two strings
* [`ft_strnstr`](./src/ft_strnstr.c) - locates a substring in a string
* [`ft_strdup`](./src/ft_strdup.c) - saves a copy of a string
* [`ft_atoi`](./src/ft_atoi.c) - converts a string to integer representation
</br>

### ▫️**Utility functions**
* [`ft_substr`](./src/ft_substr.c) - returns a substring from string
* [`ft_strjoin`](./src/ft_strjoin.c) - concatenates two strings
* [`ft_strtrim`](./src/ft_strtrim.c) - trims a string in regards to a reference set
* [`ft_split`](./src/ft_split.c) - splits a string and returns an array
* [`ft_itoa`](./src/ft_itoa.c) - allocates and returns a string of an integer
* [`ft_strmapi`](./src/ft_strmapi.c) - creates new string resulting from successive application of function to each character 
* [`ft_striteri`](./src/ft_striteri.c) - applies a function to each character of a string
</br>

### ▫️**Bonus functions - linked lists**
* [`ft_lstnew`](./src/ft_lstnew.c) - allocates a new initialised list element 
* [`ft_lstadd_front`](./src/ft_lstadd_front.c) - adds an element to the beginning of a list
* [`ft_lstsize`](./src/ft_lstsize.c) - returns number of elements in list
* [`ft_lstlast`](./src/ft_lstlast.c) - returns the last element of a list
* [`ft_lstadd_back`](./src/ft_lstadd_back.c) - adds an elemenet to the end of a list
* [`ft_lstdelone`](./src/ft_lstdelone.c) - frees an element's content and elemente itself
* [`ft_lstclear`](./src/ft_lstclear.c) - deletes and frees the given element and every successor
* [`ft_lstiter`](./src/ft_lstiter.c) - iterates list and applies function to elements
</br>

### ▫️Added functions for usability in later projects
* [`ft_free`](./src/ft_free.c) - Frees a strings' memory and sets it to NULL
* [`ft_strnjoin`](./src/ft_strjoin.c) - concatenates two strings but no more than set bytes
</br>


## 🛠️ **Usage**

To compile the library use the command  ``` make ``` <br/>
To compile bonus functions use ``` make bonus ``` <br/>
 
![Bildschirmfoto 2022-09-26 um 23 08 11](https://user-images.githubusercontent.com/80644370/192380864-609a3046-6b92-4367-a1a2-87f31d2c0afa.png)


---
[^1]: This repo does not pass the initial moulinette tests of Libft at École 42 due to added functions and changes required by later projects.


