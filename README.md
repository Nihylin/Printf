<p align="center">
	<img src="https://assets-global.website-files.com/64107f65f30b69371e3d6bfa/6480d9b63a806a1b35fec007_Holberton-p-500.png" style="margin:50px;"/>
</p>

# <p align="center">_printf</p>
In C language, printf() function is used to print formatted output to the standard output stdout (which is generally the console screen).  The printf function is a part of the C standard library <stdio.h> and it can allow formatting the output in numerous ways. 

In this repository, we are going to replicate the printf function and make it our own.

## ⚠️ Requirements :
- No more than 5 functions per file
- A README.md file, at the root of the folder of the project is mandatory
- Global variables are not allowed
- The prototypes of all the functions should be included in the header file called main.h
- All the header files should be include guarded

## ⚙️ Parameters
1. **format**: It is a string that specifies the data to be printed. It may also contain a format specifier to print the value of any variable such as a character and an integer.
2. **args**: These are the variable names corresponding to the format specifier.

## ↪️ Return Value
- printf() returns **the number of characters printed** after successful execution.
- If an error occurs, a negative value is returned.

## ⬇️ Flowchart

![Image](https://i.imgur.com/LfLfRRu.png)

## 🔬 Examples :
- Print an integer: `_printf("The answer is %d\n", 42);` Result: "*The answer is 42*"
- Print a string: `_printf("Hello, %s!\n", "world");` Result : "*Hello, world!*"
- Print a character: `_printf("First letter: %c0, 'A');` Result: "*First letter: A*"
- Print a percent: `_printf("This is a percent: %%");` Result: "*This is a percent: %*"

## ▶️ Compilation command :
```c
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```

## 📄 Man page :
```
man ./man_3_printf
```

## ✏️ Authors :
#### Philippe Wanquetin
- Mail: philippe.wanquetin@gmail.com
- Github: [@nihylin](https://github.com/nihylin)

#### Omer Ozturk
- Mail: 7434@holbertonstudents.com
- Github: [@diesos](https://github.com/diesos)
