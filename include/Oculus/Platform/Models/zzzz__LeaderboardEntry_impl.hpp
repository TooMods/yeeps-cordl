#pragma once
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/Models/zzzz__LeaderboardEntry_def.hpp"
#include "Oculus/Platform/Models/zzzz__SupplementaryMetric_def.hpp"
#include "Oculus/Platform/Models/zzzz__User_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Models::LeaderboardEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Platform::Models::LeaderboardEntry::*)(void*)>(
    &::Oculus::Platform::Models::LeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x1e61ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LeaderboardEntry*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_DisplayScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayScore;
}
constexpr ::StringW const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_DisplayScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DisplayScore;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_DisplayScore(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___DisplayScore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_ExtraData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraData;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_ExtraData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ExtraData;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_ExtraData(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ExtraData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint64_t& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get__cordl_ID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr uint64_t const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get__cordl_ID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_ID;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set__cordl_ID(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_ID = value;
}
constexpr int32_t& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_Rank() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Rank;
}
constexpr int32_t const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_Rank() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Rank;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_Rank(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Rank = value;
}
constexpr int64_t& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_Score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Score;
}
constexpr int64_t const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_Score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Score;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_Score(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Score = value;
}
constexpr ::Oculus::Platform::Models::SupplementaryMetric*& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_SupplementaryMetricOptional() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SupplementaryMetricOptional;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::SupplementaryMetric*> const&
Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_SupplementaryMetricOptional() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SupplementaryMetricOptional;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_SupplementaryMetricOptional(::Oculus::Platform::Models::SupplementaryMetric* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SupplementaryMetricOptional)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Oculus::Platform::Models::SupplementaryMetric*& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_SupplementaryMetric() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SupplementaryMetric;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::SupplementaryMetric*> const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_SupplementaryMetric() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SupplementaryMetric;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_SupplementaryMetric(::Oculus::Platform::Models::SupplementaryMetric* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___SupplementaryMetric)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::DateTime& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_Timestamp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timestamp;
}
constexpr ::System::DateTime const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_Timestamp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Timestamp;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_Timestamp(::System::DateTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Timestamp = value;
}
constexpr ::Oculus::Platform::Models::User*& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_User() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___User;
}
constexpr ::cordl_internals::to_const_pointer<::Oculus::Platform::Models::User*> const& Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_get_User() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___User;
}
constexpr void Oculus::Platform::Models::LeaderboardEntry::__cordl_internal_set_User(::Oculus::Platform::Models::User* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___User)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Platform::Models::LeaderboardEntry* Oculus::Platform::Models::LeaderboardEntry::New_ctor(void* o) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Platform::Models::LeaderboardEntry*>(o));
}
inline void Oculus::Platform::Models::LeaderboardEntry::_ctor(void* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Models::LeaderboardEntry*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, o);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Models::LeaderboardEntry::LeaderboardEntry() {}
