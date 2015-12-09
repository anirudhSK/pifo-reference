#ifndef OPTIONAL_H_
#define OPTIONAL_H_

#include <cassert>

/// Simplistic implementation of Optional types
/// Boost's optional class is far too complicated
/// for my liking and includes too many implicit
/// type casts.
template <class T>
class Optional {
 public:
  /// Default constructor for Optional
  Optional() : initialized_(false), value_(T()) {}

  /// Constructor from type T
  Optional(const T & t_value) : initialized_(true), value_(t_value) {}

  /// Getter for value
  T get() const { assert(initialized_); return value_; }

  /// Setter for value
  void set(T t_value) { value_ = t_value; initialized_ = true; }

  /// Is it initalized
  bool initialized() const { return initialized_; }

 private:
  bool initialized_ = false;
  T value_ = {};
};

#endif  // OPTIONAL_H_
