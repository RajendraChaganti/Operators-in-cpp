# Operators-in-cpp

### Aim : 

To study and implement different types of operators in C++ by,        
Determine if a number is positive, negative, or zero.        
Calculate average marks and assign grades.
Identify the coordinate quadrant of a point.

### Apparatus :

GNU g++ compiler (for local execution)Any code editor or an Online C++ Compiler

## Program 3A : Check if a Number is Positive, Negative, or Zero 

### Objective :

To input a number and determine if it is positive, negative, or zero.

### Explanation :

- The program takes an integer input using cin.
- It uses simple if-else conditions:
  - If number > 0 = "Positive"
  - If number < 0 = "Negative"
  - Else = "Zero (neither positive nor negative)"
- **Relational operators** like >, < are used to check the condition.
- This helps understand basic conditional logic in C++.

## Program 3B : Calculate Average Marks and Display Grade 

### Objective :

To take marks of six subjects, calculate the average, and display a grade based on that average.

### 🧾 Subjects :

- Mathematics
- Physics
- Chemistry
- Geography
- Hindi
- Marathi

### Explanation :

- The program takes marks for all 6 subjects.
- It calculates the average by adding all and dividing by 6.0.
- The .0 ensures float division (to get decimals).
- Grades are assigned using if-else if conditions:
  - avg >= 90 = Grade A
  - avg >= 80 = Grade B
  - avg >= 70 = Grade C
  - avg >= 60 = Grade D
  - Below 60 = Grade F (Fail)

### Operators Used:
- Arithmetic operator used to add marks of all subjects : +
- Arithmetic operator used to divide the total by 6 to get average : /
- Relational operator used to check if average meets or exceeds a grade boundary : >=
- Relational operator used to compare values below a grade boundary : <

These operators are essential for performing calculations and making logical decisions in the program.

## Program 3C : Determine Coordinate Quadrant    

### Objective : 

To find the location of a point (x, y) in the Cartesian plane:
- In Quadrants 1–4
- On X or Y axis
- Or at Origin

### Explanation :

- Takes input of x and y coordinates.
- Uses multiple if-else conditions:
  - x == 0 && y == 0 → Origin
  - x == 0 → Y-axis
  - y == 0 → X-axis
  - x > 0 && y > 0 → 1st Quadrant
  - x < 0 && y > 0 → 2nd Quadrant
  - x < 0 && y < 0 → 3rd Quadrant
  - x > 0 && y < 0 → 4th Quadrant
- This logic helps in understanding how Cartesian planes work in geometry and programming.
All three experiments use:
- Basic cin / cout for input and output
- Conditional logic (if, else if, else)
- Operators:
  - Arithmetic: +, /
  - Relational: >, <, >=, ==
 
### Conclusion:     

Each of these programs demonstrates practical applications of operators in C++:     
Program 1: Shows how to classify numbers using relational operators.        
Program 2: Uses a combination of arithmetic, relational, and logical operators to calculate averages and assign grades based on specific criteria.  
Program 3: Applies relational and logical operators to determine the position of a point in geometry.

Collectively, these programs build a solid foundation in decision-making, condition checking, and operator usage in C++, essential for developing more complex programs that require precise control over the logic flow.
