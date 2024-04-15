#pragma once
#include <functional>

    namespace calculisto::hash_combine
{
    namespace
detail
{
        template <class T>
        auto
    hash_combine (std::size_t& seed, T&& v)
    {
        seed = seed * 37 + std::hash <std::remove_cvref_t <T>> {} (v);
    }
}

    template <class T, class... Ts>
    auto
hash_combine (T&& first, Ts&&... rest)
{
        auto
    h = std::hash <std::decay_t <T>> () (std::forward <T> (first));
    (detail::hash_combine (h, std::forward <Ts> (rest)), ...);
    return h;
}

    template <class It>
    auto
hash_combine_range (It first, It last)
{
        std::size_t 
    seed = 0;
    for(; first != last; ++first)
    {
        detail::hash_combine(seed, *first);
    }
    return seed;
}
} // namespace calculisto::hash_combine
