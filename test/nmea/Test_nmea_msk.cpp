#include <gtest/gtest.h>
#include <marnav/nmea/msk.hpp>
#include <marnav/nmea/nmea.hpp>

namespace
{

using namespace marnav;

class Test_nmea_msk : public ::testing::Test
{
};

TEST_F(Test_nmea_msk, contruction) { EXPECT_NO_THROW(nmea::msk msk); }

TEST_F(Test_nmea_msk, parse)
{
	auto s = nmea::make_sentence("$GPMSK,123,A,110,M,321*52");
	ASSERT_NE(nullptr, s);

	auto msk = nmea::sentence_cast<nmea::msk>(s);
	ASSERT_NE(nullptr, msk);
}

TEST_F(Test_nmea_msk, parse_invalid_number_of_arguments)
{
	EXPECT_ANY_THROW(nmea::msk::parse("@@", {4, "@"}));
	EXPECT_ANY_THROW(nmea::msk::parse("@@", {6, "@"}));
}

TEST_F(Test_nmea_msk, empty_to_string)
{
	nmea::msk msk;

	EXPECT_STREQ("$GPMSK,000,A,000,A,*6E", nmea::to_string(msk).c_str());
}

}