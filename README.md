# `CxxRandomAccessCollection` Not Working

Minimum example for [issue raised on Swift forums](https://forums.swift.org/t/c-interop-for-in-loop-requires-std-1-vector-element-to-conform-to-sequence/66232)

# Structure

`cxxLibTarget <-- cxxExecutableTarget (mixed with Swift)`

```header
int anInt(); // Callable from Swift

std::vector<int> anIntVector(); // Callable from Swift

std::vector<std::string> aStringVector(); // ❌ NOT callable from Swift
```

# Compilation Error

When calling `for string in aStringVector()` I get compilation error:

```swift
For-in loop requires 'std.__1.vector<basic_string<Int8, char_traits<Int8>, allocator<Int8>>, allocator<basic_string<Int8, char_traits<Int8>, allocator<Int8>>>>' to conform to 'Sequence'
```
