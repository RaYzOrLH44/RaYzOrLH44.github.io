#define CATCH_CONFIG_MAIN
#include <catch2/catch_version_macros.hpp>

unsigned int factorielle(unsigned int nombre)
{
	return nombre <= 1 ? 1 : factorielle(nombre - 1) * nombre;
}

TEST_CASE("Les factorielles sont calculées", "[factorielle]")
{
	REQUIRE(factorielle(1) == 1);
	REQUIRE(factorielle(2) == 2);
	REQUIRE(factorielle(3) == 6);
	REQUIRE(factorielle(10) == 3628800);
}