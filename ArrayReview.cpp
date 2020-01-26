// 01/25/2019 
// Review over Arrays
/*

NOTES: 

Info on Arrays: 
        - Arrays: Fixed # of items, must have same data type.
        - Element:        Each item stored in an array. 
        - Index:          Location of an element.

Basic Operations supported by an Array:
        - Traverse: prints all the array elemtns one by one
        - Deletion: Deletes an element at the given index
        - Insertion: Adds an element at the given index. 
        - Search: Searches an element using the given index or by value.
        - Update: updates an element at the given index. 

*/

/* LANGUAGE USED :  C++ */

// Different ways to write an array.
int array [7];
// or
int array [7]= {11,12,17};
// or 
int array []= {12,13,2};
// or 
int array []{12,13,2};


/* LANGUAGE USED :  Python */

/*
Arrays in Python: 

    - Arrays are not as common in python. 
      When people talk about python arrays they are more talking about python lists. 

    - Arrays in numeric values are supported in Python by "Array Module". 
    - Lists can be treated as arrays, but cannot constrain the type of elements stored in a list. 
    - If create arrays using array module,
      all elements of the array MUST be of the same numeric type. 


     Different ways to write an array/list.

                a = [ 1,3.5, "Hello"]

        Witing an array using array module:

            - This is creating an array of float type. The letter 'd' is a type code. 
              This determines the type of the array during creation.

                import array as arr
                a = arr.array('d', [2, 7.1, "lemon"])
                print(a)

Commonly used type codes:
 
    |  Code   |   C Type       |   Python Type  |   Min bytes    |
    |   'b'   |  signed char   |       int      |      1         |
    |   'B'   | unsigned char  |       int      |      1         |
    |   'u '  | Py_UNICODE     |      Unicode   |      2         |
    |   'h'   | signed short   |       int      |      2         |
    |   'H'   | unsigned short |       int      |      2         |
    |   'i'   | signed int     |       int      |      2         |
    |   'I'   | unsigned int   |       int      |      2         |
    |   'l'   | signed long    |       int      |      4         |
    |   'L'   | unsigned long  |       int      |      4         |
    |   'f'   | float          |      float     |      4         |
    |   'd'   | unsigned short |      float     |      8         |
*/