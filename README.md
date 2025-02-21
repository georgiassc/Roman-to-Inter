# Roman-to-Inter

This repository contains a C program that converts Roman numerals to integers. The code uses helper functions to display characters and strings in the terminal and processes the conversion of a Roman numeral passed as an argument.

## Roman Numerals

Roman numerals are represented by seven different symbols:

| Symbol | Value |
|---------|-------|
| I       | 1     |
| V       | 5     |
| X       | 10    |
| L       | 50    |
| C       | 100   |
| D       | 500   |
| M       | 1000  |

For example:
- 2 is written as `II` in Roman numerals, just two ones added together.
- 12 is written as `XII`, which is simply `X + II`.
- 27 is written as `XXVII`, which is `XX + V + II`.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not `IIII`. Instead, the number four is written as `IV`. Because the one is before the five, we subtract it, making four. The same principle applies to the number nine, which is written as `IX`. 

### Conversion Rules Implemented

The program follows standard Roman numeral rules:
- I can be used before V (5) and X (10) to form IV (4) and IX (9).
- X can be used before L (50) and C (100) to form XL (40) and XC (90).
- C can be used before D (500) and M (1000) to form CD (400) and CM (900).
- All other symbols are added directly.

## Usage
To use this program, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/georgiassc/roman-to-inter.git](https://github.com/georgiassc/Roman-to-Inter.git)
   cd roman-to-inter
   ```
   or
    ```sh
   git clone https://github.com/georgiassc/roman-to-inter.git](https://github.com/georgiassc/Roman-to-Inter.git)
   cd roman-to-inter
   ```
   
3. Compile the program:
   ```sh
   gcc main.c -o roman_converter
   ```
4. Run the program:
   ```sh
   ./roman_converter ROMAN_NUMERAL
   ```
   Replace `ROMAN_NUMERAL` with the desired Roman numeral.

## Additional Examples

### Example 1:
**Input:** `./roman_converter "III"`

**Output:** `3`

**Explanation:** `III = 3`.

### Example 2:
**Input:** `./roman_converter "LVIII"`

**Output:** `58`

**Explanation:** `L = 50, V = 5, III = 3`.

### Example 3:
**Input:** `./roman_converter "MCMXCIV"`

**Output:** `1994`

**Explanation:** `M = 1000, CM = 900, XC = 90 and IV = 4`.

## Code Structure

- `ft_putchar(char c)`: Writes a character to the terminal.
- `ft_putnbr(int c)`: Displays an integer in the terminal.
- `ft_putstr(char *str)`: Displays a string in the terminal.
- `ft_romanToInt(char* s)`: Converts a Roman numeral to an integer.
- `main(int argc, char **argv)`: Main function that takes an argument and displays the conversion result.

## Error Handling
- If the user enters an invalid character, the program displays an error message.
- If no argument is provided, the program notifies that a Roman numeral is required.
- If more than one argument is passed, the program informs that only one Roman numeral is allowed at a time.

# License
This project is free to use and distribute under the MIT license.

## Technologies Used

- **Language:** C

## How to Contribute

We welcome contributions! Follow these steps:
1. **Fork** the repository.
2. **Create a new branch** (`git checkout -b feature-branch`).
3. **Make your improvements** and commit the changes (`git commit -m 'Added feature X'`).
4. **Push your changes** (`git push origin feature-branch`).
5. **Submit a Pull Request** for review.
