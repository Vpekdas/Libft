# Libft - Your very first own library

# Table of Contents
1. [Description](#description)
2. [Installation Instructions](#installation-instructions)
3. [Usage Instructions](#usage-instructions)
4. [Key Functions](#key-functions)
5. [Contribution Guidelines](#contribution-guidelines)
6. [Acknowledgments](#acknowledgments)
7. [License Information](#license-information)
8. [Contact Information](#contact-information)
9. [Project Development](#project-development)

## Description

Libft is a robust and reliable library written in C, designed to provide functions similar to those in the standard C library. The library is particularly useful for students and those new to programming in C, offering a safe and well-coded set of functions that handle common tasks.

One of the main features of Libft is its focus on robustness and error handling. All functions are designed to handle edge cases, such as failed memory allocation or null pointers, preventing segmentation faults and making your code more stable and reliable.

This library is part of a larger project and serves as a cornerstone for most of my work. By using Libft, you're not just using a set of functions, but a tool that has been refined and proven in numerous projects.

## Installation Instructions##

Before you begin, ensure you have met the following requirements:

1. **Download the library**: You can clone the library from GitHub using the following command in your terminal:
```bash
git clone https://github.com/Vpekdas/Libft.git
```

2. **Install a C compiler**: If you don't already have a C compiler installed, you will need one to build and use this library. You can install the [Clang compiler](https://clang.llvm.org).
   
- On a Mac, you should already have Clang installed as part of Xcode Command Line Tools. You can confirm this by running clang --version in your terminal. If it's not installed, you'll be prompted to install it.

- On a Linux machine, use the package manager for your distribution. For example, on Ubuntu:
  ```bash
  sudo apt install clang
  ```

## Usage Instructions

1. **Include the library in your project**: Add the following line at the top of your source code files:
```c
#include "../include/libft.h"
```

2. **Compile your project**: When compiling your project, you need to tell the compiler where to find libft.a and to link against it. Here's an example:
```bash
clang your_program.c -LLibft -lft -o your_project_name
```

## Key Functions
Here are some of the key functions provided by this library:

- `ft_atoi(const char *str)`: Converts the initial portion of the string pointed to by `str` to `int` representation.
  ```c
  char *str = "123";
  int num = ft_atoi(str);
  printf("%d\n", num);  // Outputs: 123
  ```

- `ft_calloc(size_t count, size_t size)`: Allocates memory for an array of count elements, each of them size bytes long, and initializes all its bits to zero.
```c
int *arr = ft_calloc(5, sizeof(int));  // Allocates memory for an array of 5 integers
```

- `ft_itoa(int n)`: Converts the integer n to a string.
```c
int num = 123;
char *str = ft_itoa(num);
printf("%s\n", str);  // Outputs: "123"
```

- `ft_putstr_fd(char *s, int fd)`: Outputs the string s to the given file descriptor fd.
```c
ft_putstr_fd("Hello, world!\n", 1);  // Outputs: "Hello, world!"
```

- `ft_split(char const *s, char c)`: Splits the string s into an array of strings according to the delimiter character c.
```c
char **words = ft_split("Hello, world!", ' ');
// words[0] is "Hello,", words[1] is "world!"
```

- `ft_strlen(const char *s)`: Returns the length of the string s.
```c
size_t len = ft_strlen("Hello, world!");
printf("%zu\n", len);  // Outputs: 13
```

- `ft_lstadd_back(t_list **lst, t_list *new)`: Adds the element new at the end of the list lst.
```c
t_list *list = ft_lstnew("Hello");
ft_lstadd_back(&list, ft_lstnew("world!"));
// list now contains two elements: "Hello" and "world!"
```

- `ft_lstnew(void *content)`: Creates a new list element with content.
```c
t_list *list = ft_lstnew("Hello");
// list now contains one element: "Hello"
```

- `ft_lstsize(t_list *lst)`: Returns the number of elements in the list lst.
```c
t_list *list = ft_lstnew("Hello");
ft_lstadd_back(&list, ft_lstnew("world!"));
int size = ft_lstsize(list);
printf("%d\n", size);  // Outputs: 2
```

## Acknowledgments

I would like to express my deepest appreciation to all those who provided the possibility to complete this project. A special gratitude I give to the contributors of the following tester programs:

* [libftTester by Tripouille](https://github.com/Tripouille/libftTester)
* [libft-unit-test by alelievr](https://github.com/alelievr/libft-unit-test)
* [libft-war-machine by 0x050f](https://github.com/0x050f/libft-war-machine)

These tester programs were instrumental in the development process. They not only helped me identify and correct errors quickly, but also introduced me to new testing methodologies and considerations I hadn't previously encountered. Their insights and expertise contributed significantly to the completion of this project.

## Contribution Guidelines

I welcome contributions from everyone. Here are some guidelines to follow:

1. **Fork the repository**: Start by forking the repository to your own GitHub account.

2. **Clone the repository**: Clone the forked repository to your local machine.
```bash
git clone https://github.com/Vpekdas/libft.git
```

3. **Create a new branch**: Create a new branch for each feature or bug fix you're working on. Do not make changes directly on the master branch
```bash
git checkout -b your-branch-name
```

4. **Make your changes**: Make your changes in the new branch. Ensure your code follows the [norminette](https://github.com/42School/norminette).

5. **Commit your changes**: Commit your changes regularly with clear, descriptive commit messages.
```bash
git commit -m "Your commit message"
```

6. **Push your changes**: Push your changes to your forked repository on GitHub.
```bash
git push origin your-branch-name
```

7. **Create a pull request**: Go to your forked repository on GitHub and create a new pull request against the master branch.
Please note that this project has a code of conduct, and contributors are expected to adhere to it. Any contributions you make are greatly appreciated.

## License Information

This project is licensed under the [MIT License](LICENSE).

The MIT License is a permissive license that is short and to the point. It lets people do anything they want with your code as long as they provide attribution back to you and don’t hold you liable.

For the full license text, see the [LICENSE](LICENSE) file.

## Contact Information

If you have any questions, issues, or if you want to contribute, feel free to reach out to me:

- GitHub: [@Vpekdas](https://github.com/Vpekdas)
- Discord: Captain-Plouf#7811

## Project Development

This project started as a simple tool for personal use and is evolving into a full-fledged library. While it has been a solo endeavor so far, contributions from the community are welcome and appreciated.

### Current Status

The project is currently complete and not in active development. However, maintenance and updates will be done as needed.

### Future Plans

Plans for future development include adding more functions, improving performance, and expanding the documentation.

### Known Issues

There are currently no known issues. If you find a bug, please report it in the [issue tracker](https://github.com/Vpekdas/libft/issues).

### Contributing

Contributions are always welcome! See the [Contribution Guidelines](#contribution-guidelines) for more information.


