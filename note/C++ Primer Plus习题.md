电子书[pdf 版](E:\C++\C++%20Prime%20Plus\书籍及附件pdf\C++Primerplus第6版.pdf)
复习题答案[附录 J66 页](file:///D:/chorme%E4%B8%8B%E8%BD%BD/%E9%99%84%E5%BD%95.pdf)
编程练习答案[课后习题答案](https://github.com/ShujiaHuang/Cpp-Primer-Plus-6th/blob/main/practice/chapter02/README.md)

---

## 第二章

### t1

为什么要加 std？
在 C++ 中，`std` 是标准命名空间（namespace）的缩写。为了避免命名冲突，C++ 标准库中的大多数函数和类都位于 `std` 命名空间中，例如 `std::cout`、`std::cin` 和 `std::string`
当您使用标准库中的函数或类时（例如 `cout` 或 `string`），需要在前面加上 `std::`，以告诉编译器这是来自 `std` 命名空间的内容，而不是全局命名空间中的内容
`using namespace std;` 表示您希望直接使用 `std` 命名空间中的所有内容，不再需要每次写 `std::` 前缀。不过，**在大型项目中使用 `using namespace std;` 可能会引发名称冲突**
