#include <units/detail/basic_unit.hpp>

struct test_unit {
	using value_type = double;
	using dimension = int;
};

template class units::basic_unit<test_unit>;

