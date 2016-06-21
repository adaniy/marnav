#include "wpl.hpp"
#include <marnav/nmea/io.hpp>
#include <marnav/nmea/convert.hpp>

namespace marnav
{
namespace nmea
{
MARNAV_NMEA_DEFINE_SENTENCE_PARSE_FUNC(wpl)

constexpr const char * wpl::TAG;

wpl::wpl()
	: sentence(ID, TAG, talker_id::global_positioning_system)
{
}

wpl::wpl(const std::string & talker, fields::const_iterator first, fields::const_iterator last)
	: sentence(ID, TAG, talker)
{
	if (std::distance(first, last) != 5)
		throw std::invalid_argument{"invalid number of fields in wpl"};

	read(*(first + 0), lat);
	read(*(first + 1), lat_hem);
	read(*(first + 2), lon);
	read(*(first + 3), lon_hem);
	read(*(first + 4), waypoint_id);

	// instead of reading data into temporary lat/lon, let's correct values afterwards
	lat = correct_hemisphere(lat, lat_hem);
	lon = correct_hemisphere(lon, lon_hem);
}

utils::optional<geo::longitude> wpl::get_longitude() const
{
	return (lon && lon_hem) ? lon : utils::optional<geo::longitude>{};
}

utils::optional<geo::latitude> wpl::get_latitude() const
{
	return (lat && lat_hem) ? lat : utils::optional<geo::latitude>{};
}

void wpl::set_lat(const geo::latitude & t)
{
	lat = t;
	lat_hem = convert_hemisphere(t);
}

void wpl::set_lon(const geo::longitude & t)
{
	lon = t;
	lon_hem = convert_hemisphere(t);
}

std::vector<std::string> wpl::get_data() const
{
	return {to_string(lat), to_string(lat_hem), to_string(lon), to_string(lon_hem),
		to_string(waypoint_id)};
}
}
}
