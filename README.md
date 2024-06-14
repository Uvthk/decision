## Random Choice Selector

This is a simple C program that takes a list of arguments and randomly selects one to print.

### Usage

To compile the program, use `gcc` or any other C compiler:

```sh
gcc -o choice choice.c
```

Then run the program with a list of arguments:

```sh
./choice arg1 arg2 arg3 ...
```

The program will output one of the provided arguments at random.

### Example

```sh
./choice apple banana cherry
```

Possible outputs could be:

```
apple
```

or

```
banana
```

or

```
cherry
```

### How It Works

- The program initializes the random number generator using the current time.
- It then shifts all command-line arguments left by one position.
- Finally, it prints one of the remaining arguments chosen at random.
