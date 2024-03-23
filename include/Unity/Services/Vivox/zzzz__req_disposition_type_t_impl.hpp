#pragma once
#include "Unity/Services/Vivox/zzzz__req_disposition_type_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Services::Vivox::req_disposition_type_t::req_disposition_type_t(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::req_disposition_type_t::req_disposition_type_t() {}
constexpr ::Unity::Services::Vivox::req_disposition_type_t Unity::Services::Vivox::req_disposition_type_t::req_disposition_reply_required{ static_cast<int32_t>(0x0) };
constexpr ::Unity::Services::Vivox::req_disposition_type_t Unity::Services::Vivox::req_disposition_type_t::req_disposition_no_reply_required{ static_cast<int32_t>(0x1) };
