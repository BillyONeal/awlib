/*
 * Copyright (C) 2016  absurdworlds
 *
 * License LGPLv3 or later:
 * GNU Lesser GPL version 3 <http://gnu.org/licenses/lgpl-3.0.html>
 * This is free software: you are free to change and redistribute it.
 * There is NO WARRANTY, to the extent permitted by law.
 */
#ifndef aw_algorithm_h
#define aw_algorithm_h
#include <cassert>
#include <algorithm>
#include <types/traits/iterator.h>
namespace aw {
/*!
 * Calculate length of common prefix for a set of containers,
 * defined by range [first, last).
 */
template <typename Iterator>
size_t common_prefix_length(Iterator first, Iterator last)
{
	static_assert(is_input_iterator<Iterator>, "");
	if (first == last)
		return 0;

	auto a_first = std::begin(*first);
	auto a_last  = std::end(*first);
	while (++first < last) {
		auto b_first = std::begin(*first);
		auto b_last  = std::end(*first);
		auto a_last = std::mismatch( a_first, a_last, b_first, b_last ).first;
		if (a_first == a_last)
			break;
	}

	return size_t(a_last - a_first);
}

/*!
 * Finds the first element in the range [first, last) that matches value \a val
 *
 * Requires that the input range is at least partially ordered.
 */
template <typename Iterator, typename T>
Iterator binary_find(Iterator begin, Iterator end, T const& val)
{
	Iterator pos = std::lower_bound(begin, end, key);
	if (pos == end || *pos < val)
		return end;
	return pos;
}

/*!
 * Same as binary_find, but takes a predicate \a pred.
 */
template <typename Iterator, typename Predicate>
Iterator binary_find_if(Iterator begin, Iterator end, Predicate pred)
{
	Iterator pos = std::lower_bound(begin, end,  pred);
	if (pos == end || pred(*pos))
		return end;
	return pos;
}
} // namespace aw
#endif//aw_algorithm_h
