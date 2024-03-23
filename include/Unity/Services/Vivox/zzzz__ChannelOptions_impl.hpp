#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ChannelOptions_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelOptions.get_MakeActiveChannelUponJoining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Services::Vivox::ChannelOptions::*)()>(
    &::Unity::Services::Vivox::ChannelOptions::get_MakeActiveChannelUponJoining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c177a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelOptions*>::get(), "get_MakeActiveChannelUponJoining",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelOptions.set_MakeActiveChannelUponJoining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelOptions::*)(bool)>(
    &::Unity::Services::Vivox::ChannelOptions::set_MakeActiveChannelUponJoining)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x1c177ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelOptions*>::get(), "set_MakeActiveChannelUponJoining",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::ChannelOptions._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::ChannelOptions::*)()>(&::Unity::Services::Vivox::ChannelOptions::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c177b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelOptions*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& Unity::Services::Vivox::ChannelOptions::__cordl_internal_get__MakeActiveChannelUponJoining_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MakeActiveChannelUponJoining_k__BackingField;
}
constexpr bool const& Unity::Services::Vivox::ChannelOptions::__cordl_internal_get__MakeActiveChannelUponJoining_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MakeActiveChannelUponJoining_k__BackingField;
}
constexpr void Unity::Services::Vivox::ChannelOptions::__cordl_internal_set__MakeActiveChannelUponJoining_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MakeActiveChannelUponJoining_k__BackingField = value;
}
inline bool Unity::Services::Vivox::ChannelOptions::get_MakeActiveChannelUponJoining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelOptions*>::get(),
                                                                             "get_MakeActiveChannelUponJoining", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Services::Vivox::ChannelOptions::set_MakeActiveChannelUponJoining(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelOptions*>::get(), "set_MakeActiveChannelUponJoining",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Unity::Services::Vivox::ChannelOptions* Unity::Services::Vivox::ChannelOptions::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::ChannelOptions*>());
}
inline void Unity::Services::Vivox::ChannelOptions::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::ChannelOptions*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::ChannelOptions::ChannelOptions() {}
