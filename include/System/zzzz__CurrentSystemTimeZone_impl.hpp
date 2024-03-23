#pragma once
#include "System/zzzz__TimeZone_impl.hpp"
#include "System/zzzz__CurrentSystemTimeZone_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
//  Writing Method size for method: ::System::CurrentSystemTimeZone._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::CurrentSystemTimeZone::*)()>(&::System::CurrentSystemTimeZone::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x29987bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::CurrentSystemTimeZone.GetTimeZoneData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(int32_t, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>, ByRef<bool>)>(&::System::CurrentSystemTimeZone::GetTimeZoneData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2998880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "GetTimeZoneData", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
constexpr int64_t& System::CurrentSystemTimeZone::__cordl_internal_get_m_ticksOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ticksOffset;
}
constexpr int64_t const& System::CurrentSystemTimeZone::__cordl_internal_get_m_ticksOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ticksOffset;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_ticksOffset(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ticksOffset = value;
}
constexpr ::StringW& System::CurrentSystemTimeZone::__cordl_internal_get_m_standardName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_standardName;
}
constexpr ::StringW const& System::CurrentSystemTimeZone::__cordl_internal_get_m_standardName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_standardName;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_standardName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_standardName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::CurrentSystemTimeZone::__cordl_internal_get_m_daylightName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_daylightName;
}
constexpr ::StringW const& System::CurrentSystemTimeZone::__cordl_internal_get_m_daylightName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_daylightName;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_daylightName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_daylightName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::CurrentSystemTimeZone::__cordl_internal_get_m_CachedDaylightChanges() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDaylightChanges;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::CurrentSystemTimeZone::__cordl_internal_get_m_CachedDaylightChanges() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedDaylightChanges;
}
constexpr void System::CurrentSystemTimeZone::__cordl_internal_set_m_CachedDaylightChanges(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CachedDaylightChanges)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::CurrentSystemTimeZone* System::CurrentSystemTimeZone::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::CurrentSystemTimeZone*>());
}
inline void System::CurrentSystemTimeZone::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::CurrentSystemTimeZone::GetTimeZoneData(int32_t year, ByRef<::ArrayW<int64_t, ::Array<int64_t>*>> data, ByRef<::ArrayW<::StringW, ::Array<::StringW>*>> names,
                                                           ByRef<bool> daylight_inverted) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::CurrentSystemTimeZone*>::get(), "GetTimeZoneData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<int64_t, ::Array<int64_t>*>>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::StringW, ::Array<::StringW>*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, year, data, names, daylight_inverted);
}
// Ctor Parameters []
constexpr ::System::CurrentSystemTimeZone::CurrentSystemTimeZone() {}
