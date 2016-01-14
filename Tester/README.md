# Tester

Tester is a c++ class that you can use in order to get more readable mains

Examples on how to use it are in the `main.cpp`

## API:

``` Tester() ```

This is the constructor.

``` Tester.test(value, expected) ```

This is the main function of the Tester.

Just pass it two values, it will compare them and print a beautifull test message (can be objects, primitive types... They just need to have an operator== and a ostream operator<< overload)

``` ~Tester() ```

The destructor. Print the final result of the test
