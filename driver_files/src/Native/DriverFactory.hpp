#pragma once

#include <cstdlib>
#include <memory>
#include <strings.h>

#include <openvr_driver.h>

#include <Driver/IVRDriver.hpp>

extern "C" __attribute__((visibility("default"))) void* HmdDriverFactory(const char* interface_name, int* return_code);

namespace ExampleDriver {
    std::shared_ptr<ExampleDriver::IVRDriver> GetDriver();
}
