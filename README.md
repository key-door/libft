## libft
#### libft is to re-code some libc functions.
You can verify the behavior by using the `man` command in your terminal.

example) $man atoi 

atoi ,atol ,bzero ,calloc ,isalnum ,isalpha ,isascii ,isdigit ,isprint ,isspace ,memchr ,memcmp ,memcpy ,memmove ,memset ,split ,strchr ,strcmp ,strdup ,strlcat ,strlcpy ,strlen ,strncat ,strncmp ,strndup ,strnstr ,strrchr ,tolower ,toupper






#### ft_substr
Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);
Parameters: s: The string from which to create the substring. start: The start index of the substring in the string ’s’. len: The maximum length of the substring.
Return value: The substring. NULL if the allocation fails.
Description: Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’. 

#### ft_strjoin
Prototype char *ft_strjoin(char const *s1, char const *s2);
Parameters: s1: The prefix string. s2: The suffix string.
Return value: The new string. NULL if the allocation fails.
Description: Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

#### ft_strtrim
Prototype char *ft_strtrim(char const *s1, char const *set);
Parameters: s1: The string to be trimmed. set: The reference set of characters to trim.
Return value: The trimmed string. NULL if the allocation fails.
Description: Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

#### ft_split
Prototype char **ft_split(char const *s, char c);
Parameters: s: The string to be split. c: The delimiter character.
Return value: The array of new strings resulting from the split. NULL if the allocation fails.
Description: Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must end with a NULL pointer.

#### ft_itoa
Prototype char *ft_itoa(int n);
Parameters: n: the integer to convert.
Return value: The string representing the integer. NULL if the allocation fails.
Description: Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

#### ft_strmapi
Prototype char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
Parameters: s: The string on which to iterate. f: The function to apply to each character.
Return value: The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
Description: Applies the function ’f’ to each character of the string ’s’, and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.

#### ft_striteri
Prototype void ft_striteri(char *s, void (*f)(unsigned int, char*));
Parameters: s: The string on which to iterate. f: The function to apply to each character.
Return value: None
Description: Applies the function ’f’ on each character of the string passed as argument, passing its index as first argument. Each character is passed by address to ’f’ to be modified if necessary.

#### ft_putchar_fd
Prototype void ft_putchar_fd(char c, int fd);
Parameters: c: The character to output. fd: The file descriptor on which to write.
Return value: None
Description: Outputs the character ’c’ to the given file descriptor.

#### ft_putstr_fd
Prototype void ft_putstr_fd(char *s, int fd);
Parameters: s: The string to output. fd: The file descriptor on which to write.
Return value: None
Description: Outputs the string ’s’ to the given file descriptor.

#### ft_putendl_fd
Prototype void ft_putendl_fd(char *s, int fd);
Parameters: s: The string to output. fd: The file descriptor on which to write.
Return value: None
Description: Outputs the string ’s’ to the given file descriptor followed by a newline.

#### ft_putnbr_fd
Prototype void ft_putnbr_fd(int n, int fd);
Parameters: n: The integer to output. fd: The file descriptor on which to write.
Return value: None
Description: Outputs the integer