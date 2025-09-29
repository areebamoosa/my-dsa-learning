# Recursion

The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function.

It provides a way to break complicated problems down into simple problems which are easier to solve.

Since called function may further call itself, this process might continue forever. So it is essential to provide a base case to terminate this recursion process.

### Steps to Implement Recursion

**Step1 - Define a base case:** The simplest case where the answer is known (stopping point).

**Step2 - Define a recursive case:** Break the problem into smaller versions of itself and call the function again.

**Step3 - Ensure the recursion terminates:** Ensure the function eventually reaches the base case (no infinite loop).

**Step4 - Combine the solutions:** Join the answers of subproblems to get the final solution.
<br>

---

In recursion, there are always two cases:

**Base Case** – The simplest case where the answer is already known. It stops the recursion.

**Example:** Factorial(0) = 1 (no need to go further).

**Recursive Case** – The part where the function calls itself with a smaller version of the problem.

**Example:** Factorial(n) = n × Factorial(n-1).

So, the base case ends the recursion, and the recursive case keeps it going until the base case is reached.

---

## Recursion VS Iteration

| SR No. | Recursion                                                   | Iteration                                         |
| ------ | ----------------------------------------------------------- | ------------------------------------------------- |
| 1      | Terminates when the base case becomes true.                 | Terminates when the loop condition becomes false. |
| 2      | Logic is built in terms of smaller problems.                | Logic is built using iterating over something.    |
| 3      | Every recursive call needs extra space in the stack memory. | Every iteration does not require any extra space. |
| 4      | Smaller code size.                                          | Larger code size.                                 |

### What are the advantages of recursive programming over iterative programming?

- Recursion provides a clean and simple way to write code.

- Some problems are inherently recursive like tree traversals, Tower of Hanoi, etc. For such problems, it is preferred to write recursive code. We can write such codes also iteratively with the help of a stack data structure. For example refer Inorder Tree Traversal without Recursion, Iterative Tower of Hanoi.

### What are the disadvantages of recursive programming over iterative programming?

**Note:** every recursive program can be written iteratively and vice versa is also true.

- Recursive programs typically have more space requirements and also more time to maintain the recursion call stack.

- Recursion can make the code more difficult to understand and debug, since it requires thinking about multiple levels of function calls..

### Summary of Recursion:

- There are two types of cases in recursion i.e. recursive case and a base case.

- The base case is used to terminate the recursive function when the case turns out to be true.
- Each recursive call makes a new copy of that method in the stack memory.
- Infinite recursion may lead to running out of stack memory.
