**Swift Regression** as a project acts as an implementation of regression learning algorithms, compatible with Swift programs. The core of the project is written in Swift, some aspects of data preprocessing and calculation are written in C++. This is because C++ allows for more lower-level optimisations when working with more complex calculations and larger datasets, while being natively compatible with the Swift language.

It is focused on linear regression algorithms, with continuous numerical values. Namely, Single Linear Regression:

$$
y=\beta_{\theta} + \beta_{1}x + \epsilon
$$

and Multivariate Linear Regression:

$$
\(y_{i}=\beta _{0}+\beta _{1}x_{i1}+\beta _{2}x_{i2}+\dots +\beta _{q}x_{iq}+\epsilon _{i}\).
$$

The repository has two branches, the "main" branch, which consists of all of the swift-compatable code, and the "Headless" branch, which is a headless terminal-only version of the same code, focused moreso on the C++ code.
