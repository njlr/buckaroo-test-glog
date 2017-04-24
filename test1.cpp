#ifndef TEST1_CPP
#define TEST1_CPP

#include <gtest/gtest.h>
#include <glog/logging.h>

TEST(testglog, basics) {

  google::InitGoogleLogging("");

  LOG(INFO) << "Hello, world. ";
  ASSERT_TRUE(true);
}

#endif
