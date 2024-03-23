#pragma once
#include "Unity/Services/Vivox/zzzz__vx_crash_test_type_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::vx_crash_test_type_t::vx_crash_test_type_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::vx_crash_test_type_t::vx_crash_test_type_t() {}
constexpr ::Unity::Services::Vivox::vx_crash_test_type_t Unity::Services::Vivox::vx_crash_test_type_t::vx_crash_access_zero_pointer{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::vx_crash_test_type_t Unity::Services::Vivox::vx_crash_test_type_t::vx_crash_access_violation{ static_cast<int32_t>(0x1) };
constexpr ::Unity::Services::Vivox::vx_crash_test_type_t Unity::Services::Vivox::vx_crash_test_type_t::vx_crash_stack_overflow{ static_cast<int32_t>(0x2) };
constexpr ::Unity::Services::Vivox::vx_crash_test_type_t Unity::Services::Vivox::vx_crash_test_type_t::vx_crash_heap_corruption{ static_cast<int32_t>(0x3) };
