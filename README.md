Swift Regression as a project acts as an implementation of regression learning algorithms, compatible with Swift programs. The core of the project is written in Swift, some aspects of data preprocessing and calculation are written in C++. This is because C++ allows for more lower-level optimisations when working with more complex calculations and larger datasets, while being natively compatible with the Swift language. This is to ensure redundancy and scalability in any potential applications of this project.

Currently, the project only supports the relatively straight forward Simple Linear Regression algorithm. The formula for this is modelled as: 
```
y = β₀ + β₁x + ε
```
