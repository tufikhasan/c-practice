# C `printf()` Format Specifiers

| Format | Data Type | Example | Output |
|--------|-----------|---------|--------|
| `%d` | `int` (signed decimal) | `printf("%d", 10);` | `10` |
| `%i` | `int` | `printf("%i", 10);` | `10` |
| `%u` | `unsigned int` | `printf("%u", 100U);` | `100` |
| `%f` | `float` / `double` | `printf("%f", 3.14);` | `3.140000` |
| `%.2f` | Float with 2 decimal places | `printf("%.2f", 3.14159);` | `3.14` |
| `%e` | Scientific notation | `printf("%e", 1234.5);` | `1.234500e+03` |
| `%E` | Scientific notation (uppercase) | `printf("%E", 1234.5);` | `1.234500E+03` |
| `%g` | Shorter of `%f` or `%e` | `printf("%g", 1234.5);` | `1234.5` |
| `%G` | Uppercase version of `%g` | `printf("%G", 1234.5);` | `1234.5` |
| `%c` | Character | `printf("%c", 'A');` | `A` |
| `%s` | String | `printf("%s", "Hello");` | `Hello` |
| `%p` | Pointer (memory address) | `printf("%p", (void *)&x);` | `0x7ffe...` |
| `%x` | Hexadecimal (lowercase) | `printf("%x", 255);` | `ff` |
| `%X` | Hexadecimal (uppercase) | `printf("%X", 255);` | `FF` |
| `%o` | Octal | `printf("%o", 10);` | `12` |
| `%%` | Print `%` | `printf("100%%");` | `100%` |

## Width and Precision

| Format | Description | Example | Output |
|--------|-------------|---------|--------|
| `%5d` | Minimum width of 5 | `printf("%5d", 42);` | `   42` |
| `%-5d` | Left align | `printf("%-5d", 42);` | `42   ` |
| `%05d` | Pad with zeros | `printf("%05d", 42);` | `00042` |
| `%.2f` | 2 decimal places | `printf("%.2f", 3.14159);` | `3.14` |
| `%10.2f` | Width 10, 2 decimals | `printf("%10.2f", 3.14159);` | `      3.14` |

## Length Modifiers

| Data Type | Format |
|-----------|--------|
| `short` | `%hd` |
| `unsigned short` | `%hu` |
| `int` | `%d` or `%i` |
| `unsigned int` | `%u` |
| `long` | `%ld` |
| `unsigned long` | `%lu` |
| `long long` | `%lld` |
| `unsigned long long` | `%llu` |
| `size_t` | `%zu` |
| `char` | `%c` |
| `char *` (string) | `%s` |
| `void *` (pointer) | `%p` |

## Most Common `printf()` Format Specifiers

| Format | Used For |
|--------|----------|
| `%d` | Integer |
| `%f` | Float / Double |
| `%c` | Character |
| `%s` | String |
| `%p` | Pointer (Memory Address) |
| `%u` | Unsigned Integer |
| `%x` | Hexadecimal |
| `%o` | Octal |
| `%%` | Print `%` |
| `%zu` | `size_t` (used with `sizeof()`) |