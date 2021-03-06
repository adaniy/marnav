cmake_minimum_required(VERSION 3.11)

add_executable(testrunner)

target_sources(testrunner
	PRIVATE
		ais/Test_ais.cpp
		ais/Test_ais_angle.cpp
		ais/Test_ais_binary_001_11.cpp
		ais/Test_ais_binary_200_10.cpp
		ais/Test_ais_message.cpp
		ais/Test_ais_message_01.cpp
		ais/Test_ais_message_02.cpp
		ais/Test_ais_message_03.cpp
		ais/Test_ais_message_04.cpp
		ais/Test_ais_message_05.cpp
		ais/Test_ais_message_06.cpp
		ais/Test_ais_message_07.cpp
		ais/Test_ais_message_08.cpp
		ais/Test_ais_message_09.cpp
		ais/Test_ais_message_10.cpp
		ais/Test_ais_message_11.cpp
		ais/Test_ais_message_12.cpp
		ais/Test_ais_message_13.cpp
		ais/Test_ais_message_14.cpp
		ais/Test_ais_message_17.cpp
		ais/Test_ais_message_18.cpp
		ais/Test_ais_message_19.cpp
		ais/Test_ais_message_20.cpp
		ais/Test_ais_message_21.cpp
		ais/Test_ais_message_22.cpp
		ais/Test_ais_message_23.cpp
		ais/Test_ais_message_24.cpp
		ais/Test_ais_rate_of_turn.cpp
		geo/Test_geo_angle.cpp
		geo/Test_geo_cpa.cpp
		geo/Test_geo_geodesic.cpp
		geo/Test_geo_region.cpp
		math/Test_math_floatingpoint.cpp
		math/Test_math_matrix.cpp
		math/Test_math_quaternion.cpp
		math/Test_math_vector.cpp
		nmea/Test_nmea.cpp
		nmea/Test_nmea_aam.cpp
		nmea/Test_nmea_alm.cpp
		nmea/Test_nmea_angle.cpp
		nmea/Test_nmea_apa.cpp
		nmea/Test_nmea_apb.cpp
		nmea/Test_nmea_bec.cpp
		nmea/Test_nmea_bod.cpp
		nmea/Test_nmea_bwc.cpp
		nmea/Test_nmea_bwr.cpp
		nmea/Test_nmea_bww.cpp
		nmea/Test_nmea_checksum.cpp
		nmea/Test_nmea_date.cpp
		nmea/Test_nmea_dbk.cpp
		nmea/Test_nmea_dbt.cpp
		nmea/Test_nmea_dpt.cpp
		nmea/Test_nmea_dsc.cpp
		nmea/Test_nmea_dse.cpp
		nmea/Test_nmea_dtm.cpp
		nmea/Test_nmea_duration.cpp
		nmea/Test_nmea_fsi.cpp
		nmea/Test_nmea_gbs.cpp
		nmea/Test_nmea_gga.cpp
		nmea/Test_nmea_glc.cpp
		nmea/Test_nmea_gll.cpp
		nmea/Test_nmea_gns.cpp
		nmea/Test_nmea_grs.cpp
		nmea/Test_nmea_gsa.cpp
		nmea/Test_nmea_gst.cpp
		nmea/Test_nmea_gsv.cpp
		nmea/Test_nmea_gtd.cpp
		nmea/Test_nmea_hdg.cpp
		nmea/Test_nmea_hdm.cpp
		nmea/Test_nmea_hdt.cpp
		nmea/Test_nmea_hfb.cpp
		nmea/Test_nmea_hsc.cpp
		nmea/Test_nmea_io.cpp
		nmea/Test_nmea_its.cpp
		nmea/Test_nmea_lcd.cpp
		nmea/Test_nmea_manufacturer.cpp
		nmea/Test_nmea_mob.cpp
		nmea/Test_nmea_msk.cpp
		nmea/Test_nmea_mss.cpp
		nmea/Test_nmea_mtw.cpp
		nmea/Test_nmea_mwd.cpp
		nmea/Test_nmea_mwv.cpp
		nmea/Test_nmea_osd.cpp
		nmea/Test_nmea_pgrme.cpp
		nmea/Test_nmea_pgrmm.cpp
		nmea/Test_nmea_pgrmz.cpp
		nmea/Test_nmea_r00.cpp
		nmea/Test_nmea_rma.cpp
		nmea/Test_nmea_rmb.cpp
		nmea/Test_nmea_rmc.cpp
		nmea/Test_nmea_rot.cpp
		nmea/Test_nmea_rpm.cpp
		nmea/Test_nmea_rsa.cpp
		nmea/Test_nmea_rsd.cpp
		nmea/Test_nmea_rte.cpp
		nmea/Test_nmea_sentence.cpp
		nmea/Test_nmea_sfi.cpp
		nmea/Test_nmea_split.cpp
		nmea/Test_nmea_stalk.cpp
		nmea/Test_nmea_stn.cpp
		nmea/Test_nmea_tag_block.cpp
		nmea/Test_nmea_tds.cpp
		nmea/Test_nmea_tfi.cpp
		nmea/Test_nmea_time.cpp
		nmea/Test_nmea_tll.cpp
		nmea/Test_nmea_tpc.cpp
		nmea/Test_nmea_tpr.cpp
		nmea/Test_nmea_tpt.cpp
		nmea/Test_nmea_ttm.cpp
		nmea/Test_nmea_vbw.cpp
		nmea/Test_nmea_vdm.cpp
		nmea/Test_nmea_vdo.cpp
		nmea/Test_nmea_vdr.cpp
		nmea/Test_nmea_vhw.cpp
		nmea/Test_nmea_vlw.cpp
		nmea/Test_nmea_vpw.cpp
		nmea/Test_nmea_vtg.cpp
		nmea/Test_nmea_vwr.cpp
		nmea/Test_nmea_waypoint.cpp
		nmea/Test_nmea_wcv.cpp
		nmea/Test_nmea_wnc.cpp
		nmea/Test_nmea_wpl.cpp
		nmea/Test_nmea_xdr.cpp
		nmea/Test_nmea_xte.cpp
		nmea/Test_nmea_xtr.cpp
		nmea/Test_nmea_zda.cpp
		nmea/Test_nmea_zdl.cpp
		nmea/Test_nmea_zfo.cpp
		nmea/Test_nmea_ztg.cpp
		seatalk/Test_seatalk_message.cpp
		seatalk/Test_seatalk_message_00.cpp
		seatalk/Test_seatalk_message_01.cpp
		seatalk/Test_seatalk_message_05.cpp
		seatalk/Test_seatalk_message_10.cpp
		seatalk/Test_seatalk_message_11.cpp
		seatalk/Test_seatalk_message_20.cpp
		seatalk/Test_seatalk_message_21.cpp
		seatalk/Test_seatalk_message_22.cpp
		seatalk/Test_seatalk_message_23.cpp
		seatalk/Test_seatalk_message_24.cpp
		seatalk/Test_seatalk_message_25.cpp
		seatalk/Test_seatalk_message_26.cpp
		seatalk/Test_seatalk_message_27.cpp
		seatalk/Test_seatalk_message_30.cpp
		seatalk/Test_seatalk_message_36.cpp
		seatalk/Test_seatalk_message_38.cpp
		seatalk/Test_seatalk_message_50.cpp
		seatalk/Test_seatalk_message_51.cpp
		seatalk/Test_seatalk_message_52.cpp
		seatalk/Test_seatalk_message_53.cpp
		seatalk/Test_seatalk_message_54.cpp
		seatalk/Test_seatalk_message_56.cpp
		seatalk/Test_seatalk_message_58.cpp
		seatalk/Test_seatalk_message_59.cpp
		seatalk/Test_seatalk_message_65.cpp
		seatalk/Test_seatalk_message_66.cpp
		seatalk/Test_seatalk_message_6c.cpp
		seatalk/Test_seatalk_message_86.cpp
		seatalk/Test_seatalk_message_87.cpp
		seatalk/Test_seatalk_message_89.cpp
		utils/Test_utils_bitset.cpp
		utils/Test_utils_mmsi.cpp
		utils/Test_utils_mmsi_country.cpp
		utils/Test_utils_optional.cpp
	)

if(ENABLE_IO)
	target_sources(testrunner
		PRIVATE
			io/Test_io_nmea_reader.cpp
			io/Test_io_seatalk_reader.cpp
		)
endif()

target_include_directories(testrunner
	PRIVATE
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
		$<BUILD_INTERFACE:${CMAKE_CURRENT_BINARY_DIR}/../src>
		$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src>
	)

target_link_libraries(testrunner
	marnav::marnav
	gmock::gmock
	pthread
	)

add_test(
	NAME unittest-testrunner
	COMMAND testrunner
	WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
	)

add_custom_target(testrunner_runtest
	COMMAND testrunner --gtest_shuffle
	DEPENDS testrunner
	WORKING_DIRECTORY ${CMAKE_BINARY_DIR}
	)

add_custom_target(unittest)
add_dependencies(unittest testrunner_runtest)

execute_process(
	COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_CURRENT_SOURCE_DIR}/ais/ais-sample.tar.gz"
	WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
	)

add_executable(test-ais-sample
	test-ais-sample.cpp
	)

target_include_directories(test-ais-sample
	PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src>)

target_link_libraries(test-ais-sample PRIVATE marnav::marnav)

add_test(
	NAME integrationtest-test-ais-sample
	COMMAND test-ais-sample
	WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
	)

execute_process(
	COMMAND ${CMAKE_COMMAND} -E tar xzf "${CMAKE_CURRENT_SOURCE_DIR}/nmea/nmea-sample.tar.gz"
	WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
	)

add_executable(test-nmea-sample test-nmea-sample.cpp)

target_include_directories(test-nmea-sample
	PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src>)

target_link_libraries(test-nmea-sample PRIVATE marnav::marnav)

add_test(
	NAME integrationtest-test-nmea-sample
	COMMAND test-nmea-sample
	WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
	)

# excluded with coverage builds, does not make sense otherwise
if(NOT CMAKE_BUILD_TYPE MATCHES Coverage)
	macro(setup_benchmark NAME SOURCE)
		add_executable(${NAME} ${SOURCE})
		target_include_directories(${NAME}
			PRIVATE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../src>)
		target_link_libraries(${NAME} marnav::marnav benchmark::benchmark pthread)
	endmacro()

	setup_benchmark(benchmark_nmea_split nmea/Benchmark_nmea_split.cpp)
	setup_benchmark(benchmark_nmea_checksum nmea/Benchmark_nmea_checksum.cpp)
	setup_benchmark(benchmark_nmea_manufacturer nmea/Benchmark_nmea_manufacturer.cpp)
	setup_benchmark(benchmark_nmea_sentence nmea/Benchmark_nmea_sentence.cpp)
	setup_benchmark(benchmark_ais_message ais/Benchmark_ais_message.cpp)
endif()
