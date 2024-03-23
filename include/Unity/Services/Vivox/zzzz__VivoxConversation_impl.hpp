#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Services/Vivox/zzzz__ConversationType_impl.hpp"
#include "Unity/Services/Vivox/zzzz__VivoxConversation_def.hpp"
#include "Unity/Services/Vivox/zzzz__ConversationType_def.hpp"
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxConversation.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Unity::Services::Vivox::VivoxConversation::*)()>(
    &::Unity::Services::Vivox::VivoxConversation::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c13338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxConversation*>::get(), "get_Name",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxConversation.get_ConversationType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Services::Vivox::ConversationType (::Unity::Services::Vivox::VivoxConversation::*)()>(
    &::Unity::Services::Vivox::VivoxConversation::get_ConversationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1c13340;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxConversation*>::get(),
                                                                               "get_ConversationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Services::Vivox::VivoxConversation._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Services::Vivox::VivoxConversation::*)(::StringW, ::Unity::Services::Vivox::ConversationType)>(
    &::Unity::Services::Vivox::VivoxConversation::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1c13348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxConversation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ConversationType>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& Unity::Services::Vivox::VivoxConversation::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& Unity::Services::Vivox::VivoxConversation::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void Unity::Services::Vivox::VivoxConversation::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Unity::Services::Vivox::ConversationType& Unity::Services::Vivox::VivoxConversation::__cordl_internal_get__ConversationType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConversationType_k__BackingField;
}
constexpr ::Unity::Services::Vivox::ConversationType const& Unity::Services::Vivox::VivoxConversation::__cordl_internal_get__ConversationType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ConversationType_k__BackingField;
}
constexpr void Unity::Services::Vivox::VivoxConversation::__cordl_internal_set__ConversationType_k__BackingField(::Unity::Services::Vivox::ConversationType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ConversationType_k__BackingField = value;
}
inline ::StringW Unity::Services::Vivox::VivoxConversation::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxConversation*>::get(), "get_Name",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::ConversationType Unity::Services::Vivox::VivoxConversation::get_ConversationType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxConversation*>::get(),
                                                                             "get_ConversationType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Services::Vivox::ConversationType, false>(this, ___internal_method);
}
inline ::Unity::Services::Vivox::VivoxConversation* Unity::Services::Vivox::VivoxConversation::New_ctor(::StringW name, ::Unity::Services::Vivox::ConversationType conversationType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Unity::Services::Vivox::VivoxConversation*>(name, conversationType));
}
inline void Unity::Services::Vivox::VivoxConversation::_ctor(::StringW name, ::Unity::Services::Vivox::ConversationType conversationType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Services::Vivox::VivoxConversation*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Services::Vivox::ConversationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, conversationType);
}
// Ctor Parameters []
constexpr ::Unity::Services::Vivox::VivoxConversation::VivoxConversation() {}
