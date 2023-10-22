
            :::      ::::::::
          :+:      :+:    :+:
        +:+ +:+         +:+
      +#+  +:+       +#+      
    +#+#+#+#+#+   +#+          By: jade-car <jade-car@student.42barcel>
        #+#    #+#            
       ###   ########.fr

# ft_printf 🖨️ (in a nutshell)

**I'M GOING TO REPLICATE HOW PRINTF WORKS!! :)**

🔎
The printf() function is a C standard library function used to display data on the screen. It can output various data types, including hexadecimal, strings and pointers. printf() transfers data from memory to the screen and **returns** the count of characters written.

🔬To build the printf function we must analyze the printf prototype, the importance of variadic variables and other functions.

I. printf prototype  
---  
__int ft_printf(char const *onscreen, ...);__  

- The ft_printf() function returns an integer value indicating the number of characters that were printed. If the number returned is negative, it returns an error.
- onscreen -> The first argument of the function is a format string, which contains text to print on the screen and special characters that indicate how to format.
- elipsis '...' -> The remaining arguments are passed to the function as a variable list, which is a way of passing an arbitrary number of arguments to the function.

**FORMAT SPECIFIERS: (briefly)**
- `%s` Prints a string of characters.
- `%X` Formats an unsigned integer in hexadecimal, using uppercase letters.
- `%%` Prints a percent sign.
  
`printf("C is a programming language developed by %s between %d and %d.\n", "Dennis Ritchie", 1969, 1976);`  
`OUTPUT: C is a programming language developed by Dennis Ritchie between 1969 and 1976.`  


  
