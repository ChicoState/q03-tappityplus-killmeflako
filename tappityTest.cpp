/**
 * Unit Test suite
**/

#include <gtest/gtest.h>
#include "tappity.h"
 
class tappityTest : public ::testing::Test
{
	protected:
		tappityTest(){} 
		virtual ~tappityTest(){} 
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(tappityTest, testing_difference_happy)
{
	std::string reference = "Hello";
	tappity myEntry(reference);
	myEntry.entry("hello");
	int result = myEntry.length_difference();
	ASSERT_EQ(result, 0);
}

TEST(tappityTest, testing_difference_sad)
{
	std::string reference = "Hello";
	tappity myEntry(reference);
	myEntry.entry("hi");
	int result = myEntry.length_difference();
	ASSERT_EQ(result, 0);
}

TEST(tappityTest, testing_accuracy_happy)
{
	std::string reference = "ABDOMINOANTERIOR";
	tappity myEntry(reference);
	myEntry.entry("ABDOMINOANTERIOR");
	int result = myEntry.accuracy();
	ASSERT_EQ(result, 100);
}

TEST(tappityTest, testing_accuracy_happy_2)
{
	std::string reference = "ABDOMINOANTERIOR";
	tappity myEntry(reference);
	myEntry.entry("ABDOMINO");
	int result = myEntry.accuracy();
	ASSERT_EQ(result, 50);
}

TEST(tappityTest, testing_accuracy_sad)
{
	std::string reference = "ABDOMINOANTERIOR";
	tappity myEntry(reference);
	myEntry.entry("word");
	int result = myEntry.accuracy();
	ASSERT_EQ(result, 100);
}


