# PhoneBook 
A simple **PhoneBook Management** in C that allows users to store, sort, and search contacts efficiently using **insertion sort** and **binary search**.  

## 🚀 Features  
Add up to 100 contacts (Name, Phone, Email)  
Sort contacts alphabetically (**Insertion Sort**)  
Fast search using **Binary Search** (Recursive & Iterative)  
Displays results in a formatted table  

## Technologies Used  
- C Programming  
- Standard Library (`stdio.h`, `string.h`)  

## Project Structure  
```
📦 PhoneBook
├── phonebook.c  # Main program file
├── README.md    # Documentation
```

## Initial Directory  
![Initial Directory](path/to/initial-directory-image.png)  

## Compile & Run  
```sh
gcc phonebook.c -o phonebook  
./phonebook  
```

## Sample Output  
```
Enter name to search: Bob  
Contact Found:  
+----------+--------------+-----------------+  
| Name     | Phone        | Email           |  
+----------+--------------+-----------------+  
| Bob      | 9123456780   | bob@example.com |  
+----------+--------------+-----------------+  
```

## Initial v/s Sorted Directory  
![Sorted Directory](path/to/sorted-directory-image.png)  

## Why Binary Search?  
O(log n) complexity → Fast searches!  
Only **20 searches for 1 million contacts** vs. **1M in linear search**  

 
