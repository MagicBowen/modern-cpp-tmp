## frp-cpp

template<typename T, typename = bool>
struct is_equality_comparable : std::false_type {};

template<typename T>
struct is_equality_comparable<T, decltype(std::declval<const T&>() == std::declval<const T&>())>
    : std::true_type {};